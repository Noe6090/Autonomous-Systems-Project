// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from isae_robot_skillset_interfaces:msg/SkillDetectTargetInput.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_DETECT_TARGET_INPUT__STRUCT_H_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_DETECT_TARGET_INPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'timeout'
#include "std_msgs/msg/detail/float64__struct.h"

/// Struct defined in msg/SkillDetectTargetInput in the package isae_robot_skillset_interfaces.
/**
  * Generated from isae_robot.rl:44:10
 */
typedef struct isae_robot_skillset_interfaces__msg__SkillDetectTargetInput
{
  std_msgs__msg__Float64 timeout;
} isae_robot_skillset_interfaces__msg__SkillDetectTargetInput;

// Struct for a sequence of isae_robot_skillset_interfaces__msg__SkillDetectTargetInput.
typedef struct isae_robot_skillset_interfaces__msg__SkillDetectTargetInput__Sequence
{
  isae_robot_skillset_interfaces__msg__SkillDetectTargetInput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isae_robot_skillset_interfaces__msg__SkillDetectTargetInput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_DETECT_TARGET_INPUT__STRUCT_H_
