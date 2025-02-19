// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from isae_robot_skillset_interfaces:msg/SkillsetStatus.idl
// generated code does not contain a copyright notice
#include "isae_robot_skillset_interfaces/msg/detail/skillset_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `resources`
#include "isae_robot_skillset_interfaces/msg/detail/resource_state__functions.h"
// Member `skill_detect_target`
#include "isae_robot_skillset_interfaces/msg/detail/skill_detect_target_status__functions.h"
// Member `skill_move_to`
#include "isae_robot_skillset_interfaces/msg/detail/skill_move_to_status__functions.h"
// Member `skill_take_picture`
#include "isae_robot_skillset_interfaces/msg/detail/skill_take_picture_status__functions.h"
// Member `skill_track_target`
#include "isae_robot_skillset_interfaces/msg/detail/skill_track_target_status__functions.h"
// Member `info`
#include "rosidl_runtime_c/string_functions.h"

bool
isae_robot_skillset_interfaces__msg__SkillsetStatus__init(isae_robot_skillset_interfaces__msg__SkillsetStatus * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    isae_robot_skillset_interfaces__msg__SkillsetStatus__fini(msg);
    return false;
  }
  // resources
  if (!isae_robot_skillset_interfaces__msg__ResourceState__Sequence__init(&msg->resources, 0)) {
    isae_robot_skillset_interfaces__msg__SkillsetStatus__fini(msg);
    return false;
  }
  // skill_detect_target
  if (!isae_robot_skillset_interfaces__msg__SkillDetectTargetStatus__init(&msg->skill_detect_target)) {
    isae_robot_skillset_interfaces__msg__SkillsetStatus__fini(msg);
    return false;
  }
  // skill_move_to
  if (!isae_robot_skillset_interfaces__msg__SkillMoveToStatus__init(&msg->skill_move_to)) {
    isae_robot_skillset_interfaces__msg__SkillsetStatus__fini(msg);
    return false;
  }
  // skill_take_picture
  if (!isae_robot_skillset_interfaces__msg__SkillTakePictureStatus__init(&msg->skill_take_picture)) {
    isae_robot_skillset_interfaces__msg__SkillsetStatus__fini(msg);
    return false;
  }
  // skill_track_target
  if (!isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__init(&msg->skill_track_target)) {
    isae_robot_skillset_interfaces__msg__SkillsetStatus__fini(msg);
    return false;
  }
  // info
  if (!rosidl_runtime_c__String__init(&msg->info)) {
    isae_robot_skillset_interfaces__msg__SkillsetStatus__fini(msg);
    return false;
  }
  return true;
}

void
isae_robot_skillset_interfaces__msg__SkillsetStatus__fini(isae_robot_skillset_interfaces__msg__SkillsetStatus * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // resources
  isae_robot_skillset_interfaces__msg__ResourceState__Sequence__fini(&msg->resources);
  // skill_detect_target
  isae_robot_skillset_interfaces__msg__SkillDetectTargetStatus__fini(&msg->skill_detect_target);
  // skill_move_to
  isae_robot_skillset_interfaces__msg__SkillMoveToStatus__fini(&msg->skill_move_to);
  // skill_take_picture
  isae_robot_skillset_interfaces__msg__SkillTakePictureStatus__fini(&msg->skill_take_picture);
  // skill_track_target
  isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__fini(&msg->skill_track_target);
  // info
  rosidl_runtime_c__String__fini(&msg->info);
}

bool
isae_robot_skillset_interfaces__msg__SkillsetStatus__are_equal(const isae_robot_skillset_interfaces__msg__SkillsetStatus * lhs, const isae_robot_skillset_interfaces__msg__SkillsetStatus * rhs)
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
  // resources
  if (!isae_robot_skillset_interfaces__msg__ResourceState__Sequence__are_equal(
      &(lhs->resources), &(rhs->resources)))
  {
    return false;
  }
  // skill_detect_target
  if (!isae_robot_skillset_interfaces__msg__SkillDetectTargetStatus__are_equal(
      &(lhs->skill_detect_target), &(rhs->skill_detect_target)))
  {
    return false;
  }
  // skill_move_to
  if (!isae_robot_skillset_interfaces__msg__SkillMoveToStatus__are_equal(
      &(lhs->skill_move_to), &(rhs->skill_move_to)))
  {
    return false;
  }
  // skill_take_picture
  if (!isae_robot_skillset_interfaces__msg__SkillTakePictureStatus__are_equal(
      &(lhs->skill_take_picture), &(rhs->skill_take_picture)))
  {
    return false;
  }
  // skill_track_target
  if (!isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__are_equal(
      &(lhs->skill_track_target), &(rhs->skill_track_target)))
  {
    return false;
  }
  // info
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  return true;
}

bool
isae_robot_skillset_interfaces__msg__SkillsetStatus__copy(
  const isae_robot_skillset_interfaces__msg__SkillsetStatus * input,
  isae_robot_skillset_interfaces__msg__SkillsetStatus * output)
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
  // resources
  if (!isae_robot_skillset_interfaces__msg__ResourceState__Sequence__copy(
      &(input->resources), &(output->resources)))
  {
    return false;
  }
  // skill_detect_target
  if (!isae_robot_skillset_interfaces__msg__SkillDetectTargetStatus__copy(
      &(input->skill_detect_target), &(output->skill_detect_target)))
  {
    return false;
  }
  // skill_move_to
  if (!isae_robot_skillset_interfaces__msg__SkillMoveToStatus__copy(
      &(input->skill_move_to), &(output->skill_move_to)))
  {
    return false;
  }
  // skill_take_picture
  if (!isae_robot_skillset_interfaces__msg__SkillTakePictureStatus__copy(
      &(input->skill_take_picture), &(output->skill_take_picture)))
  {
    return false;
  }
  // skill_track_target
  if (!isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__copy(
      &(input->skill_track_target), &(output->skill_track_target)))
  {
    return false;
  }
  // info
  if (!rosidl_runtime_c__String__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  return true;
}

isae_robot_skillset_interfaces__msg__SkillsetStatus *
isae_robot_skillset_interfaces__msg__SkillsetStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isae_robot_skillset_interfaces__msg__SkillsetStatus * msg = (isae_robot_skillset_interfaces__msg__SkillsetStatus *)allocator.allocate(sizeof(isae_robot_skillset_interfaces__msg__SkillsetStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(isae_robot_skillset_interfaces__msg__SkillsetStatus));
  bool success = isae_robot_skillset_interfaces__msg__SkillsetStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
isae_robot_skillset_interfaces__msg__SkillsetStatus__destroy(isae_robot_skillset_interfaces__msg__SkillsetStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    isae_robot_skillset_interfaces__msg__SkillsetStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
isae_robot_skillset_interfaces__msg__SkillsetStatus__Sequence__init(isae_robot_skillset_interfaces__msg__SkillsetStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isae_robot_skillset_interfaces__msg__SkillsetStatus * data = NULL;

  if (size) {
    data = (isae_robot_skillset_interfaces__msg__SkillsetStatus *)allocator.zero_allocate(size, sizeof(isae_robot_skillset_interfaces__msg__SkillsetStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = isae_robot_skillset_interfaces__msg__SkillsetStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        isae_robot_skillset_interfaces__msg__SkillsetStatus__fini(&data[i - 1]);
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
isae_robot_skillset_interfaces__msg__SkillsetStatus__Sequence__fini(isae_robot_skillset_interfaces__msg__SkillsetStatus__Sequence * array)
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
      isae_robot_skillset_interfaces__msg__SkillsetStatus__fini(&array->data[i]);
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

isae_robot_skillset_interfaces__msg__SkillsetStatus__Sequence *
isae_robot_skillset_interfaces__msg__SkillsetStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  isae_robot_skillset_interfaces__msg__SkillsetStatus__Sequence * array = (isae_robot_skillset_interfaces__msg__SkillsetStatus__Sequence *)allocator.allocate(sizeof(isae_robot_skillset_interfaces__msg__SkillsetStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = isae_robot_skillset_interfaces__msg__SkillsetStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
isae_robot_skillset_interfaces__msg__SkillsetStatus__Sequence__destroy(isae_robot_skillset_interfaces__msg__SkillsetStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    isae_robot_skillset_interfaces__msg__SkillsetStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
isae_robot_skillset_interfaces__msg__SkillsetStatus__Sequence__are_equal(const isae_robot_skillset_interfaces__msg__SkillsetStatus__Sequence * lhs, const isae_robot_skillset_interfaces__msg__SkillsetStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!isae_robot_skillset_interfaces__msg__SkillsetStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
isae_robot_skillset_interfaces__msg__SkillsetStatus__Sequence__copy(
  const isae_robot_skillset_interfaces__msg__SkillsetStatus__Sequence * input,
  isae_robot_skillset_interfaces__msg__SkillsetStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(isae_robot_skillset_interfaces__msg__SkillsetStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    isae_robot_skillset_interfaces__msg__SkillsetStatus * data =
      (isae_robot_skillset_interfaces__msg__SkillsetStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!isae_robot_skillset_interfaces__msg__SkillsetStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          isae_robot_skillset_interfaces__msg__SkillsetStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!isae_robot_skillset_interfaces__msg__SkillsetStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
