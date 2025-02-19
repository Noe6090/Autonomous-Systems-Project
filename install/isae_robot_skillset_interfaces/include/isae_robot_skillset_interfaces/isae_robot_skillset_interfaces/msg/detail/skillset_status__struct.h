// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from isae_robot_skillset_interfaces:msg/SkillsetStatus.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILLSET_STATUS__STRUCT_H_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILLSET_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'resources'
#include "isae_robot_skillset_interfaces/msg/detail/resource_state__struct.h"
// Member 'skill_detect_target'
#include "isae_robot_skillset_interfaces/msg/detail/skill_detect_target_status__struct.h"
// Member 'skill_move_to'
#include "isae_robot_skillset_interfaces/msg/detail/skill_move_to_status__struct.h"
// Member 'skill_take_picture'
#include "isae_robot_skillset_interfaces/msg/detail/skill_take_picture_status__struct.h"
// Member 'skill_track_target'
#include "isae_robot_skillset_interfaces/msg/detail/skill_track_target_status__struct.h"
// Member 'info'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SkillsetStatus in the package isae_robot_skillset_interfaces.
typedef struct isae_robot_skillset_interfaces__msg__SkillsetStatus
{
  builtin_interfaces__msg__Time stamp;
  isae_robot_skillset_interfaces__msg__ResourceState__Sequence resources;
  isae_robot_skillset_interfaces__msg__SkillDetectTargetStatus skill_detect_target;
  isae_robot_skillset_interfaces__msg__SkillMoveToStatus skill_move_to;
  isae_robot_skillset_interfaces__msg__SkillTakePictureStatus skill_take_picture;
  isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus skill_track_target;
  rosidl_runtime_c__String info;
} isae_robot_skillset_interfaces__msg__SkillsetStatus;

// Struct for a sequence of isae_robot_skillset_interfaces__msg__SkillsetStatus.
typedef struct isae_robot_skillset_interfaces__msg__SkillsetStatus__Sequence
{
  isae_robot_skillset_interfaces__msg__SkillsetStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isae_robot_skillset_interfaces__msg__SkillsetStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILLSET_STATUS__STRUCT_H_
