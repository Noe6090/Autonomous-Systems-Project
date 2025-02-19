// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from isae_robot_skillset_interfaces:msg/SkillsetStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "isae_robot_skillset_interfaces/msg/detail/skillset_status__struct.hpp"
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

void SkillsetStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) isae_robot_skillset_interfaces::msg::SkillsetStatus(_init);
}

void SkillsetStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<isae_robot_skillset_interfaces::msg::SkillsetStatus *>(message_memory);
  typed_message->~SkillsetStatus();
}

size_t size_function__SkillsetStatus__resources(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<isae_robot_skillset_interfaces::msg::ResourceState> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SkillsetStatus__resources(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<isae_robot_skillset_interfaces::msg::ResourceState> *>(untyped_member);
  return &member[index];
}

void * get_function__SkillsetStatus__resources(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<isae_robot_skillset_interfaces::msg::ResourceState> *>(untyped_member);
  return &member[index];
}

void fetch_function__SkillsetStatus__resources(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const isae_robot_skillset_interfaces::msg::ResourceState *>(
    get_const_function__SkillsetStatus__resources(untyped_member, index));
  auto & value = *reinterpret_cast<isae_robot_skillset_interfaces::msg::ResourceState *>(untyped_value);
  value = item;
}

void assign_function__SkillsetStatus__resources(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<isae_robot_skillset_interfaces::msg::ResourceState *>(
    get_function__SkillsetStatus__resources(untyped_member, index));
  const auto & value = *reinterpret_cast<const isae_robot_skillset_interfaces::msg::ResourceState *>(untyped_value);
  item = value;
}

void resize_function__SkillsetStatus__resources(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<isae_robot_skillset_interfaces::msg::ResourceState> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SkillsetStatus_message_member_array[7] = {
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isae_robot_skillset_interfaces::msg::SkillsetStatus, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "resources",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<isae_robot_skillset_interfaces::msg::ResourceState>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isae_robot_skillset_interfaces::msg::SkillsetStatus, resources),  // bytes offset in struct
    nullptr,  // default value
    size_function__SkillsetStatus__resources,  // size() function pointer
    get_const_function__SkillsetStatus__resources,  // get_const(index) function pointer
    get_function__SkillsetStatus__resources,  // get(index) function pointer
    fetch_function__SkillsetStatus__resources,  // fetch(index, &value) function pointer
    assign_function__SkillsetStatus__resources,  // assign(index, value) function pointer
    resize_function__SkillsetStatus__resources  // resize(index) function pointer
  },
  {
    "skill_detect_target",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isae_robot_skillset_interfaces::msg::SkillsetStatus, skill_detect_target),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "skill_move_to",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<isae_robot_skillset_interfaces::msg::SkillMoveToStatus>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isae_robot_skillset_interfaces::msg::SkillsetStatus, skill_move_to),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "skill_take_picture",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<isae_robot_skillset_interfaces::msg::SkillTakePictureStatus>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isae_robot_skillset_interfaces::msg::SkillsetStatus, skill_take_picture),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "skill_track_target",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<isae_robot_skillset_interfaces::msg::SkillTrackTargetStatus>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isae_robot_skillset_interfaces::msg::SkillsetStatus, skill_track_target),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isae_robot_skillset_interfaces::msg::SkillsetStatus, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SkillsetStatus_message_members = {
  "isae_robot_skillset_interfaces::msg",  // message namespace
  "SkillsetStatus",  // message name
  7,  // number of fields
  sizeof(isae_robot_skillset_interfaces::msg::SkillsetStatus),
  SkillsetStatus_message_member_array,  // message members
  SkillsetStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  SkillsetStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SkillsetStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SkillsetStatus_message_members,
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
get_message_type_support_handle<isae_robot_skillset_interfaces::msg::SkillsetStatus>()
{
  return &::isae_robot_skillset_interfaces::msg::rosidl_typesupport_introspection_cpp::SkillsetStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, isae_robot_skillset_interfaces, msg, SkillsetStatus)() {
  return &::isae_robot_skillset_interfaces::msg::rosidl_typesupport_introspection_cpp::SkillsetStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
