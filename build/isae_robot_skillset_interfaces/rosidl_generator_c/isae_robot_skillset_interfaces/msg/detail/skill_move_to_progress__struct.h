// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from isae_robot_skillset_interfaces:msg/SkillMoveToProgress.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_MOVE_TO_PROGRESS__STRUCT_H_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_MOVE_TO_PROGRESS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'distance'
#include "std_msgs/msg/detail/float64__struct.h"

/// Struct defined in msg/SkillMoveToProgress in the package isae_robot_skillset_interfaces.
/**
  * Generated from isae_robot.rl:56:10
 */
typedef struct isae_robot_skillset_interfaces__msg__SkillMoveToProgress
{
  rosidl_runtime_c__String id;
  std_msgs__msg__Float64 distance;
} isae_robot_skillset_interfaces__msg__SkillMoveToProgress;

// Struct for a sequence of isae_robot_skillset_interfaces__msg__SkillMoveToProgress.
typedef struct isae_robot_skillset_interfaces__msg__SkillMoveToProgress__Sequence
{
  isae_robot_skillset_interfaces__msg__SkillMoveToProgress * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isae_robot_skillset_interfaces__msg__SkillMoveToProgress__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_MOVE_TO_PROGRESS__STRUCT_H_
