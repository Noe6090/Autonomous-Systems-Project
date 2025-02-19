// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from isae_robot_skillset_interfaces:msg/DataPose.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__DATA_POSE__TRAITS_HPP_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__DATA_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "isae_robot_skillset_interfaces/msg/detail/data_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'value'
#include "geometry_msgs/msg/detail/pose2_d__traits.hpp"

namespace isae_robot_skillset_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const DataPose & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    to_flow_style_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DataPose & msg,
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

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value:\n";
    to_block_style_yaml(msg.value, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DataPose & msg, bool use_flow_style = false)
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
  const isae_robot_skillset_interfaces::msg::DataPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  isae_robot_skillset_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use isae_robot_skillset_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const isae_robot_skillset_interfaces::msg::DataPose & msg)
{
  return isae_robot_skillset_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<isae_robot_skillset_interfaces::msg::DataPose>()
{
  return "isae_robot_skillset_interfaces::msg::DataPose";
}

template<>
inline const char * name<isae_robot_skillset_interfaces::msg::DataPose>()
{
  return "isae_robot_skillset_interfaces/msg/DataPose";
}

template<>
struct has_fixed_size<isae_robot_skillset_interfaces::msg::DataPose>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<geometry_msgs::msg::Pose2D>::value> {};

template<>
struct has_bounded_size<isae_robot_skillset_interfaces::msg::DataPose>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<geometry_msgs::msg::Pose2D>::value> {};

template<>
struct is_message<isae_robot_skillset_interfaces::msg::DataPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__DATA_POSE__TRAITS_HPP_
