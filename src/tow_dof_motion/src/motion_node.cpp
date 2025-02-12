#include "rclcpp/rclcpp.hpp"
#include <trajectory_msgs/msg/joint_trajectory.hpp>
#include <trajectory_msgs/msg/joint_trajectory_point.hpp>

class MotionNode : public rclcpp::Node {
public:
  MotionNode() : Node("motion_node") {
    // Publisher now uses the standard trajectory message type.
    publisher_ = this->create_publisher<trajectory_msgs::msg::JointTrajectory>(
      "/arm_controller/joint_trajectory", 10);

    // Publish every 2 seconds.
    timer_ = this->create_wall_timer(
      std::chrono::seconds(2),
      std::bind(&MotionNode::publish_joint_command, this));
  }

private:
  void publish_joint_command() {
    trajectory_msgs::msg::JointTrajectory traj_msg;
    // Set the joint names. Ensure these match your robot's configuration.
    traj_msg.joint_names = {"joint1", "joint2"};

    // Create a trajectory point.
    trajectory_msgs::msg::JointTrajectoryPoint point;
    // Set desired positions (example values)
    point.positions = {1.0, -0.5};
    // Specify how long the movement should take.
    point.time_from_start = rclcpp::Duration::from_seconds(2.0);

    // Add the point to the trajectory.
    traj_msg.points.push_back(point);

    // Publish the trajectory message.
    publisher_->publish(traj_msg);
    RCLCPP_INFO(this->get_logger(),
                "Publishing trajectory command with positions: [1.0, -0.5] over 2 seconds");
  }

  rclcpp::Publisher<trajectory_msgs::msg::JointTrajectory>::SharedPtr publisher_;
  rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char ** argv) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MotionNode>());
  rclcpp::shutdown();
  return 0;
}
