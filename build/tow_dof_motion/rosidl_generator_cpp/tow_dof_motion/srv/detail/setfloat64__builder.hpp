// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tow_dof_motion:srv/Setfloat64.idl
// generated code does not contain a copyright notice

#ifndef TOW_DOF_MOTION__SRV__DETAIL__SETFLOAT64__BUILDER_HPP_
#define TOW_DOF_MOTION__SRV__DETAIL__SETFLOAT64__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tow_dof_motion/srv/detail/setfloat64__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tow_dof_motion
{

namespace srv
{

namespace builder
{

class Init_Setfloat64_Request_data
{
public:
  Init_Setfloat64_Request_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tow_dof_motion::srv::Setfloat64_Request data(::tow_dof_motion::srv::Setfloat64_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tow_dof_motion::srv::Setfloat64_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tow_dof_motion::srv::Setfloat64_Request>()
{
  return tow_dof_motion::srv::builder::Init_Setfloat64_Request_data();
}

}  // namespace tow_dof_motion


namespace tow_dof_motion
{

namespace srv
{

namespace builder
{

class Init_Setfloat64_Response_success
{
public:
  Init_Setfloat64_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tow_dof_motion::srv::Setfloat64_Response success(::tow_dof_motion::srv::Setfloat64_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tow_dof_motion::srv::Setfloat64_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tow_dof_motion::srv::Setfloat64_Response>()
{
  return tow_dof_motion::srv::builder::Init_Setfloat64_Response_success();
}

}  // namespace tow_dof_motion

#endif  // TOW_DOF_MOTION__SRV__DETAIL__SETFLOAT64__BUILDER_HPP_
