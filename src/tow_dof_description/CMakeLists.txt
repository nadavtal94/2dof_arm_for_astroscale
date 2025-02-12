cmake_minimum_required(VERSION 3.8)
project(tow_dof_description)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(xacro REQUIRED)

# Install URDF and Xacro files
install(
  DIRECTORY urdf/
  DESTINATION share/${PROJECT_NAME}/urdf
)

# Install RViz configuration files
install(
  DIRECTORY rviz/
  DESTINATION share/${PROJECT_NAME}/rviz
)

# Install config files
install(
  DIRECTORY config/
  DESTINATION share/${PROJECT_NAME}/config
)

# Install launch files
install(
  DIRECTORY launch/
  DESTINATION share/${PROJECT_NAME}/launch
)

# Package export
ament_package()
