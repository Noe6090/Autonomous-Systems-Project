// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from isae_robot_skillset_interfaces:msg/SkillTrackTargetInput.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TRACK_TARGET_INPUT__STRUCT_H_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TRACK_TARGET_INPUT__STRUCT_H_

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

/// Struct defined in msg/SkillTrackTargetInput in the package isae_robot_skillset_interfaces.
/**
  * Generated from isae_robot.rl:102:10
 */
typedef struct isae_robot_skillset_interfaces__msg__SkillTrackTargetInput
{
  std_msgs__msg__Float64 timeout;
} isae_robot_skillset_interfaces__msg__SkillTrackTargetInput;

// Struct for a sequence of isae_robot_skillset_interfaces__msg__SkillTrackTargetInput.
typedef struct isae_robot_skillset_interfaces__msg__SkillTrackTargetInput__Sequence
{
  isae_robot_skillset_interfaces__msg__SkillTrackTargetInput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isae_robot_skillset_interfaces__msg__SkillTrackTargetInput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TRACK_TARGET_INPUT__STRUCT_H_
