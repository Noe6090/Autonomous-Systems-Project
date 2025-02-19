// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from isae_robot_skillset_interfaces:msg/SkillDetectTargetResponse.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_DETECT_TARGET_RESPONSE__STRUCT_H_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_DETECT_TARGET_RESPONSE__STRUCT_H_

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
  isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__SUCCESS = 0
};

/// Constant 'ALREADY_RUNNING'.
enum
{
  isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__ALREADY_RUNNING = 1
};

/// Constant 'PRECONDITION_FAILURE'.
enum
{
  isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__PRECONDITION_FAILURE = 2
};

/// Constant 'VALIDATE_FAILURE'.
enum
{
  isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__VALIDATE_FAILURE = 3
};

/// Constant 'START_FAILURE'.
enum
{
  isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__START_FAILURE = 4
};

/// Constant 'INVARIANT_FAILURE'.
enum
{
  isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__INVARIANT_FAILURE = 5
};

/// Constant 'INTERRUPT'.
enum
{
  isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__INTERRUPT = 6
};

/// Constant 'FAILURE'.
enum
{
  isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__FAILURE = 7
};

// Include directives for member types
// Member 'id'
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'output'
#include "isae_robot_skillset_interfaces/msg/detail/skill_detect_target_output__struct.h"

/// Struct defined in msg/SkillDetectTargetResponse in the package isae_robot_skillset_interfaces.
typedef struct isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse
{
  rosidl_runtime_c__String id;
  /// cf. constant
  uint8_t result;
  /// Preconditions
  /// Terminate
  /// terminate mode or precondition/invariant failure
  rosidl_runtime_c__String name;
  /// if effect succeed or true if none
  bool effect;
  /// if the postcondition is true (or no postcondition)
  bool postcondition;
  /// Output
  isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput output;
} isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse;

// Struct for a sequence of isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse.
typedef struct isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__Sequence
{
  isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isae_robot_skillset_interfaces__msg__SkillDetectTargetResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_DETECT_TARGET_RESPONSE__STRUCT_H_
