// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from isae_robot_skillset_interfaces:msg/SkillTakePictureRequest.idl
// generated code does not contain a copyright notice
#include "isae_robot_skillset_interfaces/msg/detail/skill_take_picture_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `input`
#include "isae_robot_skillset_interfaces/msg/detail/skill_take_picture_input__functions.h"

bool
isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__init(isae_robot_skillset_interfaces__msg__SkillTakePictureRequest * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__fini(msg);
    return false;
  }
  // input
  if (!isae_robot_skillset_interfaces__msg__SkillTakePictureInput__init(&msg->input)) {
    isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__fini(msg);
    return false;
  }
  return true;
}

void
isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__fini(isae_robot_skillset_interfaces__msg__SkillTakePictureRequest * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // input
  isae_robot_skillset_interfaces__msg__SkillTakePictureInput__fini(&msg->input);
}

bool
isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__are_equal(const isae_robot_skillset_interfaces__msg__SkillTakePictureRequest * lhs, const isae_robot_skillset_interfaces__msg__SkillTakePictureRequest * rhs)
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
  // input
  if (!isae_robot_skillset_interfaces__msg__SkillTakePictureInput__are_equal(
      &(lhs->input), &(rhs->input)))
  {
    return false;
  }
  return true;
}

bool
isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__copy(
  const isae_robot_skillset_interfaces__msg__SkillTakePictureRequest * input,
  isae_robot_skillset_interfaces__msg__SkillTakePictureRequest * output)
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
  // input
  if (!isae_robot_skillset_interfaces__msg__SkillTakePictureInput__copy(
      &(input->input), &(output->input)))
  {
    return false;
  }
  return true;
}

isae_robot_skillset_interfaces__msg__SkillTakePictureRequest *
isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isae_robot_skillset_interfaces__msg__SkillTakePictureRequest * msg = (isae_robot_skillset_interfaces__msg__SkillTakePictureRequest *)allocator.allocate(sizeof(isae_robot_skillset_interfaces__msg__SkillTakePictureRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(isae_robot_skillset_interfaces__msg__SkillTakePictureRequest));
  bool success = isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__destroy(isae_robot_skillset_interfaces__msg__SkillTakePictureRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__Sequence__init(isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isae_robot_skillset_interfaces__msg__SkillTakePictureRequest * data = NULL;

  if (size) {
    data = (isae_robot_skillset_interfaces__msg__SkillTakePictureRequest *)allocator.zero_allocate(size, sizeof(isae_robot_skillset_interfaces__msg__SkillTakePictureRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__fini(&data[i - 1]);
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
isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__Sequence__fini(isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__Sequence * array)
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
      isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__fini(&array->data[i]);
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

isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__Sequence *
isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__Sequence * array = (isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__Sequence *)allocator.allocate(sizeof(isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__Sequence__destroy(isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__Sequence__are_equal(const isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__Sequence * lhs, const isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__Sequence__copy(
  const isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__Sequence * input,
  isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(isae_robot_skillset_interfaces__msg__SkillTakePictureRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    isae_robot_skillset_interfaces__msg__SkillTakePictureRequest * data =
      (isae_robot_skillset_interfaces__msg__SkillTakePictureRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
