// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from isae_robot_skillset_interfaces:msg/SkillTakePictureInput.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TAKE_PICTURE_INPUT__TRAITS_HPP_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TAKE_PICTURE_INPUT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "isae_robot_skillset_interfaces/msg/detail/skill_take_picture_input__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'object_name'
#include "std_msgs/msg/detail/string__traits.hpp"

namespace isae_robot_skillset_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SkillTakePictureInput & msg,
  std::ostream & out)
{
  out << "{";
  // member: object_name
  {
    out << "object_name: ";
    to_flow_style_yaml(msg.object_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SkillTakePictureInput & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: object_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_name:\n";
    to_block_style_yaml(msg.object_name, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SkillTakePictureInput & msg, bool use_flow_style = false)
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
  const isae_robot_skillset_interfaces::msg::SkillTakePictureInput & msg,
  std::ostream & out, size_t indentation = 0)
{
  isae_robot_skillset_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use isae_robot_skillset_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const isae_robot_skillset_interfaces::msg::SkillTakePictureInput & msg)
{
  return isae_robot_skillset_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<isae_robot_skillset_interfaces::msg::SkillTakePictureInput>()
{
  return "isae_robot_skillset_interfaces::msg::SkillTakePictureInput";
}

template<>
inline const char * name<isae_robot_skillset_interfaces::msg::SkillTakePictureInput>()
{
  return "isae_robot_skillset_interfaces/msg/SkillTakePictureInput";
}

template<>
struct has_fixed_size<isae_robot_skillset_interfaces::msg::SkillTakePictureInput>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<isae_robot_skillset_interfaces::msg::SkillTakePictureInput>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::String>::value> {};

template<>
struct is_message<isae_robot_skillset_interfaces::msg::SkillTakePictureInput>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TAKE_PICTURE_INPUT__TRAITS_HPP_
