#include "rclcpp/rclcpp.hpp"
#include "tow_dof_motion/srv/Setfloat64.hpp"
#include "moveit/move_group_interface/move_group_interface.h"
#include "moveit/planning_scene_interface/planning_scene_interface.h"

class MoveToPositionService : public rclcpp::Node
{
public:
  MoveToPositionService() : Node("move_to_position_service")
  {
    // Delay initialization of the MoveGroupInterface until after construction.
    timer_ = this->create_wall_timer(
      std::chrono::milliseconds(0),
      std::bind(&MoveToPositionService::init, this));

    // Create the service using your custom service type.
    service_ = this->create_service<tow_dof_motion::srv::Setfloat64>(
      "move_to_position",
      std::bind(&MoveToPositionService::handle_service, this,
                std::placeholders::_1, std::placeholders::_2));

    RCLCPP_INFO(this->get_logger(), "MoveToPosition Service is Ready!");
  }

private:
  // This initialization function is called immediately after the node is constructed.
  void init()
  {
    // Now that the node is fully constructed, shared_from_this() is safe.
    move_group_ = std::make_shared<moveit::planning_interface::MoveGroupInterface>(
      this->shared_from_this(), "arm");

    // Cancel the timer since initialization is complete.
    timer_->cancel();
  }

  void handle_service(
    const std::shared_ptr<tow_dof_motion::srv::Setfloat64::Request> request,
    std::shared_ptr<tow_dof_motion::srv::Setfloat64::Response> response)
  {
    RCLCPP_INFO(this->get_logger(), "Received request to move to position: %f", request->data);

    // Retrieve the current joint values.
    std::vector<double> current_joint_values = move_group_->getCurrentJointValues();
    if (current_joint_values.size() < 2)
    {
      RCLCPP_ERROR(this->get_logger(), "Expected at least 2 joints in planning group 'arm'");
      response->success = false;
      return;
    }

    // Use the received value as the target for joint1.
    current_joint_values[0] = request->data;
    // Optionally: you may set joint2 to a fixed value or leave it as is.
    // For example: current_joint_values[1] = 0.0;

    // Set the target joint values.
    move_group_->setJointValueTarget(current_joint_values);

    // Plan the motion.
    moveit::planning_interface::MoveGroupInterface::Plan my_plan;
    bool success = (move_group_->plan(my_plan) == moveit::core::MoveItErrorCode::SUCCESS);

    if (success)
    {
      RCLCPP_INFO(this->get_logger(), "Planning successful. Executing...");
      move_group_->execute(my_plan);
      response->success = true;
    }
    else
    {
      RCLCPP_ERROR(this->get_logger(), "Planning failed.");
      response->success = false;
    }
  }

  // Member variables.
  std::shared_ptr<moveit::planning_interface::MoveGroupInterface> move_group_;
  rclcpp::Service<tow_dof_motion::srv::Setfloat64>::SharedPtr service_;
  rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  // Create the node as a shared pointer so that shared_from_this() works.
  auto node = std::make_shared<MoveToPositionService>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
