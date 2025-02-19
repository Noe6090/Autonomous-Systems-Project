// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from isae_robot_skillset_interfaces:msg/SkillDetectTargetOutput.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_DETECT_TARGET_OUTPUT__STRUCT_H_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_DETECT_TARGET_OUTPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target'
#include "std_msgs/msg/detail/string__struct.h"

/// Struct defined in msg/SkillDetectTargetOutput in the package isae_robot_skillset_interfaces.
/**
  * Generated from isae_robot.rl:44:10
 */
typedef struct isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput
{
  std_msgs__msg__String target;
} isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput;

// Struct for a sequence of isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput.
typedef struct isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__Sequence
{
  isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isae_robot_skillset_interfaces__msg__SkillDetectTargetOutput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_DETECT_TARGET_OUTPUT__STRUCT_H_
