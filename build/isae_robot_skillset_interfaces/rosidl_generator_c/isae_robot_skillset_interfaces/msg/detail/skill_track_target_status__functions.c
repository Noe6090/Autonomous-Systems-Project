// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from isae_robot_skillset_interfaces:msg/SkillTrackTargetStatus.idl
// generated code does not contain a copyright notice
#include "isae_robot_skillset_interfaces/msg/detail/skill_track_target_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `input`
#include "isae_robot_skillset_interfaces/msg/detail/skill_track_target_input__functions.h"

bool
isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__init(isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__fini(msg);
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__fini(msg);
    return false;
  }
  // state
  // input
  if (!isae_robot_skillset_interfaces__msg__SkillTrackTargetInput__init(&msg->input)) {
    isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__fini(msg);
    return false;
  }
  return true;
}

void
isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__fini(isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // state
  // input
  isae_robot_skillset_interfaces__msg__SkillTrackTargetInput__fini(&msg->input);
}

bool
isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__are_equal(const isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus * lhs, const isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // input
  if (!isae_robot_skillset_interfaces__msg__SkillTrackTargetInput__are_equal(
      &(lhs->input), &(rhs->input)))
  {
    return false;
  }
  return true;
}

bool
isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__copy(
  const isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus * input,
  isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // state
  output->state = input->state;
  // input
  if (!isae_robot_skillset_interfaces__msg__SkillTrackTargetInput__copy(
      &(input->input), &(output->input)))
  {
    return false;
  }
  return true;
}

isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus *
isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus * msg = (isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus *)allocator.allocate(sizeof(isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus));
  bool success = isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__destroy(isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__Sequence__init(isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus * data = NULL;

  if (size) {
    data = (isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus *)allocator.zero_allocate(size, sizeof(isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__fini(&data[i - 1]);
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
isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__Sequence__fini(isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__Sequence * array)
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
      isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__fini(&array->data[i]);
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

isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__Sequence *
isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__Sequence * array = (isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__Sequence *)allocator.allocate(sizeof(isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__Sequence__destroy(isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__Sequence__are_equal(const isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__Sequence * lhs, const isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__Sequence__copy(
  const isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__Sequence * input,
  isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus * data =
      (isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
