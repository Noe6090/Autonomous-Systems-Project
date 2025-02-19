// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from isae_robot_skillset_interfaces:msg/SkillTrackTargetResponse.idl
// generated code does not contain a copyright notice
#include "isae_robot_skillset_interfaces/msg/detail/skill_track_target_response__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "isae_robot_skillset_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "isae_robot_skillset_interfaces/msg/detail/skill_track_target_response__struct.h"
#include "isae_robot_skillset_interfaces/msg/detail/skill_track_target_response__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // id, name
#include "rosidl_runtime_c/string_functions.h"  // id, name

// forward declare type support functions


using _SkillTrackTargetResponse__ros_msg_type = isae_robot_skillset_interfaces__msg__SkillTrackTargetResponse;

static bool _SkillTrackTargetResponse__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SkillTrackTargetResponse__ros_msg_type * ros_message = static_cast<const _SkillTrackTargetResponse__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    const rosidl_runtime_c__String * str = &ros_message->id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: result
  {
    cdr << ros_message->result;
  }

  // Field name: is_idle
  {
    cdr << (ros_message->is_idle ? true : false);
  }

  // Field name: is_battery_high
  {
    cdr << (ros_message->is_battery_high ? true : false);
  }

  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: effect
  {
    cdr << (ros_message->effect ? true : false);
  }

  // Field name: postcondition
  {
    cdr << (ros_message->postcondition ? true : false);
  }

  return true;
}

static bool _SkillTrackTargetResponse__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SkillTrackTargetResponse__ros_msg_type * ros_message = static_cast<_SkillTrackTargetResponse__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->id.data) {
      rosidl_runtime_c__String__init(&ros_message->id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'id'\n");
      return false;
    }
  }

  // Field name: result
  {
    cdr >> ros_message->result;
  }

  // Field name: is_idle
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_idle = tmp ? true : false;
  }

  // Field name: is_battery_high
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_battery_high = tmp ? true : false;
  }

  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }

  // Field name: effect
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->effect = tmp ? true : false;
  }

  // Field name: postcondition
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->postcondition = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_isae_robot_skillset_interfaces
size_t get_serialized_size_isae_robot_skillset_interfaces__msg__SkillTrackTargetResponse(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SkillTrackTargetResponse__ros_msg_type * ros_message = static_cast<const _SkillTrackTargetResponse__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->id.size + 1);
  // field.name result
  {
    size_t item_size = sizeof(ros_message->result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_idle
  {
    size_t item_size = sizeof(ros_message->is_idle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_battery_high
  {
    size_t item_size = sizeof(ros_message->is_battery_high);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);
  // field.name effect
  {
    size_t item_size = sizeof(ros_message->effect);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name postcondition
  {
    size_t item_size = sizeof(ros_message->postcondition);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SkillTrackTargetResponse__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_isae_robot_skillset_interfaces__msg__SkillTrackTargetResponse(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_isae_robot_skillset_interfaces
size_t max_serialized_size_isae_robot_skillset_interfaces__msg__SkillTrackTargetResponse(
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

  // member: id
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
  // member: result
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_idle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_battery_high
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: name
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
  // member: effect
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: postcondition
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = isae_robot_skillset_interfaces__msg__SkillTrackTargetResponse;
    is_plain =
      (
      offsetof(DataType, postcondition) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SkillTrackTargetResponse__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_isae_robot_skillset_interfaces__msg__SkillTrackTargetResponse(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SkillTrackTargetResponse = {
  "isae_robot_skillset_interfaces::msg",
  "SkillTrackTargetResponse",
  _SkillTrackTargetResponse__cdr_serialize,
  _SkillTrackTargetResponse__cdr_deserialize,
  _SkillTrackTargetResponse__get_serialized_size,
  _SkillTrackTargetResponse__max_serialized_size
};

static rosidl_message_type_support_t _SkillTrackTargetResponse__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SkillTrackTargetResponse,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, isae_robot_skillset_interfaces, msg, SkillTrackTargetResponse)() {
  return &_SkillTrackTargetResponse__type_support;
}

#if defined(__cplusplus)
}
#endif
