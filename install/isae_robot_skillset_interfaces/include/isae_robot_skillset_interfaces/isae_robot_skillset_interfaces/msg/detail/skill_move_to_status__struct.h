// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from isae_robot_skillset_interfaces:msg/SkillMoveToStatus.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_MOVE_TO_STATUS__STRUCT_H_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_MOVE_TO_STATUS__STRUCT_H_

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
  isae_robot_skillset_interfaces__msg__SkillMoveToStatus__READY = 0
};

/// Constant 'RUNNING'.
enum
{
  isae_robot_skillset_interfaces__msg__SkillMoveToStatus__RUNNING = 1
};

/// Constant 'INTERRUPTING'.
enum
{
  isae_robot_skillset_interfaces__msg__SkillMoveToStatus__INTERRUPTING = 2
};

// Include directives for member types
// Member 'name'
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'input'
#include "isae_robot_skillset_interfaces/msg/detail/skill_move_to_input__struct.h"

/// Struct defined in msg/SkillMoveToStatus in the package isae_robot_skillset_interfaces.
typedef struct isae_robot_skillset_interfaces__msg__SkillMoveToStatus
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String id;
  uint8_t state;
  isae_robot_skillset_interfaces__msg__SkillMoveToInput input;
} isae_robot_skillset_interfaces__msg__SkillMoveToStatus;

// Struct for a sequence of isae_robot_skillset_interfaces__msg__SkillMoveToStatus.
typedef struct isae_robot_skillset_interfaces__msg__SkillMoveToStatus__Sequence
{
  isae_robot_skillset_interfaces__msg__SkillMoveToStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isae_robot_skillset_interfaces__msg__SkillMoveToStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_MOVE_TO_STATUS__STRUCT_H_
