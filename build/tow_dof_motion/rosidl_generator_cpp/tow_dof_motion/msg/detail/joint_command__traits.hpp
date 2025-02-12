// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tow_dof_motion:msg/JointCommand.idl
// generated code does not contain a copyright notice

#ifndef TOW_DOF_MOTION__MSG__DETAIL__JOINT_COMMAND__TRAITS_HPP_
#define TOW_DOF_MOTION__MSG__DETAIL__JOINT_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tow_dof_motion/msg/detail/joint_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tow_dof_motion
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: positions
  {
    if (msg.positions.size() == 0) {
      out << "positions: []";
    } else {
      out << "positions: [";
      size_t pending_items = msg.positions.size();
      for (auto item : msg.positions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: duration
  {
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.positions.size() == 0) {
      out << "positions: []\n";
    } else {
      out << "positions:\n";
      for (auto item : msg.positions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointCommand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace tow_dof_motion

namespace rosidl_generator_traits
{

[[deprecated("use tow_dof_motion::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tow_dof_motion::msg::JointCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  tow_dof_motion::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tow_dof_motion::msg::to_yaml() instead")]]
inline std::string to_yaml(const tow_dof_motion::msg::JointCommand & msg)
{
  return tow_dof_motion::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tow_dof_motion::msg::JointCommand>()
{
  return "tow_dof_motion::msg::JointCommand";
}

template<>
inline const char * name<tow_dof_motion::msg::JointCommand>()
{
  return "tow_dof_motion/msg/JointCommand";
}

template<>
struct has_fixed_size<tow_dof_motion::msg::JointCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tow_dof_motion::msg::JointCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tow_dof_motion::msg::JointCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TOW_DOF_MOTION__MSG__DETAIL__JOINT_COMMAND__TRAITS_HPP_
