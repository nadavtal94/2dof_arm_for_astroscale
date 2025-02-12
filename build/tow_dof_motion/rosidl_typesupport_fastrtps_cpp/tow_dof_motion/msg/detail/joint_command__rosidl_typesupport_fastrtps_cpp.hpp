// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from tow_dof_motion:msg/JointCommand.idl
// generated code does not contain a copyright notice

#ifndef TOW_DOF_MOTION__MSG__DETAIL__JOINT_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define TOW_DOF_MOTION__MSG__DETAIL__JOINT_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "tow_dof_motion/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "tow_dof_motion/msg/detail/joint_command__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace tow_dof_motion
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tow_dof_motion
cdr_serialize(
  const tow_dof_motion::msg::JointCommand & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tow_dof_motion
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tow_dof_motion::msg::JointCommand & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tow_dof_motion
get_serialized_size(
  const tow_dof_motion::msg::JointCommand & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tow_dof_motion
max_serialized_size_JointCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tow_dof_motion

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tow_dof_motion
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tow_dof_motion, msg, JointCommand)();

#ifdef __cplusplus
}
#endif

#endif  // TOW_DOF_MOTION__MSG__DETAIL__JOINT_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
