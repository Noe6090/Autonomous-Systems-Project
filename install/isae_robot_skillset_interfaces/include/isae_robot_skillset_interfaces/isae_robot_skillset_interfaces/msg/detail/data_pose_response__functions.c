// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from isae_robot_skillset_interfaces:msg/DataPoseResponse.idl
// generated code does not contain a copyright notice
#include "isae_robot_skillset_interfaces/msg/detail/data_pose_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `value`
#include "geometry_msgs/msg/detail/pose2_d__functions.h"

bool
isae_robot_skillset_interfaces__msg__DataPoseResponse__init(isae_robot_skillset_interfaces__msg__DataPoseResponse * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    isae_robot_skillset_interfaces__msg__DataPoseResponse__fini(msg);
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    isae_robot_skillset_interfaces__msg__DataPoseResponse__fini(msg);
    return false;
  }
  // has_data
  // value
  if (!geometry_msgs__msg__Pose2D__init(&msg->value)) {
    isae_robot_skillset_interfaces__msg__DataPoseResponse__fini(msg);
    return false;
  }
  return true;
}

void
isae_robot_skillset_interfaces__msg__DataPoseResponse__fini(isae_robot_skillset_interfaces__msg__DataPoseResponse * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // has_data
  // value
  geometry_msgs__msg__Pose2D__fini(&msg->value);
}

bool
isae_robot_skillset_interfaces__msg__DataPoseResponse__are_equal(const isae_robot_skillset_interfaces__msg__DataPoseResponse * lhs, const isae_robot_skillset_interfaces__msg__DataPoseResponse * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // has_data
  if (lhs->has_data != rhs->has_data) {
    return false;
  }
  // value
  if (!geometry_msgs__msg__Pose2D__are_equal(
      &(lhs->value), &(rhs->value)))
  {
    return false;
  }
  return true;
}

bool
isae_robot_skillset_interfaces__msg__DataPoseResponse__copy(
  const isae_robot_skillset_interfaces__msg__DataPoseResponse * input,
  isae_robot_skillset_interfaces__msg__DataPoseResponse * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // has_data
  output->has_data = input->has_data;
  // value
  if (!geometry_msgs__msg__Pose2D__copy(
      &(input->value), &(output->value)))
  {
    return false;
  }
  return true;
}

isae_robot_skillset_interfaces__msg__DataPoseResponse *
isae_robot_skillset_interfaces__msg__DataPoseResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isae_robot_skillset_interfaces__msg__DataPoseResponse * msg = (isae_robot_skillset_interfaces__msg__DataPoseResponse *)allocator.allocate(sizeof(isae_robot_skillset_interfaces__msg__DataPoseResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(isae_robot_skillset_interfaces__msg__DataPoseResponse));
  bool success = isae_robot_skillset_interfaces__msg__DataPoseResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
isae_robot_skillset_interfaces__msg__DataPoseResponse__destroy(isae_robot_skillset_interfaces__msg__DataPoseResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    isae_robot_skillset_interfaces__msg__DataPoseResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
isae_robot_skillset_interfaces__msg__DataPoseResponse__Sequence__init(isae_robot_skillset_interfaces__msg__DataPoseResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isae_robot_skillset_interfaces__msg__DataPoseResponse * data = NULL;

  if (size) {
    data = (isae_robot_skillset_interfaces__msg__DataPoseResponse *)allocator.zero_allocate(size, sizeof(isae_robot_skillset_interfaces__msg__DataPoseResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = isae_robot_skillset_interfaces__msg__DataPoseResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        isae_robot_skillset_interfaces__msg__DataPoseResponse__fini(&data[i - 1]);
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
isae_robot_skillset_interfaces__msg__DataPoseResponse__Sequence__fini(isae_robot_skillset_interfaces__msg__DataPoseResponse__Sequence * array)
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
      isae_robot_skillset_interfaces__msg__DataPoseResponse__fini(&array->data[i]);
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

isae_robot_skillset_interfaces__msg__DataPoseResponse__Sequence *
isae_robot_skillset_interfaces__msg__DataPoseResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isae_robot_skillset_interfaces__msg__DataPoseResponse__Sequence * array = (isae_robot_skillset_interfaces__msg__DataPoseResponse__Sequence *)allocator.allocate(sizeof(isae_robot_skillset_interfaces__msg__DataPoseResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = isae_robot_skillset_interfaces__msg__DataPoseResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
isae_robot_skillset_interfaces__msg__DataPoseResponse__Sequence__destroy(isae_robot_skillset_interfaces__msg__DataPoseResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    isae_robot_skillset_interfaces__msg__DataPoseResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
isae_robot_skillset_interfaces__msg__DataPoseResponse__Sequence__are_equal(const isae_robot_skillset_interfaces__msg__DataPoseResponse__Sequence * lhs, const isae_robot_skillset_interfaces__msg__DataPoseResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!isae_robot_skillset_interfaces__msg__DataPoseResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
isae_robot_skillset_interfaces__msg__DataPoseResponse__Sequence__copy(
  const isae_robot_skillset_interfaces__msg__DataPoseResponse__Sequence * input,
  isae_robot_skillset_interfaces__msg__DataPoseResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(isae_robot_skillset_interfaces__msg__DataPoseResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    isae_robot_skillset_interfaces__msg__DataPoseResponse * data =
      (isae_robot_skillset_interfaces__msg__DataPoseResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!isae_robot_skillset_interfaces__msg__DataPoseResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          isae_robot_skillset_interfaces__msg__DataPoseResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!isae_robot_skillset_interfaces__msg__DataPoseResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
