// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tow_dof_motion:srv/Setfloat64.idl
// generated code does not contain a copyright notice

#ifndef TOW_DOF_MOTION__SRV__DETAIL__SETFLOAT64__STRUCT_H_
#define TOW_DOF_MOTION__SRV__DETAIL__SETFLOAT64__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Setfloat64 in the package tow_dof_motion.
typedef struct tow_dof_motion__srv__Setfloat64_Request
{
  double data;
} tow_dof_motion__srv__Setfloat64_Request;

// Struct for a sequence of tow_dof_motion__srv__Setfloat64_Request.
typedef struct tow_dof_motion__srv__Setfloat64_Request__Sequence
{
  tow_dof_motion__srv__Setfloat64_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tow_dof_motion__srv__Setfloat64_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Setfloat64 in the package tow_dof_motion.
typedef struct tow_dof_motion__srv__Setfloat64_Response
{
  bool success;
} tow_dof_motion__srv__Setfloat64_Response;

// Struct for a sequence of tow_dof_motion__srv__Setfloat64_Response.
typedef struct tow_dof_motion__srv__Setfloat64_Response__Sequence
{
  tow_dof_motion__srv__Setfloat64_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tow_dof_motion__srv__Setfloat64_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TOW_DOF_MOTION__SRV__DETAIL__SETFLOAT64__STRUCT_H_
