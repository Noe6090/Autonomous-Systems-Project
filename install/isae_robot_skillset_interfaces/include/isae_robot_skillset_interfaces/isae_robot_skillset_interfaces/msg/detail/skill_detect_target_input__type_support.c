// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from isae_robot_skillset_interfaces:msg/SkillDetectTargetInput.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "isae_robot_skillset_interfaces/msg/detail/skill_detect_target_input__rosidl_typesupport_introspection_c.h"
#include "isae_robot_skillset_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "isae_robot_skillset_interfaces/msg/detail/skill_detect_target_input__functions.h"
#include "isae_robot_skillset_interfaces/msg/detail/skill_detect_target_input__struct.h"


// Include directives for member types
// Member `timeout`
#include "std_msgs/msg/float64.h"
// Member `timeout`
#include "std_msgs/msg/detail/float64__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void isae_robot_skillset_interfaces__msg__SkillDetectTargetInput__rosidl_typesupport_introspection_c__SkillDetectTargetInput_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  isae_robot_skillset_interfaces__msg__SkillDetectTargetInput__init(message_memory);
}

void isae_robot_skillset_interfaces__msg__SkillDetectTargetInput__rosidl_typesupport_introspection_c__SkillDetectTargetInput_fini_function(void * message_memory)
{
  isae_robot_skillset_interfaces__msg__SkillDetectTargetInput__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember isae_robot_skillset_interfaces__msg__SkillDetectTargetInput__rosidl_typesupport_introspection_c__SkillDetectTargetInput_message_member_array[1] = {
  {
    "timeout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isae_robot_skillset_interfaces__msg__SkillDetectTargetInput, timeout),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers isae_robot_skillset_interfaces__msg__SkillDetectTargetInput__rosidl_typesupport_introspection_c__SkillDetectTargetInput_message_members = {
  "isae_robot_skillset_interfaces__msg",  // message namespace
  "SkillDetectTargetInput",  // message name
  1,  // number of fields
  sizeof(isae_robot_skillset_interfaces__msg__SkillDetectTargetInput),
  isae_robot_skillset_interfaces__msg__SkillDetectTargetInput__rosidl_typesupport_introspection_c__SkillDetectTargetInput_message_member_array,  // message members
  isae_robot_skillset_interfaces__msg__SkillDetectTargetInput__rosidl_typesupport_introspection_c__SkillDetectTargetInput_init_function,  // function to initialize message memory (memory has to be allocated)
  isae_robot_skillset_interfaces__msg__SkillDetectTargetInput__rosidl_typesupport_introspection_c__SkillDetectTargetInput_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t isae_robot_skillset_interfaces__msg__SkillDetectTargetInput__rosidl_typesupport_introspection_c__SkillDetectTargetInput_message_type_support_handle = {
  0,
  &isae_robot_skillset_interfaces__msg__SkillDetectTargetInput__rosidl_typesupport_introspection_c__SkillDetectTargetInput_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_isae_robot_skillset_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, isae_robot_skillset_interfaces, msg, SkillDetectTargetInput)() {
  isae_robot_skillset_interfaces__msg__SkillDetectTargetInput__rosidl_typesupport_introspection_c__SkillDetectTargetInput_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64)();
  if (!isae_robot_skillset_interfaces__msg__SkillDetectTargetInput__rosidl_typesupport_introspection_c__SkillDetectTargetInput_message_type_support_handle.typesupport_identifier) {
    isae_robot_skillset_interfaces__msg__SkillDetectTargetInput__rosidl_typesupport_introspection_c__SkillDetectTargetInput_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &isae_robot_skillset_interfaces__msg__SkillDetectTargetInput__rosidl_typesupport_introspection_c__SkillDetectTargetInput_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
