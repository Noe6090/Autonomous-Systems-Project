// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from isae_robot_skillset_interfaces:msg/SkillsetStatus.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILLSET_STATUS__TRAITS_HPP_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILLSET_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "isae_robot_skillset_interfaces/msg/detail/skillset_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'resources'
#include "isae_robot_skillset_interfaces/msg/detail/resource_state__traits.hpp"
// Member 'skill_detect_target'
#include "isae_robot_skillset_interfaces/msg/detail/skill_detect_target_status__traits.hpp"
// Member 'skill_move_to'
#include "isae_robot_skillset_interfaces/msg/detail/skill_move_to_status__traits.hpp"
// Member 'skill_take_picture'
#include "isae_robot_skillset_interfaces/msg/detail/skill_take_picture_status__traits.hpp"
// Member 'skill_track_target'
#include "isae_robot_skillset_interfaces/msg/detail/skill_track_target_status__traits.hpp"

namespace isae_robot_skillset_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SkillsetStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: resources
  {
    if (msg.resources.size() == 0) {
      out << "resources: []";
    } else {
      out << "resources: [";
      size_t pending_items = msg.resources.size();
      for (auto item : msg.resources) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: skill_detect_target
  {
    out << "skill_detect_target: ";
    to_flow_style_yaml(msg.skill_detect_target, out);
    out << ", ";
  }

  // member: skill_move_to
  {
    out << "skill_move_to: ";
    to_flow_style_yaml(msg.skill_move_to, out);
    out << ", ";
  }

  // member: skill_take_picture
  {
    out << "skill_take_picture: ";
    to_flow_style_yaml(msg.skill_take_picture, out);
    out << ", ";
  }

  // member: skill_track_target
  {
    out << "skill_track_target: ";
    to_flow_style_yaml(msg.skill_track_target, out);
    out << ", ";
  }

  // member: info
  {
    out << "info: ";
    rosidl_generator_traits::value_to_yaml(msg.info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SkillsetStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: resources
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.resources.size() == 0) {
      out << "resources: []\n";
    } else {
      out << "resources:\n";
      for (auto item : msg.resources) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: skill_detect_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "skill_detect_target:\n";
    to_block_style_yaml(msg.skill_detect_target, out, indentation + 2);
  }

  // member: skill_move_to
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "skill_move_to:\n";
    to_block_style_yaml(msg.skill_move_to, out, indentation + 2);
  }

  // member: skill_take_picture
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "skill_take_picture:\n";
    to_block_style_yaml(msg.skill_take_picture, out, indentation + 2);
  }

  // member: skill_track_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "skill_track_target:\n";
    to_block_style_yaml(msg.skill_track_target, out, indentation + 2);
  }

  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info: ";
    rosidl_generator_traits::value_to_yaml(msg.info, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SkillsetStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace isae_robot_skillset_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use isae_robot_skillset_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const isae_robot_skillset_interfaces::msg::SkillsetStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  isae_robot_skillset_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use isae_robot_skillset_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const isae_robot_skillset_interfaces::msg::SkillsetStatus & msg)
{
  return isae_robot_skillset_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<isae_robot_skillset_interfaces::msg::SkillsetStatus>()
{
  return "isae_robot_skillset_interfaces::msg::SkillsetStatus";
}

template<>
inline const char * name<isae_robot_skillset_interfaces::msg::SkillsetStatus>()
{
  return "isae_robot_skillset_interfaces/msg/SkillsetStatus";
}

template<>
struct has_fixed_size<isae_robot_skillset_interfaces::msg::SkillsetStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<isae_robot_skillset_interfaces::msg::SkillsetStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<isae_robot_skillset_interfaces::msg::SkillsetStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILLSET_STATUS__TRAITS_HPP_
