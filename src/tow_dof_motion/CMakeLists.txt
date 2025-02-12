cmake_minimum_required(VERSION 3.8)
project(tow_dof_motion)

# Set C++ standard to C++17 and mark it as required.
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
  set(CMAKE_CXX_STANDARD_REQUIRED ON)
endif()

# --- Find ROS 2 and MoveIt packages ---
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(trajectory_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(moveit_ros_planning_interface REQUIRED)
find_package(moveit_core REQUIRED)
find_package(moveit_visual_tools REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(moveit_msgs REQUIRED)

# --- Generate Messages and Services ---
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/JointCommand.msg"
  "srv/Setfloat64.srv"
  DEPENDENCIES std_msgs moveit_msgs
)

# --- Export the generated message and service dependencies ---
ament_export_dependencies(rosidl_default_runtime)
rosidl_get_typesupport_target(cpp_typesupport_target ${PROJECT_NAME} "rosidl_typesupport_cpp")

# --- Add the motion_node executable (publishes joint commands) ---
add_executable(motion_node src/motion_node.cpp)
ament_target_dependencies(motion_node
  rclcpp
  trajectory_msgs
  moveit_msgs
)
target_link_libraries(motion_node ${cpp_typesupport_target})

# --- Add the move_to_position executable (calls MoveIt IK) ---
add_executable(move_to_position src/move_to_position.cpp)
ament_target_dependencies(move_to_position
  rclcpp
  trajectory_msgs
  moveit_ros_planning_interface
  moveit_core
  moveit_visual_tools
  geometry_msgs
  moveit_msgs
)
target_link_libraries(move_to_position ${cpp_typesupport_target})

# --- Install executables ---
install(
  TARGETS motion_node move_to_position
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
