import rclpy
from moveit_msgs.srv import GetPositionIK
from rclpy.node import Node
from moveit2.moveit_py import MoveItPy
from moveit2 import RobotState
from geometry_msgs.msg import PoseStamped

rclpy.init()
logger = rclpy.logging.get_logger("moveit_py.pose_goal")

# instantiate MoveItPy instance and get planning component
panda = MoveItPy(node_name="moveit_py")
panda_arm = panda.get_planning_component("panda_arm")
logger.info("MoveItPy instance created")

def plan_and_execute(
        robot,
        planning_component,
        logger,
        single_plan_parameters=None,
        multi_plan_parameters=None,
        ):
        """A helper function to plan and execute a motion."""
        # plan to goal
        logger.info("Planning trajectory")
        if multi_plan_parameters is not None:
                plan_result = planning_component.plan(
                        multi_plan_parameters=multi_plan_parameters
                )
        elif single_plan_parameters is not None:
                plan_result = planning_component.plan(
                        single_plan_parameters=single_plan_parameters
                )
        else:
                plan_result = planning_component.plan()

        # execute the plan
        if plan_result:
                logger.info("Executing plan")
                robot_trajectory = plan_result.trajectory
                robot.execute(robot_trajectory, controllers=[])
        else:
                logger.error("Planning failed")

# DEFAUT CONFIG
# set plan start state using predefined state
panda_arm.set_start_state(configuration_name="ready")
# set pose goal using predefined state
panda_arm.set_goal_state(configuration_name="extended")
# plan to goal
plan_and_execute(panda, panda_arm, logger)

# ROBOT STATE
# instantiate a RobotState instance using the current robot model
robot_model = panda.get_robot_model()
robot_state = RobotState(robot_model)

# randomize the robot state
robot_state.set_to_random_positions()
# set plan start state to current state
panda_arm.set_start_state_to_current_state()
# set goal state to the initialized robot state
logger.info("Set goal state to the initialized robot state")
panda_arm.set_goal_state(robot_state=robot_state)
# plan to goal
plan_and_execute(panda, panda_arm, logger)

# POSE GOAL
# set plan start state to current state
panda_arm.set_start_state_to_current_state()

# set pose goal with PoseStamped message
pose_goal = PoseStamped()
pose_goal.header.frame_id = "panda_link0"
pose_goal.pose.orientation.w = 1.0
pose_goal.pose.position.x = 0.28
pose_goal.pose.position.y = -0.2
pose_goal.pose.position.z = 0.5
panda_arm.set_goal_state(pose_stamped_msg=pose_goal, pose_link="panda_link8")

# plan to goal
plan_and_execute(panda, panda_arm, logger)

