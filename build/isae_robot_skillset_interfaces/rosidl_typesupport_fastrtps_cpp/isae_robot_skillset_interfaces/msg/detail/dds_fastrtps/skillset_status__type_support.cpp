// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from isae_robot_skillset_interfaces:msg/SkillsetStatus.idl
// generated code does not contain a copyright notice
#include "isae_robot_skillset_interfaces/msg/detail/skillset_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "isae_robot_skillset_interfaces/msg/detail/skillset_status__struct.hpp"

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
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Time &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces

namespace isae_robot_skillset_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const isae_robot_skillset_interfaces::msg::ResourceState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  isae_robot_skillset_interfaces::msg::ResourceState &);
size_t get_serialized_size(
  const isae_robot_skillset_interfaces::msg::ResourceState &,
  size_t current_alignment);
size_t
max_serialized_size_ResourceState(
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
bool cdr_serialize(
  const isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus &);
size_t get_serialized_size(
  const isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus &,
  size_t current_alignment);
size_t
max_serialized_size_SkillDetectTargetStatus(
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
bool cdr_serialize(
  const isae_robot_skillset_interfaces::msg::SkillMoveToStatus &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  isae_robot_skillset_interfaces::msg::SkillMoveToStatus &);
size_t get_serialized_size(
  const isae_robot_skillset_interfaces::msg::SkillMoveToStatus &,
  size_t current_alignment);
size_t
max_serialized_size_SkillMoveToStatus(
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
bool cdr_serialize(
  const isae_robot_skillset_interfaces::msg::SkillTakePictureStatus &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  isae_robot_skillset_interfaces::msg::SkillTakePictureStatus &);
size_t get_serialized_size(
  const isae_robot_skillset_interfaces::msg::SkillTakePictureStatus &,
  size_t current_alignment);
size_t
max_serialized_size_SkillTakePictureStatus(
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
bool cdr_serialize(
  const isae_robot_skillset_interfaces::msg::SkillTrackTargetStatus &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  isae_robot_skillset_interfaces::msg::SkillTrackTargetStatus &);
size_t get_serialized_size(
  const isae_robot_skillset_interfaces::msg::SkillTrackTargetStatus &,
  size_t current_alignment);
size_t
max_serialized_size_SkillTrackTargetStatus(
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
  const isae_robot_skillset_interfaces::msg::SkillsetStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);
  // Member: resources
  {
    size_t size = ros_message.resources.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      isae_robot_skillset_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.resources[i],
        cdr);
    }
  }
  // Member: skill_detect_target
  isae_robot_skillset_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.skill_detect_target,
    cdr);
  // Member: skill_move_to
  isae_robot_skillset_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.skill_move_to,
    cdr);
  // Member: skill_take_picture
  isae_robot_skillset_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.skill_take_picture,
    cdr);
  // Member: skill_track_target
  isae_robot_skillset_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.skill_track_target,
    cdr);
  // Member: info
  cdr << ros_message.info;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_isae_robot_skillset_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  isae_robot_skillset_interfaces::msg::SkillsetStatus & ros_message)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  // Member: resources
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.resources.resize(size);
    for (size_t i = 0; i < size; i++) {
      isae_robot_skillset_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.resources[i]);
    }
  }

  // Member: skill_detect_target
  isae_robot_skillset_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.skill_detect_target);

  // Member: skill_move_to
  isae_robot_skillset_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.skill_move_to);

  // Member: skill_take_picture
  isae_robot_skillset_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.skill_take_picture);

  // Member: skill_track_target
  isae_robot_skillset_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.skill_track_target);

  // Member: info
  cdr >> ros_message.info;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_isae_robot_skillset_interfaces
get_serialized_size(
  const isae_robot_skillset_interfaces::msg::SkillsetStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: stamp

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.stamp, current_alignment);
  // Member: resources
  {
    size_t array_size = ros_message.resources.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        isae_robot_skillset_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.resources[index], current_alignment);
    }
  }
  // Member: skill_detect_target

  current_alignment +=
    isae_robot_skillset_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.skill_detect_target, current_alignment);
  // Member: skill_move_to

  current_alignment +=
    isae_robot_skillset_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.skill_move_to, current_alignment);
  // Member: skill_take_picture

  current_alignment +=
    isae_robot_skillset_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.skill_take_picture, current_alignment);
  // Member: skill_track_target

  current_alignment +=
    isae_robot_skillset_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.skill_track_target, current_alignment);
  // Member: info
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.info.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_isae_robot_skillset_interfaces
max_serialized_size_SkillsetStatus(
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


  // Member: stamp
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: resources
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
      size_t inner_size =
        isae_robot_skillset_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_ResourceState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: skill_detect_target
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        isae_robot_skillset_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_SkillDetectTargetStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: skill_move_to
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        isae_robot_skillset_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_SkillMoveToStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: skill_take_picture
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        isae_robot_skillset_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_SkillTakePictureStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: skill_track_target
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        isae_robot_skillset_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_SkillTrackTargetStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: info
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
    using DataType = isae_robot_skillset_interfaces::msg::SkillsetStatus;
    is_plain =
      (
      offsetof(DataType, info) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SkillsetStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const isae_robot_skillset_interfaces::msg::SkillsetStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SkillsetStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<isae_robot_skillset_interfaces::msg::SkillsetStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SkillsetStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const isae_robot_skillset_interfaces::msg::SkillsetStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SkillsetStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SkillsetStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SkillsetStatus__callbacks = {
  "isae_robot_skillset_interfaces::msg",
  "SkillsetStatus",
  _SkillsetStatus__cdr_serialize,
  _SkillsetStatus__cdr_deserialize,
  _SkillsetStatus__get_serialized_size,
  _SkillsetStatus__max_serialized_size
};

static rosidl_message_type_support_t _SkillsetStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SkillsetStatus__callbacks,
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
get_message_type_support_handle<isae_robot_skillset_interfaces::msg::SkillsetStatus>()
{
  return &isae_robot_skillset_interfaces::msg::typesupport_fastrtps_cpp::_SkillsetStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, isae_robot_skillset_interfaces, msg, SkillsetStatus)() {
  return &isae_robot_skillset_interfaces::msg::typesupport_fastrtps_cpp::_SkillsetStatus__handle;
}

#ifdef __cplusplus
}
#endif
