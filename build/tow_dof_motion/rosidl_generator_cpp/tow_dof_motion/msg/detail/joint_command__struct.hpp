// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tow_dof_motion:msg/JointCommand.idl
// generated code does not contain a copyright notice

#ifndef TOW_DOF_MOTION__MSG__DETAIL__JOINT_COMMAND__STRUCT_HPP_
#define TOW_DOF_MOTION__MSG__DETAIL__JOINT_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tow_dof_motion__msg__JointCommand __attribute__((deprecated))
#else
# define DEPRECATED__tow_dof_motion__msg__JointCommand __declspec(deprecated)
#endif

namespace tow_dof_motion
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointCommand_
{
  using Type = JointCommand_<ContainerAllocator>;

  explicit JointCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->duration = 0.0;
    }
  }

  explicit JointCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->duration = 0.0;
    }
  }

  // field types and members
  using _positions_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _positions_type positions;
  using _duration_type =
    double;
  _duration_type duration;

  // setters for named parameter idiom
  Type & set__positions(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->positions = _arg;
    return *this;
  }
  Type & set__duration(
    const double & _arg)
  {
    this->duration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tow_dof_motion::msg::JointCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const tow_dof_motion::msg::JointCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tow_dof_motion::msg::JointCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tow_dof_motion::msg::JointCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tow_dof_motion::msg::JointCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tow_dof_motion::msg::JointCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tow_dof_motion::msg::JointCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tow_dof_motion::msg::JointCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tow_dof_motion::msg::JointCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tow_dof_motion::msg::JointCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tow_dof_motion__msg__JointCommand
    std::shared_ptr<tow_dof_motion::msg::JointCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tow_dof_motion__msg__JointCommand
    std::shared_ptr<tow_dof_motion::msg::JointCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointCommand_ & other) const
  {
    if (this->positions != other.positions) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointCommand_

// alias to use template instance with default allocator
using JointCommand =
  tow_dof_motion::msg::JointCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tow_dof_motion

#endif  // TOW_DOF_MOTION__MSG__DETAIL__JOINT_COMMAND__STRUCT_HPP_
