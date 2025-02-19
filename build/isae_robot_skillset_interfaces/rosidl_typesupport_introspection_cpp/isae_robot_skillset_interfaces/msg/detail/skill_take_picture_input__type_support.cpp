// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from isae_robot_skillset_interfaces:msg/SkillTakePictureInput.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "isae_robot_skillset_interfaces/msg/detail/skill_take_picture_input__struct.hpp"
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

void SkillTakePictureInput_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) isae_robot_skillset_interfaces::msg::SkillTakePictureInput(_init);
}

void SkillTakePictureInput_fini_function(void * message_memory)
{
  auto typed_message = static_cast<isae_robot_skillset_interfaces::msg::SkillTakePictureInput *>(message_memory);
  typed_message->~SkillTakePictureInput();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SkillTakePictureInput_message_member_array[1] = {
  {
    "object_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::String>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isae_robot_skillset_interfaces::msg::SkillTakePictureInput, object_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SkillTakePictureInput_message_members = {
  "isae_robot_skillset_interfaces::msg",  // message namespace
  "SkillTakePictureInput",  // message name
  1,  // number of fields
  sizeof(isae_robot_skillset_interfaces::msg::SkillTakePictureInput),
  SkillTakePictureInput_message_member_array,  // message members
  SkillTakePictureInput_init_function,  // function to initialize message memory (memory has to be allocated)
  SkillTakePictureInput_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SkillTakePictureInput_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SkillTakePictureInput_message_members,
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
get_message_type_support_handle<isae_robot_skillset_interfaces::msg::SkillTakePictureInput>()
{
  return &::isae_robot_skillset_interfaces::msg::rosidl_typesupport_introspection_cpp::SkillTakePictureInput_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, isae_robot_skillset_interfaces, msg, SkillTakePictureInput)() {
  return &::isae_robot_skillset_interfaces::msg::rosidl_typesupport_introspection_cpp::SkillTakePictureInput_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
