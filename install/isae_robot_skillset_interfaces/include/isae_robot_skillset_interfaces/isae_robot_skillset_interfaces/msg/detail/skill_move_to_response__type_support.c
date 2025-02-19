// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from isae_robot_skillset_interfaces:msg/SkillMoveToResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "isae_robot_skillset_interfaces/msg/detail/skill_move_to_response__rosidl_typesupport_introspection_c.h"
#include "isae_robot_skillset_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "isae_robot_skillset_interfaces/msg/detail/skill_move_to_response__functions.h"
#include "isae_robot_skillset_interfaces/msg/detail/skill_move_to_response__struct.h"


// Include directives for member types
// Member `id`
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void isae_robot_skillset_interfaces__msg__SkillMoveToResponse__rosidl_typesupport_introspection_c__SkillMoveToResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  isae_robot_skillset_interfaces__msg__SkillMoveToResponse__init(message_memory);
}

void isae_robot_skillset_interfaces__msg__SkillMoveToResponse__rosidl_typesupport_introspection_c__SkillMoveToResponse_fini_function(void * message_memory)
{
  isae_robot_skillset_interfaces__msg__SkillMoveToResponse__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember isae_robot_skillset_interfaces__msg__SkillMoveToResponse__rosidl_typesupport_introspection_c__SkillMoveToResponse_message_member_array[7] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isae_robot_skillset_interfaces__msg__SkillMoveToResponse, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isae_robot_skillset_interfaces__msg__SkillMoveToResponse, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_idle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isae_robot_skillset_interfaces__msg__SkillMoveToResponse, is_idle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_battery_high",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isae_robot_skillset_interfaces__msg__SkillMoveToResponse, is_battery_high),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isae_robot_skillset_interfaces__msg__SkillMoveToResponse, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "effect",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isae_robot_skillset_interfaces__msg__SkillMoveToResponse, effect),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "postcondition",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isae_robot_skillset_interfaces__msg__SkillMoveToResponse, postcondition),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers isae_robot_skillset_interfaces__msg__SkillMoveToResponse__rosidl_typesupport_introspection_c__SkillMoveToResponse_message_members = {
  "isae_robot_skillset_interfaces__msg",  // message namespace
  "SkillMoveToResponse",  // message name
  7,  // number of fields
  sizeof(isae_robot_skillset_interfaces__msg__SkillMoveToResponse),
  isae_robot_skillset_interfaces__msg__SkillMoveToResponse__rosidl_typesupport_introspection_c__SkillMoveToResponse_message_member_array,  // message members
  isae_robot_skillset_interfaces__msg__SkillMoveToResponse__rosidl_typesupport_introspection_c__SkillMoveToResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  isae_robot_skillset_interfaces__msg__SkillMoveToResponse__rosidl_typesupport_introspection_c__SkillMoveToResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t isae_robot_skillset_interfaces__msg__SkillMoveToResponse__rosidl_typesupport_introspection_c__SkillMoveToResponse_message_type_support_handle = {
  0,
  &isae_robot_skillset_interfaces__msg__SkillMoveToResponse__rosidl_typesupport_introspection_c__SkillMoveToResponse_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_isae_robot_skillset_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, isae_robot_skillset_interfaces, msg, SkillMoveToResponse)() {
  if (!isae_robot_skillset_interfaces__msg__SkillMoveToResponse__rosidl_typesupport_introspection_c__SkillMoveToResponse_message_type_support_handle.typesupport_identifier) {
    isae_robot_skillset_interfaces__msg__SkillMoveToResponse__rosidl_typesupport_introspection_c__SkillMoveToResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &isae_robot_skillset_interfaces__msg__SkillMoveToResponse__rosidl_typesupport_introspection_c__SkillMoveToResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
