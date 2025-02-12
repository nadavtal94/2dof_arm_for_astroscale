// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tow_dof_motion:msg/JointCommand.idl
// generated code does not contain a copyright notice

#ifndef TOW_DOF_MOTION__MSG__DETAIL__JOINT_COMMAND__STRUCT_H_
#define TOW_DOF_MOTION__MSG__DETAIL__JOINT_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'positions'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/JointCommand in the package tow_dof_motion.
typedef struct tow_dof_motion__msg__JointCommand
{
  rosidl_runtime_c__double__Sequence positions;
  double duration;
} tow_dof_motion__msg__JointCommand;

// Struct for a sequence of tow_dof_motion__msg__JointCommand.
typedef struct tow_dof_motion__msg__JointCommand__Sequence
{
  tow_dof_motion__msg__JointCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tow_dof_motion__msg__JointCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TOW_DOF_MOTION__MSG__DETAIL__JOINT_COMMAND__STRUCT_H_
