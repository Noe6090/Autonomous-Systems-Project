// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from isae_robot_skillset_interfaces:msg/SkillDetectTargetResponse.idl
// generated code does not contain a copyright notice
#include "isae_robot_skillset_interfaces/msg/detail/skill_detect_target_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `output`
#include "isae_robot_skillset_interfaces/msg/detail/skill_detect_target_output__functions.h"

bool
isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__init(isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__fini(msg);
    return false;
  }
  // result
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__fini(msg);
    return false;
  }
  // effect
  // postcondition
  // output
  if (!isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__init(&msg->output)) {
    isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__fini(msg);
    return false;
  }
  return true;
}

void
isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__fini(isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // result
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // effect
  // postcondition
  // output
  isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__fini(&msg->output);
}

bool
isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__are_equal(const isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse * lhs, const isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse * rhs)
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
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // effect
  if (lhs->effect != rhs->effect) {
    return false;
  }
  // postcondition
  if (lhs->postcondition != rhs->postcondition) {
    return false;
  }
  // output
  if (!isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__are_equal(
      &(lhs->output), &(rhs->output)))
  {
    return false;
  }
  return true;
}

bool
isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__copy(
  const isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse * input,
  isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse * output)
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
  // result
  output->result = input->result;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // effect
  output->effect = input->effect;
  // postcondition
  output->postcondition = input->postcondition;
  // output
  if (!isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__copy(
      &(input->output), &(output->output)))
  {
    return false;
  }
  return true;
}

isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse *
isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse * msg = (isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse *)allocator.allocate(sizeof(isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse));
  bool success = isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__destroy(isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__Sequence__init(isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse * data = NULL;

  if (size) {
    data = (isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse *)allocator.zero_allocate(size, sizeof(isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__fini(&data[i - 1]);
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
isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__Sequence__fini(isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__Sequence * array)
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
      isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__fini(&array->data[i]);
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

isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__Sequence *
isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__Sequence * array = (isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__Sequence *)allocator.allocate(sizeof(isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__Sequence__destroy(isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__Sequence__are_equal(const isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__Sequence * lhs, const isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__Sequence__copy(
  const isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__Sequence * input,
  isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse * data =
      (isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
