// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from isae_robot_skillset_interfaces:msg/SkillDetectTargetRequest.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "isae_robot_skillset_interfaces/msg/detail/skill_detect_target_request__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace isae_robot_skillset_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SkillDetectTargetRequest_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) isae_robot_skillset_interfaces::msg::SkillDetectTargetRequest(_init);
}

void SkillDetectTargetRequest_fini_function(void * message_memory)
{
  auto typed_message = static_cast<isae_robot_skillset_interfaces::msg::SkillDetectTargetRequest *>(message_memory);
  typed_message->~SkillDetectTargetRequest();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SkillDetectTargetRequest_message_member_array[2] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isae_robot_skillset_interfaces::msg::SkillDetectTargetRequest, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "input",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<isae_robot_skillset_interfaces::msg::SkillDetectTargetInput>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isae_robot_skillset_interfaces::msg::SkillDetectTargetRequest, input),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SkillDetectTargetRequest_message_members = {
  "isae_robot_skillset_interfaces::msg",  // message namespace
  "SkillDetectTargetRequest",  // message name
  2,  // number of fields
  sizeof(isae_robot_skillset_interfaces::msg::SkillDetectTargetRequest),
  SkillDetectTargetRequest_message_member_array,  // message members
  SkillDetectTargetRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  SkillDetectTargetRequest_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SkillDetectTargetRequest_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SkillDetectTargetRequest_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace isae_robot_skillset_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<isae_robot_skillset_interfaces::msg::SkillDetectTargetRequest>()
{
  return &::isae_robot_skillset_interfaces::msg::rosidl_typesupport_introspection_cpp::SkillDetectTargetRequest_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, isae_robot_skillset_interfaces, msg, SkillDetectTargetRequest)() {
  return &::isae_robot_skillset_interfaces::msg::rosidl_typesupport_introspection_cpp::SkillDetectTargetRequest_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
