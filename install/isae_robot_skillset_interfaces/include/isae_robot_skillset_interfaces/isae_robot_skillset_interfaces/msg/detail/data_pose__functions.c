// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from isae_robot_skillset_interfaces:msg/DataPose.idl
// generated code does not contain a copyright notice
#include "isae_robot_skillset_interfaces/msg/detail/data_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `value`
#include "geometry_msgs/msg/detail/pose2_d__functions.h"

bool
isae_robot_skillset_interfaces__msg__DataPose__init(isae_robot_skillset_interfaces__msg__DataPose * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    isae_robot_skillset_interfaces__msg__DataPose__fini(msg);
    return false;
  }
  // value
  if (!geometry_msgs__msg__Pose2D__init(&msg->value)) {
    isae_robot_skillset_interfaces__msg__DataPose__fini(msg);
    return false;
  }
  return true;
}

void
isae_robot_skillset_interfaces__msg__DataPose__fini(isae_robot_skillset_interfaces__msg__DataPose * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // value
  geometry_msgs__msg__Pose2D__fini(&msg->value);
}

bool
isae_robot_skillset_interfaces__msg__DataPose__are_equal(const isae_robot_skillset_interfaces__msg__DataPose * lhs, const isae_robot_skillset_interfaces__msg__DataPose * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
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
isae_robot_skillset_interfaces__msg__DataPose__copy(
  const isae_robot_skillset_interfaces__msg__DataPose * input,
  isae_robot_skillset_interfaces__msg__DataPose * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // value
  if (!geometry_msgs__msg__Pose2D__copy(
      &(input->value), &(output->value)))
  {
    return false;
  }
  return true;
}

isae_robot_skillset_interfaces__msg__DataPose *
isae_robot_skillset_interfaces__msg__DataPose__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isae_robot_skillset_interfaces__msg__DataPose * msg = (isae_robot_skillset_interfaces__msg__DataPose *)allocator.allocate(sizeof(isae_robot_skillset_interfaces__msg__DataPose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(isae_robot_skillset_interfaces__msg__DataPose));
  bool success = isae_robot_skillset_interfaces__msg__DataPose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
isae_robot_skillset_interfaces__msg__DataPose__destroy(isae_robot_skillset_interfaces__msg__DataPose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    isae_robot_skillset_interfaces__msg__DataPose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
isae_robot_skillset_interfaces__msg__DataPose__Sequence__init(isae_robot_skillset_interfaces__msg__DataPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isae_robot_skillset_interfaces__msg__DataPose * data = NULL;

  if (size) {
    data = (isae_robot_skillset_interfaces__msg__DataPose *)allocator.zero_allocate(size, sizeof(isae_robot_skillset_interfaces__msg__DataPose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = isae_robot_skillset_interfaces__msg__DataPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        isae_robot_skillset_interfaces__msg__DataPose__fini(&data[i - 1]);
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
isae_robot_skillset_interfaces__msg__DataPose__Sequence__fini(isae_robot_skillset_interfaces__msg__DataPose__Sequence * array)
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
      isae_robot_skillset_interfaces__msg__DataPose__fini(&array->data[i]);
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

isae_robot_skillset_interfaces__msg__DataPose__Sequence *
isae_robot_skillset_interfaces__msg__DataPose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isae_robot_skillset_interfaces__msg__DataPose__Sequence * array = (isae_robot_skillset_interfaces__msg__DataPose__Sequence *)allocator.allocate(sizeof(isae_robot_skillset_interfaces__msg__DataPose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = isae_robot_skillset_interfaces__msg__DataPose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
isae_robot_skillset_interfaces__msg__DataPose__Sequence__destroy(isae_robot_skillset_interfaces__msg__DataPose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    isae_robot_skillset_interfaces__msg__DataPose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
isae_robot_skillset_interfaces__msg__DataPose__Sequence__are_equal(const isae_robot_skillset_interfaces__msg__DataPose__Sequence * lhs, const isae_robot_skillset_interfaces__msg__DataPose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!isae_robot_skillset_interfaces__msg__DataPose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
isae_robot_skillset_interfaces__msg__DataPose__Sequence__copy(
  const isae_robot_skillset_interfaces__msg__DataPose__Sequence * input,
  isae_robot_skillset_interfaces__msg__DataPose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(isae_robot_skillset_interfaces__msg__DataPose);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    isae_robot_skillset_interfaces__msg__DataPose * data =
      (isae_robot_skillset_interfaces__msg__DataPose *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!isae_robot_skillset_interfaces__msg__DataPose__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          isae_robot_skillset_interfaces__msg__DataPose__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!isae_robot_skillset_interfaces__msg__DataPose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
