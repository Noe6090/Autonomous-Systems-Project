// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from isae_robot_skillset_interfaces:msg/SkillTrackTargetProgress.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TRACK_TARGET_PROGRESS__STRUCT_H_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TRACK_TARGET_PROGRESS__STRUCT_H_

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
// Member 'detection'
#include "geometry_msgs/msg/detail/pose2_d__struct.h"

/// Struct defined in msg/SkillTrackTargetProgress in the package isae_robot_skillset_interfaces.
/**
  * Generated from isae_robot.rl:102:10
 */
typedef struct isae_robot_skillset_interfaces__msg__SkillTrackTargetProgress
{
  rosidl_runtime_c__String id;
  geometry_msgs__msg__Pose2D detection;
} isae_robot_skillset_interfaces__msg__SkillTrackTargetProgress;

// Struct for a sequence of isae_robot_skillset_interfaces__msg__SkillTrackTargetProgress.
typedef struct isae_robot_skillset_interfaces__msg__SkillTrackTargetProgress__Sequence
{
  isae_robot_skillset_interfaces__msg__SkillTrackTargetProgress * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isae_robot_skillset_interfaces__msg__SkillTrackTargetProgress__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TRACK_TARGET_PROGRESS__STRUCT_H_
