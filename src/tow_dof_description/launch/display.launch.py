import os
import launch
import launch_ros.actions
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import Command, LaunchConfiguration
from launch.conditions import IfCondition
from launch_ros.parameter_descriptions import ParameterValue
from launch_ros.substitutions import FindPackageShare
from launch_ros.actions import Node

def generate_launch_description():
    pkg_path = get_package_share_directory('tow_dof_description')

    xacro_file = os.path.join(pkg_path, 'urdf', 'dof2.urdf.xacro')
    rviz_config_file = os.path.join(pkg_path, 'rviz', 'tow_dof_config.rviz')
    controllers_yaml = os.path.join(pkg_path, 'config', 'ros2_controllers.yaml')

    robot_description = ParameterValue(Command(['xacro ', xacro_file]), value_type=str)

    use_rviz = LaunchConfiguration('use_rviz', default='true')

    robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='screen',
        parameters=[{'robot_description': robot_description}]
    )

    joint_state_publisher_gui_node = Node(
        package='joint_state_publisher_gui',
        executable='joint_state_publisher_gui',
        name='joint_state_publisher_gui',
        output='screen'
    )

    rviz_node = Node(
        condition=IfCondition(use_rviz),
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        arguments=['-d', rviz_config_file]
    )

    controller_manager = Node(
        package="controller_manager",
        executable="ros2_control_node",
        parameters=[{'robot_description': robot_description},
                    controllers_yaml],
        output="screen"
    )

    load_joint_trajectory_controller = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["joint_trajectory_controller"],
        output="screen"
    )

    return LaunchDescription([
        DeclareLaunchArgument('use_rviz', default_value='true', description='Launch RViz?'),
        robot_state_publisher_node,
        joint_state_publisher_gui_node,
        rviz_node,
        controller_manager,
        load_joint_trajectory_controller  # ✅ Corrected variable name
    ])
