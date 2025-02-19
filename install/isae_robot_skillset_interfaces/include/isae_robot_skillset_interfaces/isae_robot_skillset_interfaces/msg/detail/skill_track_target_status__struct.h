// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from isae_robot_skillset_interfaces:msg/SkillTrackTargetStatus.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TRACK_TARGET_STATUS__STRUCT_H_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TRACK_TARGET_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'READY'.
enum
{
  isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__READY = 0
};

/// Constant 'RUNNING'.
enum
{
  isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__RUNNING = 1
};

/// Constant 'INTERRUPTING'.
enum
{
  isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__INTERRUPTING = 2
};

// Include directives for member types
// Member 'name'
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'input'
#include "isae_robot_skillset_interfaces/msg/detail/skill_track_target_input__struct.h"

/// Struct defined in msg/SkillTrackTargetStatus in the package isae_robot_skillset_interfaces.
typedef struct isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String id;
  uint8_t state;
  isae_robot_skillset_interfaces__msg__SkillTrackTargetInput input;
} isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus;

// Struct for a sequence of isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus.
typedef struct isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__Sequence
{
  isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TRACK_TARGET_STATUS__STRUCT_H_
