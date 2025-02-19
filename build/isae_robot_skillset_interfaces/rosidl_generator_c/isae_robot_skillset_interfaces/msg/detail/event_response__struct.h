// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from isae_robot_skillset_interfaces:msg/EventResponse.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__EVENT_RESPONSE__STRUCT_H_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__EVENT_RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SUCCESS'.
enum
{
  isae_robot_skillset_interfaces__msg__EventResponse__SUCCESS = 0
};

/// Constant 'UNDEFINED'.
enum
{
  isae_robot_skillset_interfaces__msg__EventResponse__UNDEFINED = 1
};

/// Constant 'GUARD_FAILURE'.
enum
{
  isae_robot_skillset_interfaces__msg__EventResponse__GUARD_FAILURE = 2
};

/// Constant 'EFFECT_FAILURE'.
enum
{
  isae_robot_skillset_interfaces__msg__EventResponse__EFFECT_FAILURE = 3
};

// Include directives for member types
// Member 'id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/EventResponse in the package isae_robot_skillset_interfaces.
/**
  * Response Constants
 */
typedef struct isae_robot_skillset_interfaces__msg__EventResponse
{
  rosidl_runtime_c__String id;
  uint8_t response;
} isae_robot_skillset_interfaces__msg__EventResponse;

// Struct for a sequence of isae_robot_skillset_interfaces__msg__EventResponse.
typedef struct isae_robot_skillset_interfaces__msg__EventResponse__Sequence
{
  isae_robot_skillset_interfaces__msg__EventResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isae_robot_skillset_interfaces__msg__EventResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__EVENT_RESPONSE__STRUCT_H_
