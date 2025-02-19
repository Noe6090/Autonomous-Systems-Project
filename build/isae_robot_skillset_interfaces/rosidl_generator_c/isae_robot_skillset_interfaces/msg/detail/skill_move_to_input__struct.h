// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from isae_robot_skillset_interfaces:msg/SkillMoveToInput.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_MOVE_TO_INPUT__STRUCT_H_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_MOVE_TO_INPUT__STRUCT_H_

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
#include "geometry_msgs/msg/detail/pose2_d__struct.h"

/// Struct defined in msg/SkillMoveToInput in the package isae_robot_skillset_interfaces.
/**
  * Generated from isae_robot.rl:56:10
 */
typedef struct isae_robot_skillset_interfaces__msg__SkillMoveToInput
{
  geometry_msgs__msg__Pose2D target;
} isae_robot_skillset_interfaces__msg__SkillMoveToInput;

// Struct for a sequence of isae_robot_skillset_interfaces__msg__SkillMoveToInput.
typedef struct isae_robot_skillset_interfaces__msg__SkillMoveToInput__Sequence
{
  isae_robot_skillset_interfaces__msg__SkillMoveToInput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isae_robot_skillset_interfaces__msg__SkillMoveToInput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_MOVE_TO_INPUT__STRUCT_H_
