// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from isae_robot_skillset_interfaces:msg/SkillTakePictureRequest.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TAKE_PICTURE_REQUEST__STRUCT_H_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TAKE_PICTURE_REQUEST__STRUCT_H_

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
// Member 'input'
#include "isae_robot_skillset_interfaces/msg/detail/skill_take_picture_input__struct.h"

/// Struct defined in msg/SkillTakePictureRequest in the package isae_robot_skillset_interfaces.
/**
  * Generated from isae_robot.rl:93:10
 */
typedef struct isae_robot_skillset_interfaces__msg__SkillTakePictureRequest
{
  rosidl_runtime_c__String id;
  isae_robot_skillset_interfaces__msg__SkillTakePictureInput input;
} isae_robot_skillset_interfaces__msg__SkillTakePictureRequest;

// Struct for a sequence of isae_robot_skillset_interfaces__msg__SkillTakePictureRequest.
typedef struct isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__Sequence
{
  isae_robot_skillset_interfaces__msg__SkillTakePictureRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isae_robot_skillset_interfaces__msg__SkillTakePictureRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TAKE_PICTURE_REQUEST__STRUCT_H_
