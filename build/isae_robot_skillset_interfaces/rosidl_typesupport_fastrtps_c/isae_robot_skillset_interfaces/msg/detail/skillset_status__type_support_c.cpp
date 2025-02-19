// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from isae_robot_skillset_interfaces:msg/SkillsetStatus.idl
// generated code does not contain a copyright notice
#include "isae_robot_skillset_interfaces/msg/detail/skillset_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "isae_robot_skillset_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "isae_robot_skillset_interfaces/msg/detail/skillset_status__struct.h"
#include "isae_robot_skillset_interfaces/msg/detail/skillset_status__functions.h"
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

#include "builtin_interfaces/msg/detail/time__functions.h"  // stamp
#include "isae_robot_skillset_interfaces/msg/detail/resource_state__functions.h"  // resources
#include "isae_robot_skillset_interfaces/msg/detail/skill_detect_target_status__functions.h"  // skill_detect_target
#include "isae_robot_skillset_interfaces/msg/detail/skill_move_to_status__functions.h"  // skill_move_to
#include "isae_robot_skillset_interfaces/msg/detail/skill_take_picture_status__functions.h"  // skill_take_picture
#include "isae_robot_skillset_interfaces/msg/detail/skill_track_target_status__functions.h"  // skill_track_target
#include "rosidl_runtime_c/string.h"  // info
#include "rosidl_runtime_c/string_functions.h"  // info

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_isae_robot_skillset_interfaces
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_isae_robot_skillset_interfaces
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_isae_robot_skillset_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();
size_t get_serialized_size_isae_robot_skillset_interfaces__msg__ResourceState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_isae_robot_skillset_interfaces__msg__ResourceState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, isae_robot_skillset_interfaces, msg, ResourceState)();
size_t get_serialized_size_isae_robot_skillset_interfaces__msg__SkillDetectTargetStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_isae_robot_skillset_interfaces__msg__SkillDetectTargetStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, isae_robot_skillset_interfaces, msg, SkillDetectTargetStatus)();
size_t get_serialized_size_isae_robot_skillset_interfaces__msg__SkillMoveToStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_isae_robot_skillset_interfaces__msg__SkillMoveToStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, isae_robot_skillset_interfaces, msg, SkillMoveToStatus)();
size_t get_serialized_size_isae_robot_skillset_interfaces__msg__SkillTakePictureStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_isae_robot_skillset_interfaces__msg__SkillTakePictureStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, isae_robot_skillset_interfaces, msg, SkillTakePictureStatus)();
size_t get_serialized_size_isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, isae_robot_skillset_interfaces, msg, SkillTrackTargetStatus)();


using _SkillsetStatus__ros_msg_type = isae_robot_skillset_interfaces__msg__SkillsetStatus;

static bool _SkillsetStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SkillsetStatus__ros_msg_type * ros_message = static_cast<const _SkillsetStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->stamp, cdr))
    {
      return false;
    }
  }

  // Field name: resources
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, isae_robot_skillset_interfaces, msg, ResourceState
      )()->data);
    size_t size = ros_message->resources.size;
    auto array_ptr = ros_message->resources.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: skill_detect_target
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, isae_robot_skillset_interfaces, msg, SkillDetectTargetStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->skill_detect_target, cdr))
    {
      return false;
    }
  }

  // Field name: skill_move_to
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, isae_robot_skillset_interfaces, msg, SkillMoveToStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->skill_move_to, cdr))
    {
      return false;
    }
  }

  // Field name: skill_take_picture
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, isae_robot_skillset_interfaces, msg, SkillTakePictureStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->skill_take_picture, cdr))
    {
      return false;
    }
  }

  // Field name: skill_track_target
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, isae_robot_skillset_interfaces, msg, SkillTrackTargetStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->skill_track_target, cdr))
    {
      return false;
    }
  }

  // Field name: info
  {
    const rosidl_runtime_c__String * str = &ros_message->info;
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

  return true;
}

static bool _SkillsetStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SkillsetStatus__ros_msg_type * ros_message = static_cast<_SkillsetStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->stamp))
    {
      return false;
    }
  }

  // Field name: resources
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, isae_robot_skillset_interfaces, msg, ResourceState
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->resources.data) {
      isae_robot_skillset_interfaces__msg__ResourceState__Sequence__fini(&ros_message->resources);
    }
    if (!isae_robot_skillset_interfaces__msg__ResourceState__Sequence__init(&ros_message->resources, size)) {
      fprintf(stderr, "failed to create array for field 'resources'");
      return false;
    }
    auto array_ptr = ros_message->resources.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: skill_detect_target
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, isae_robot_skillset_interfaces, msg, SkillDetectTargetStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->skill_detect_target))
    {
      return false;
    }
  }

  // Field name: skill_move_to
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, isae_robot_skillset_interfaces, msg, SkillMoveToStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->skill_move_to))
    {
      return false;
    }
  }

  // Field name: skill_take_picture
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, isae_robot_skillset_interfaces, msg, SkillTakePictureStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->skill_take_picture))
    {
      return false;
    }
  }

  // Field name: skill_track_target
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, isae_robot_skillset_interfaces, msg, SkillTrackTargetStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->skill_track_target))
    {
      return false;
    }
  }

  // Field name: info
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->info.data) {
      rosidl_runtime_c__String__init(&ros_message->info);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->info,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'info'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_isae_robot_skillset_interfaces
size_t get_serialized_size_isae_robot_skillset_interfaces__msg__SkillsetStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SkillsetStatus__ros_msg_type * ros_message = static_cast<const _SkillsetStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);
  // field.name resources
  {
    size_t array_size = ros_message->resources.size;
    auto array_ptr = ros_message->resources.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_isae_robot_skillset_interfaces__msg__ResourceState(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name skill_detect_target

  current_alignment += get_serialized_size_isae_robot_skillset_interfaces__msg__SkillDetectTargetStatus(
    &(ros_message->skill_detect_target), current_alignment);
  // field.name skill_move_to

  current_alignment += get_serialized_size_isae_robot_skillset_interfaces__msg__SkillMoveToStatus(
    &(ros_message->skill_move_to), current_alignment);
  // field.name skill_take_picture

  current_alignment += get_serialized_size_isae_robot_skillset_interfaces__msg__SkillTakePictureStatus(
    &(ros_message->skill_take_picture), current_alignment);
  // field.name skill_track_target

  current_alignment += get_serialized_size_isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus(
    &(ros_message->skill_track_target), current_alignment);
  // field.name info
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->info.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SkillsetStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_isae_robot_skillset_interfaces__msg__SkillsetStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_isae_robot_skillset_interfaces
size_t max_serialized_size_isae_robot_skillset_interfaces__msg__SkillsetStatus(
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

  // member: stamp
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: resources
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_isae_robot_skillset_interfaces__msg__ResourceState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: skill_detect_target
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_isae_robot_skillset_interfaces__msg__SkillDetectTargetStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: skill_move_to
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_isae_robot_skillset_interfaces__msg__SkillMoveToStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: skill_take_picture
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_isae_robot_skillset_interfaces__msg__SkillTakePictureStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: skill_track_target
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_isae_robot_skillset_interfaces__msg__SkillTrackTargetStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: info
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = isae_robot_skillset_interfaces__msg__SkillsetStatus;
    is_plain =
      (
      offsetof(DataType, info) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SkillsetStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_isae_robot_skillset_interfaces__msg__SkillsetStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SkillsetStatus = {
  "isae_robot_skillset_interfaces::msg",
  "SkillsetStatus",
  _SkillsetStatus__cdr_serialize,
  _SkillsetStatus__cdr_deserialize,
  _SkillsetStatus__get_serialized_size,
  _SkillsetStatus__max_serialized_size
};

static rosidl_message_type_support_t _SkillsetStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SkillsetStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, isae_robot_skillset_interfaces, msg, SkillsetStatus)() {
  return &_SkillsetStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
