// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tow_dof_motion:srv/Setfloat64.idl
// generated code does not contain a copyright notice

#ifndef TOW_DOF_MOTION__SRV__DETAIL__SETFLOAT64__TRAITS_HPP_
#define TOW_DOF_MOTION__SRV__DETAIL__SETFLOAT64__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tow_dof_motion/srv/detail/setfloat64__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tow_dof_motion
{

namespace srv
{

inline void to_flow_style_yaml(
  const Setfloat64_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Setfloat64_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Setfloat64_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tow_dof_motion

namespace rosidl_generator_traits
{

[[deprecated("use tow_dof_motion::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tow_dof_motion::srv::Setfloat64_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tow_dof_motion::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tow_dof_motion::srv::to_yaml() instead")]]
inline std::string to_yaml(const tow_dof_motion::srv::Setfloat64_Request & msg)
{
  return tow_dof_motion::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tow_dof_motion::srv::Setfloat64_Request>()
{
  return "tow_dof_motion::srv::Setfloat64_Request";
}

template<>
inline const char * name<tow_dof_motion::srv::Setfloat64_Request>()
{
  return "tow_dof_motion/srv/Setfloat64_Request";
}

template<>
struct has_fixed_size<tow_dof_motion::srv::Setfloat64_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tow_dof_motion::srv::Setfloat64_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tow_dof_motion::srv::Setfloat64_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tow_dof_motion
{

namespace srv
{

inline void to_flow_style_yaml(
  const Setfloat64_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Setfloat64_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Setfloat64_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tow_dof_motion

namespace rosidl_generator_traits
{

[[deprecated("use tow_dof_motion::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tow_dof_motion::srv::Setfloat64_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tow_dof_motion::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tow_dof_motion::srv::to_yaml() instead")]]
inline std::string to_yaml(const tow_dof_motion::srv::Setfloat64_Response & msg)
{
  return tow_dof_motion::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tow_dof_motion::srv::Setfloat64_Response>()
{
  return "tow_dof_motion::srv::Setfloat64_Response";
}

template<>
inline const char * name<tow_dof_motion::srv::Setfloat64_Response>()
{
  return "tow_dof_motion/srv/Setfloat64_Response";
}

template<>
struct has_fixed_size<tow_dof_motion::srv::Setfloat64_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tow_dof_motion::srv::Setfloat64_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tow_dof_motion::srv::Setfloat64_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tow_dof_motion::srv::Setfloat64>()
{
  return "tow_dof_motion::srv::Setfloat64";
}

template<>
inline const char * name<tow_dof_motion::srv::Setfloat64>()
{
  return "tow_dof_motion/srv/Setfloat64";
}

template<>
struct has_fixed_size<tow_dof_motion::srv::Setfloat64>
  : std::integral_constant<
    bool,
    has_fixed_size<tow_dof_motion::srv::Setfloat64_Request>::value &&
    has_fixed_size<tow_dof_motion::srv::Setfloat64_Response>::value
  >
{
};

template<>
struct has_bounded_size<tow_dof_motion::srv::Setfloat64>
  : std::integral_constant<
    bool,
    has_bounded_size<tow_dof_motion::srv::Setfloat64_Request>::value &&
    has_bounded_size<tow_dof_motion::srv::Setfloat64_Response>::value
  >
{
};

template<>
struct is_service<tow_dof_motion::srv::Setfloat64>
  : std::true_type
{
};

template<>
struct is_service_request<tow_dof_motion::srv::Setfloat64_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tow_dof_motion::srv::Setfloat64_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TOW_DOF_MOTION__SRV__DETAIL__SETFLOAT64__TRAITS_HPP_
