// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from isae_robot_skillset_interfaces:msg/DataPoseResponse.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__DATA_POSE_RESPONSE__STRUCT_H_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__DATA_POSE_RESPONSE__STRUCT_H_

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
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'value'
#include "geometry_msgs/msg/detail/pose2_d__struct.h"

/// Struct defined in msg/DataPoseResponse in the package isae_robot_skillset_interfaces.
/**
  * Generated from isae_robot.rl:11:9
 */
typedef struct isae_robot_skillset_interfaces__msg__DataPoseResponse
{
  rosidl_runtime_c__String id;
  builtin_interfaces__msg__Time stamp;
  bool has_data;
  geometry_msgs__msg__Pose2D value;
} isae_robot_skillset_interfaces__msg__DataPoseResponse;

// Struct for a sequence of isae_robot_skillset_interfaces__msg__DataPoseResponse.
typedef struct isae_robot_skillset_interfaces__msg__DataPoseResponse__Sequence
{
  isae_robot_skillset_interfaces__msg__DataPoseResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isae_robot_skillset_interfaces__msg__DataPoseResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__DATA_POSE_RESPONSE__STRUCT_H_
