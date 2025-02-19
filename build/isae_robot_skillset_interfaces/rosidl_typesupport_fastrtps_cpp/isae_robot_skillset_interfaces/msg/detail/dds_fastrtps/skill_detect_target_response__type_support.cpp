// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from isae_robot_skillset_interfaces:msg/SkillDetectTargetResponse.idl
// generated code does not contain a copyright notice
#include "isae_robot_skillset_interfaces/msg/detail/skill_detect_target_response__rosidl_typesupport_fastrtps_cpp.hpp"
#include "isae_robot_skillset_interfaces/msg/detail/skill_detect_target_response__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace isae_robot_skillset_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const isae_robot_skillset_interfaces::msg::SkillDetectTargetOutput &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  isae_robot_skillset_interfaces::msg::SkillDetectTargetOutput &);
size_t get_serialized_size(
  const isae_robot_skillset_interfaces::msg::SkillDetectTargetOutput &,
  size_t current_alignment);
size_t
max_serialized_size_SkillDetectTargetOutput(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace isae_robot_skillset_interfaces


namespace isae_robot_skillset_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_isae_robot_skillset_interfaces
cdr_serialize(
  const isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: id
  cdr << ros_message.id;
  // Member: result
  cdr << ros_message.result;
  // Member: name
  cdr << ros_message.name;
  // Member: effect
  cdr << (ros_message.effect ? true : false);
  // Member: postcondition
  cdr << (ros_message.postcondition ? true : false);
  // Member: output
  isae_robot_skillset_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.output,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_isae_robot_skillset_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse & ros_message)
{
  // Member: id
  cdr >> ros_message.id;

  // Member: result
  cdr >> ros_message.result;

  // Member: name
  cdr >> ros_message.name;

  // Member: effect
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.effect = tmp ? true : false;
  }

  // Member: postcondition
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.postcondition = tmp ? true : false;
  }

  // Member: output
  isae_robot_skillset_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.output);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_isae_robot_skillset_interfaces
get_serialized_size(
  const isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.id.size() + 1);
  // Member: result
  {
    size_t item_size = sizeof(ros_message.result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.name.size() + 1);
  // Member: effect
  {
    size_t item_size = sizeof(ros_message.effect);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: postcondition
  {
    size_t item_size = sizeof(ros_message.postcondition);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: output

  current_alignment +=
    isae_robot_skillset_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.output, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_isae_robot_skillset_interfaces
max_serialized_size_SkillDetectTargetResponse(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: result
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: effect
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: postcondition
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: output
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        isae_robot_skillset_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_SkillDetectTargetOutput(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse;
    is_plain =
      (
      offsetof(DataType, output) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SkillDetectTargetResponse__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SkillDetectTargetResponse__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SkillDetectTargetResponse__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SkillDetectTargetResponse__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SkillDetectTargetResponse(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SkillDetectTargetResponse__callbacks = {
  "isae_robot_skillset_interfaces::msg",
  "SkillDetectTargetResponse",
  _SkillDetectTargetResponse__cdr_serialize,
  _SkillDetectTargetResponse__cdr_deserialize,
  _SkillDetectTargetResponse__get_serialized_size,
  _SkillDetectTargetResponse__max_serialized_size
};

static rosidl_message_type_support_t _SkillDetectTargetResponse__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SkillDetectTargetResponse__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace isae_robot_skillset_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_isae_robot_skillset_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse>()
{
  return &isae_robot_skillset_interfaces::msg::typesupport_fastrtps_cpp::_SkillDetectTargetResponse__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, isae_robot_skillset_interfaces, msg, SkillDetectTargetResponse)() {
  return &isae_robot_skillset_interfaces::msg::typesupport_fastrtps_cpp::_SkillDetectTargetResponse__handle;
}

#ifdef __cplusplus
}
#endif
