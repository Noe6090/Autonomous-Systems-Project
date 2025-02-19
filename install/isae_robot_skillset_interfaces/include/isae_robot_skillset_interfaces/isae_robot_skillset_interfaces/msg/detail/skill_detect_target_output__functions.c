// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from isae_robot_skillset_interfaces:msg/SkillDetectTargetOutput.idl
// generated code does not contain a copyright notice
#include "isae_robot_skillset_interfaces/msg/detail/skill_detect_target_output__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `target`
#include "std_msgs/msg/detail/string__functions.h"

bool
isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__init(isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput * msg)
{
  if (!msg) {
    return false;
  }
  // target
  if (!std_msgs__msg__String__init(&msg->target)) {
    isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__fini(msg);
    return false;
  }
  return true;
}

void
isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__fini(isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput * msg)
{
  if (!msg) {
    return;
  }
  // target
  std_msgs__msg__String__fini(&msg->target);
}

bool
isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__are_equal(const isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput * lhs, const isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target
  if (!std_msgs__msg__String__are_equal(
      &(lhs->target), &(rhs->target)))
  {
    return false;
  }
  return true;
}

bool
isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__copy(
  const isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput * input,
  isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput * output)
{
  if (!input || !output) {
    return false;
  }
  // target
  if (!std_msgs__msg__String__copy(
      &(input->target), &(output->target)))
  {
    return false;
  }
  return true;
}

isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput *
isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput * msg = (isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput *)allocator.allocate(sizeof(isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput));
  bool success = isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__destroy(isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__Sequence__init(isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput * data = NULL;

  if (size) {
    data = (isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput *)allocator.zero_allocate(size, sizeof(isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__fini(&data[i - 1]);
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
isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__Sequence__fini(isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__Sequence * array)
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
      isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__fini(&array->data[i]);
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

isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__Sequence *
isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__Sequence * array = (isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__Sequence *)allocator.allocate(sizeof(isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__Sequence__destroy(isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__Sequence__are_equal(const isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__Sequence * lhs, const isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__Sequence__copy(
  const isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__Sequence * input,
  isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput * data =
      (isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
