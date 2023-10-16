set(_AMENT_PACKAGE_NAME "moveit_kinematics")
set(moveit_kinematics_VERSION "2.8.0")
set(moveit_kinematics_MAINTAINER "Henning Kayser <henningkayser@picknik.ai>, Tyler Weaver <tyler@picknik.ai>, G.A. vd. Hoorn <g.a.vanderhoorn@tudelft.nl>, Jorge Nicho <jorge.nicho@swri.org>, MoveIt Release Team <moveit_releasers@googlegroups.com>")
set(moveit_kinematics_BUILD_DEPENDS "moveit_common" "moveit_core" "class_loader" "pluginlib" "generate_parameter_library" "eigen" "tf2" "tf2_kdl" "orocos_kdl_vendor" "moveit_msgs" "moveit_ros_planning" "rsl")
set(moveit_kinematics_BUILDTOOL_DEPENDS "ament_cmake")
set(moveit_kinematics_BUILD_EXPORT_DEPENDS "moveit_common" "moveit_core" "class_loader" "pluginlib" "generate_parameter_library" "eigen" "tf2" "tf2_kdl" "orocos_kdl_vendor" "moveit_msgs" "moveit_ros_planning" "rsl")
set(moveit_kinematics_BUILDTOOL_EXPORT_DEPENDS )
set(moveit_kinematics_EXEC_DEPENDS "urdfdom" "python3-lxml" "moveit_common" "moveit_core" "class_loader" "pluginlib" "generate_parameter_library" "eigen" "tf2" "tf2_kdl" "orocos_kdl_vendor" "moveit_msgs" "moveit_ros_planning" "rsl")
set(moveit_kinematics_TEST_DEPENDS "moveit_resources_fanuc_description" "moveit_resources_fanuc_moveit_config" "moveit_resources_panda_description" "moveit_resources_panda_moveit_config" "ament_cmake_gtest" "ament_lint_auto" "ament_lint_common" "ros_testing" "moveit_configs_utils" "launch_param_builder")
set(moveit_kinematics_GROUP_DEPENDS )
set(moveit_kinematics_MEMBER_OF_GROUPS )
set(moveit_kinematics_DEPRECATED "")
set(moveit_kinematics_EXPORT_TAGS)
list(APPEND moveit_kinematics_EXPORT_TAGS "<build_type>ament_cmake</build_type>")
list(APPEND moveit_kinematics_EXPORT_TAGS "<moveit_core plugin=\"kdl_kinematics_plugin_description.xml\"/>")
list(APPEND moveit_kinematics_EXPORT_TAGS "<moveit_core plugin=\"lma_kinematics_plugin_description.xml\"/>")
list(APPEND moveit_kinematics_EXPORT_TAGS "<moveit_core plugin=\"srv_kinematics_plugin_description.xml\"/>")
list(APPEND moveit_kinematics_EXPORT_TAGS "<moveit_core plugin=\"cached_ik_kinematics_plugin_description.xml\"/>")
