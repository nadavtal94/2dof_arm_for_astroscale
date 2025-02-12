// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tow_dof_motion:msg/JointCommand.idl
// generated code does not contain a copyright notice

#ifndef TOW_DOF_MOTION__MSG__DETAIL__JOINT_COMMAND__BUILDER_HPP_
#define TOW_DOF_MOTION__MSG__DETAIL__JOINT_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tow_dof_motion/msg/detail/joint_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tow_dof_motion
{

namespace msg
{

namespace builder
{

class Init_JointCommand_duration
{
public:
  explicit Init_JointCommand_duration(::tow_dof_motion::msg::JointCommand & msg)
  : msg_(msg)
  {}
  ::tow_dof_motion::msg::JointCommand duration(::tow_dof_motion::msg::JointCommand::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tow_dof_motion::msg::JointCommand msg_;
};

class Init_JointCommand_positions
{
public:
  Init_JointCommand_positions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointCommand_duration positions(::tow_dof_motion::msg::JointCommand::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return Init_JointCommand_duration(msg_);
  }

private:
  ::tow_dof_motion::msg::JointCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tow_dof_motion::msg::JointCommand>()
{
  return tow_dof_motion::msg::builder::Init_JointCommand_positions();
}

}  // namespace tow_dof_motion

#endif  // TOW_DOF_MOTION__MSG__DETAIL__JOINT_COMMAND__BUILDER_HPP_
