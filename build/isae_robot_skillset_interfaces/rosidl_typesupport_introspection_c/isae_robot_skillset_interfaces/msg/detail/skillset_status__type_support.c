// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from isae_robot_skillset_interfaces:msg/SkillsetStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "isae_robot_skillset_interfaces/msg/detail/skillset_status__rosidl_typesupport_introspection_c.h"
#include "isae_robot_skillset_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "isae_robot_skillset_interfaces/msg/detail/skillset_status__functions.h"
#include "isae_robot_skillset_interfaces/msg/detail/skillset_status__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `resources`
#include "isae_robot_skillset_interfaces/msg/resource_state.h"
// Member `resources`
#include "isae_robot_skillset_interfaces/msg/detail/resource_state__rosidl_typesupport_introspection_c.h"
// Member `skill_detect_target`
#include "isae_robot_skillset_interfaces/msg/skill_detect_target_status.h"
// Member `skill_detect_target`
#include "isae_robot_skillset_interfaces/msg/detail/skill_detect_target_status__rosidl_typesupport_introspection_c.h"
// Member `skill_move_to`
#include "isae_robot_skillset_interfaces/msg/skill_move_to_status.h"
// Member `skill_move_to`
#include "isae_robot_skillset_interfaces/msg/detail/skill_move_to_status__rosidl_typesupport_introspection_c.h"
// Member `skill_take_picture`
#include "isae_robot_skillset_interfaces/msg/skill_take_picture_status.h"
// Member `skill_take_picture`
#include "isae_robot_skillset_interfaces/msg/detail/skill_take_picture_status__rosidl_typesupport_introspection_c.h"
// Member `skill_track_target`
#include "isae_robot_skillset_interfaces/msg/skill_track_target_status.h"
// Member `skill_track_target`
#include "isae_robot_skillset_interfaces/msg/detail/skill_track_target_status__rosidl_typesupport_introspection_c.h"
// Member `info`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void isae_robot_skillset_interfaces__msg__SkillsetStatus__rosidl_typesupport_introspection_c__SkillsetStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  isae_robot_skillset_interfaces__msg__SkillsetStatus__init(message_memory);
}

void isae_robot_skillset_interfaces__msg__SkillsetStatus__rosidl_typesupport_introspection_c__SkillsetStatus_fini_function(void * message_memory)
{
  isae_robot_skillset_interfaces__msg__SkillsetStatus__fini(message_memory);
}

size_t isae_robot_skillset_interfaces__msg__SkillsetStatus__rosidl_typesupport_introspection_c__size_function__SkillsetStatus__resources(
  const void * untyped_member)
{
  const isae_robot_skillset_interfaces__msg__ResourceState__Sequence * member =
    (const isae_robot_skillset_interfaces__msg__ResourceState__Sequence *)(untyped_member);
  return member->size;
}

const void * isae_robot_skillset_interfaces__msg__SkillsetStatus__rosidl_typesupport_introspection_c__get_const_function__SkillsetStatus__resources(
  const void * untyped_member, size_t index)
{
  const isae_robot_skillset_interfaces__msg__ResourceState__Sequence * member =
    (const isae_robot_skillset_interfaces__msg__ResourceState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * isae_robot_skillset_interfaces__msg__SkillsetStatus__rosidl_typesupport_introspection_c__get_function__SkillsetStatus__resources(
  void * untyped_member, size_t index)
{
  isae_robot_skillset_interfaces__msg__ResourceState__Sequence * member =
    (isae_robot_skillset_interfaces__msg__ResourceState__Sequence *)(untyped_member);
  return &member->data[index];
}

void isae_robot_skillset_interfaces__msg__SkillsetStatus__rosidl_typesupport_introspection_c__fetch_function__SkillsetStatus__resources(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const isae_robot_skillset_interfaces__msg__ResourceState * item =
    ((const isae_robot_skillset_interfaces__msg__ResourceState *)
    isae_robot_skillset_interfaces__msg__SkillsetStatus__rosidl_typesupport_introspection_c__get_const_function__SkillsetStatus__resources(untyped_member, index));
  isae_robot_skillset_interfaces__msg__ResourceState * value =
    (isae_robot_skillset_interfaces__msg__ResourceState *)(untyped_value);
  *value = *item;
}

void isae_robot_skillset_interfaces__msg__SkillsetStatus__rosidl_typesupport_introspection_c__assign_function__SkillsetStatus__resources(
  void * untyped_member, size_t index, const void * untyped_value)
{
  isae_robot_skillset_interfaces__msg__ResourceState * item =
    ((isae_robot_skillset_interfaces__msg__ResourceState *)
    isae_robot_skillset_interfaces__msg__SkillsetStatus__rosidl_typesupport_introspection_c__get_function__SkillsetStatus__resources(untyped_member, index));
  const isae_robot_skillset_interfaces__msg__ResourceState * value =
    (const isae_robot_skillset_interfaces__msg__ResourceState *)(untyped_value);
  *item = *value;
}

bool isae_robot_skillset_interfaces__msg__SkillsetStatus__rosidl_typesupport_introspection_c__resize_function__SkillsetStatus__resources(
  void * untyped_member, size_t size)
{
  isae_robot_skillset_interfaces__msg__ResourceState__Sequence * member =
    (isae_robot_skillset_interfaces__msg__ResourceState__Sequence *)(untyped_member);
  isae_robot_skillset_interfaces__msg__ResourceState__Sequence__fini(member);
  return isae_robot_skillset_interfaces__msg__ResourceState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember isae_robot_skillset_interfaces__msg__SkillsetStatus__rosidl_typesupport_introspection_c__SkillsetStatus_message_member_array[7] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isae_robot_skillset_interfaces__msg__SkillsetStatus, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "resources",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isae_robot_skillset_interfaces__msg__SkillsetStatus, resources),  // bytes offset in struct
    NULL,  // default value
    isae_robot_skillset_interfaces__msg__SkillsetStatus__rosidl_typesupport_introspection_c__size_function__SkillsetStatus__resources,  // size() function pointer
    isae_robot_skillset_interfaces__msg__SkillsetStatus__rosidl_typesupport_introspection_c__get_const_function__SkillsetStatus__resources,  // get_const(index) function pointer
    isae_robot_skillset_interfaces__msg__SkillsetStatus__rosidl_typesupport_introspection_c__get_function__SkillsetStatus__resources,  // get(index) function pointer
    isae_robot_skillset_interfaces__msg__SkillsetStatus__rosidl_typesupport_introspection_c__fetch_function__SkillsetStatus__resources,  // fetch(index, &value) function pointer
    isae_robot_skillset_interfaces__msg__SkillsetStatus__rosidl_typesupport_introspection_c__assign_function__SkillsetStatus__resources,  // assign(index, value) function pointer
    isae_robot_skillset_interfaces__msg__SkillsetStatus__rosidl_typesupport_introspection_c__resize_function__SkillsetStatus__resources  // resize(index) function pointer
  },
  {
    "skill_detect_target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isae_robot_skillset_interfaces__msg__SkillsetStatus, skill_detect_target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "skill_move_to",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isae_robot_skillset_interfaces__msg__SkillsetStatus, skill_move_to),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "skill_take_picture",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isae_robot_skillset_interfaces__msg__SkillsetStatus, skill_take_picture),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "skill_track_target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isae_robot_skillset_interfaces__msg__SkillsetStatus, skill_track_target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isae_robot_skillset_interfaces__msg__SkillsetStatus, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers isae_robot_skillset_interfaces__msg__SkillsetStatus__rosidl_typesupport_introspection_c__SkillsetStatus_message_members = {
  "isae_robot_skillset_interfaces__msg",  // message namespace
  "SkillsetStatus",  // message name
  7,  // number of fields
  sizeof(isae_robot_skillset_interfaces__msg__SkillsetStatus),
  isae_robot_skillset_interfaces__msg__SkillsetStatus__rosidl_typesupport_introspection_c__SkillsetStatus_message_member_array,  // message members
  isae_robot_skillset_interfaces__msg__SkillsetStatus__rosidl_typesupport_introspection_c__SkillsetStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  isae_robot_skillset_interfaces__msg__SkillsetStatus__rosidl_typesupport_introspection_c__SkillsetStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t isae_robot_skillset_interfaces__msg__SkillsetStatus__rosidl_typesupport_introspection_c__SkillsetStatus_message_type_support_handle = {
  0,
  &isae_robot_skillset_interfaces__msg__SkillsetStatus__rosidl_typesupport_introspection_c__SkillsetStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_isae_robot_skillset_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, isae_robot_skillset_interfaces, msg, SkillsetStatus)() {
  isae_robot_skillset_interfaces__msg__SkillsetStatus__rosidl_typesupport_introspection_c__SkillsetStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  isae_robot_skillset_interfaces__msg__SkillsetStatus__rosidl_typesupport_introspection_c__SkillsetStatus_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, isae_robot_skillset_interfaces, msg, ResourceState)();
  isae_robot_skillset_interfaces__msg__SkillsetStatus__rosidl_typesupport_introspection_c__SkillsetStatus_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, isae_robot_skillset_interfaces, msg, SkillDetectTargetStatus)();
  isae_robot_skillset_interfaces__msg__SkillsetStatus__rosidl_typesupport_introspection_c__SkillsetStatus_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, isae_robot_skillset_interfaces, msg, SkillMoveToStatus)();
  isae_robot_skillset_interfaces__msg__SkillsetStatus__rosidl_typesupport_introspection_c__SkillsetStatus_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, isae_robot_skillset_interfaces, msg, SkillTakePictureStatus)();
  isae_robot_skillset_interfaces__msg__SkillsetStatus__rosidl_typesupport_introspection_c__SkillsetStatus_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, isae_robot_skillset_interfaces, msg, SkillTrackTargetStatus)();
  if (!isae_robot_skillset_interfaces__msg__SkillsetStatus__rosidl_typesupport_introspection_c__SkillsetStatus_message_type_support_handle.typesupport_identifier) {
    isae_robot_skillset_interfaces__msg__SkillsetStatus__rosidl_typesupport_introspection_c__SkillsetStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &isae_robot_skillset_interfaces__msg__SkillsetStatus__rosidl_typesupport_introspection_c__SkillsetStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
