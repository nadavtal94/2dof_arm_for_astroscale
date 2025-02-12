// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tow_dof_motion:msg/JointCommand.idl
// generated code does not contain a copyright notice
#include "tow_dof_motion/msg/detail/joint_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `positions`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
tow_dof_motion__msg__JointCommand__init(tow_dof_motion__msg__JointCommand * msg)
{
  if (!msg) {
    return false;
  }
  // positions
  if (!rosidl_runtime_c__double__Sequence__init(&msg->positions, 0)) {
    tow_dof_motion__msg__JointCommand__fini(msg);
    return false;
  }
  // duration
  return true;
}

void
tow_dof_motion__msg__JointCommand__fini(tow_dof_motion__msg__JointCommand * msg)
{
  if (!msg) {
    return;
  }
  // positions
  rosidl_runtime_c__double__Sequence__fini(&msg->positions);
  // duration
}

bool
tow_dof_motion__msg__JointCommand__are_equal(const tow_dof_motion__msg__JointCommand * lhs, const tow_dof_motion__msg__JointCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // positions
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->positions), &(rhs->positions)))
  {
    return false;
  }
  // duration
  if (lhs->duration != rhs->duration) {
    return false;
  }
  return true;
}

bool
tow_dof_motion__msg__JointCommand__copy(
  const tow_dof_motion__msg__JointCommand * input,
  tow_dof_motion__msg__JointCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // positions
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->positions), &(output->positions)))
  {
    return false;
  }
  // duration
  output->duration = input->duration;
  return true;
}

tow_dof_motion__msg__JointCommand *
tow_dof_motion__msg__JointCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tow_dof_motion__msg__JointCommand * msg = (tow_dof_motion__msg__JointCommand *)allocator.allocate(sizeof(tow_dof_motion__msg__JointCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tow_dof_motion__msg__JointCommand));
  bool success = tow_dof_motion__msg__JointCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tow_dof_motion__msg__JointCommand__destroy(tow_dof_motion__msg__JointCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tow_dof_motion__msg__JointCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tow_dof_motion__msg__JointCommand__Sequence__init(tow_dof_motion__msg__JointCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tow_dof_motion__msg__JointCommand * data = NULL;

  if (size) {
    data = (tow_dof_motion__msg__JointCommand *)allocator.zero_allocate(size, sizeof(tow_dof_motion__msg__JointCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tow_dof_motion__msg__JointCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tow_dof_motion__msg__JointCommand__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tow_dof_motion__msg__JointCommand__Sequence__fini(tow_dof_motion__msg__JointCommand__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tow_dof_motion__msg__JointCommand__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tow_dof_motion__msg__JointCommand__Sequence *
tow_dof_motion__msg__JointCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tow_dof_motion__msg__JointCommand__Sequence * array = (tow_dof_motion__msg__JointCommand__Sequence *)allocator.allocate(sizeof(tow_dof_motion__msg__JointCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tow_dof_motion__msg__JointCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tow_dof_motion__msg__JointCommand__Sequence__destroy(tow_dof_motion__msg__JointCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tow_dof_motion__msg__JointCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tow_dof_motion__msg__JointCommand__Sequence__are_equal(const tow_dof_motion__msg__JointCommand__Sequence * lhs, const tow_dof_motion__msg__JointCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tow_dof_motion__msg__JointCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tow_dof_motion__msg__JointCommand__Sequence__copy(
  const tow_dof_motion__msg__JointCommand__Sequence * input,
  tow_dof_motion__msg__JointCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tow_dof_motion__msg__JointCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tow_dof_motion__msg__JointCommand * data =
      (tow_dof_motion__msg__JointCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tow_dof_motion__msg__JointCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tow_dof_motion__msg__JointCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tow_dof_motion__msg__JointCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
