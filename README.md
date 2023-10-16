# mycobot_ROS2
Here We Go Again!


## Notes

Error while running colcon build --execute-sequential --continue-on-error
package name: moteit_task_constructor_capabilities
some objects errored out and suggested adding a trailing underscore. Added underscore without knowing the full implications of the trailing underscore and if it will break functionality. Note for future ref.

Objects:
plan_components
description
trajectory
effect_on_success

change. Add trailing underscore,
plan_components_
description_
trajectory_
effect_on_success_


