// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from isae_robot_skillset_interfaces:msg/SkillDetectTargetResponse.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_DETECT_TARGET_RESPONSE__TRAITS_HPP_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_DETECT_TARGET_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "isae_robot_skillset_interfaces/msg/detail/skill_detect_target_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'output'
#include "isae_robot_skillset_interfaces/msg/detail/skill_detect_target_output__traits.hpp"

namespace isae_robot_skillset_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SkillDetectTargetResponse & msg,
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
    out << ", ";
  }

  // member: output
  {
    out << "output: ";
    to_flow_style_yaml(msg.output, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SkillDetectTargetResponse & msg,
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

  // member: output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output:\n";
    to_block_style_yaml(msg.output, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SkillDetectTargetResponse & msg, bool use_flow_style = false)
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
  const isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  isae_robot_skillset_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use isae_robot_skillset_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse & msg)
{
  return isae_robot_skillset_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse>()
{
  return "isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse";
}

template<>
inline const char * name<isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse>()
{
  return "isae_robot_skillset_interfaces/msg/SkillDetectTargetResponse";
}

template<>
struct has_fixed_size<isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_DETECT_TARGET_RESPONSE__TRAITS_HPP_
