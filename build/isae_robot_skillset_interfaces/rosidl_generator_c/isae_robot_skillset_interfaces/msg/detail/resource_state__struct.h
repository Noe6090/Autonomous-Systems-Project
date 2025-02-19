// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from isae_robot_skillset_interfaces:msg/ResourceState.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__RESOURCE_STATE__STRUCT_H_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__RESOURCE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ResourceState in the package isae_robot_skillset_interfaces.
typedef struct isae_robot_skillset_interfaces__msg__ResourceState
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String state;
} isae_robot_skillset_interfaces__msg__ResourceState;

// Struct for a sequence of isae_robot_skillset_interfaces__msg__ResourceState.
typedef struct isae_robot_skillset_interfaces__msg__ResourceState__Sequence
{
  isae_robot_skillset_interfaces__msg__ResourceState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isae_robot_skillset_interfaces__msg__ResourceState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__RESOURCE_STATE__STRUCT_H_
