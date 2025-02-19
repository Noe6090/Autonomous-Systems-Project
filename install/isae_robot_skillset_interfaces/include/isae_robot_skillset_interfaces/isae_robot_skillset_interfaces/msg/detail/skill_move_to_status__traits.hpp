// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from isae_robot_skillset_interfaces:msg/SkillMoveToStatus.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_MOVE_TO_STATUS__TRAITS_HPP_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_MOVE_TO_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "isae_robot_skillset_interfaces/msg/detail/skill_move_to_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'input'
#include "isae_robot_skillset_interfaces/msg/detail/skill_move_to_input__traits.hpp"

namespace isae_robot_skillset_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SkillMoveToStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: input
  {
    out << "input: ";
    to_flow_style_yaml(msg.input, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SkillMoveToStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: input
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input:\n";
    to_block_style_yaml(msg.input, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SkillMoveToStatus & msg, bool use_flow_style = false)
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
  const isae_robot_skillset_interfaces::msg::SkillMoveToStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  isae_robot_skillset_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use isae_robot_skillset_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const isae_robot_skillset_interfaces::msg::SkillMoveToStatus & msg)
{
  return isae_robot_skillset_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<isae_robot_skillset_interfaces::msg::SkillMoveToStatus>()
{
  return "isae_robot_skillset_interfaces::msg::SkillMoveToStatus";
}

template<>
inline const char * name<isae_robot_skillset_interfaces::msg::SkillMoveToStatus>()
{
  return "isae_robot_skillset_interfaces/msg/SkillMoveToStatus";
}

template<>
struct has_fixed_size<isae_robot_skillset_interfaces::msg::SkillMoveToStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<isae_robot_skillset_interfaces::msg::SkillMoveToStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<isae_robot_skillset_interfaces::msg::SkillMoveToStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_MOVE_TO_STATUS__TRAITS_HPP_
