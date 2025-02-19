// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from isae_robot_skillset_interfaces:msg/SkillTrackTargetResponse.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TRACK_TARGET_RESPONSE__TRAITS_HPP_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TRACK_TARGET_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "isae_robot_skillset_interfaces/msg/detail/skill_track_target_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace isae_robot_skillset_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SkillTrackTargetResponse & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << ", ";
  }

  // member: is_idle
  {
    out << "is_idle: ";
    rosidl_generator_traits::value_to_yaml(msg.is_idle, out);
    out << ", ";
  }

  // member: is_battery_high
  {
    out << "is_battery_high: ";
    rosidl_generator_traits::value_to_yaml(msg.is_battery_high, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: effect
  {
    out << "effect: ";
    rosidl_generator_traits::value_to_yaml(msg.effect, out);
    out << ", ";
  }

  // member: postcondition
  {
    out << "postcondition: ";
    rosidl_generator_traits::value_to_yaml(msg.postcondition, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SkillTrackTargetResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }

  // member: is_idle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_idle: ";
    rosidl_generator_traits::value_to_yaml(msg.is_idle, out);
    out << "\n";
  }

  // member: is_battery_high
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_battery_high: ";
    rosidl_generator_traits::value_to_yaml(msg.is_battery_high, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: effect
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "effect: ";
    rosidl_generator_traits::value_to_yaml(msg.effect, out);
    out << "\n";
  }

  // member: postcondition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "postcondition: ";
    rosidl_generator_traits::value_to_yaml(msg.postcondition, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SkillTrackTargetResponse & msg, bool use_flow_style = false)
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
  const isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  isae_robot_skillset_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use isae_robot_skillset_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse & msg)
{
  return isae_robot_skillset_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse>()
{
  return "isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse";
}

template<>
inline const char * name<isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse>()
{
  return "isae_robot_skillset_interfaces/msg/SkillTrackTargetResponse";
}

template<>
struct has_fixed_size<isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TRACK_TARGET_RESPONSE__TRAITS_HPP_
