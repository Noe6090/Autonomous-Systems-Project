// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from isae_robot_skillset_interfaces:msg/SkillDetectTargetOutput.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_DETECT_TARGET_OUTPUT__BUILDER_HPP_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_DETECT_TARGET_OUTPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "isae_robot_skillset_interfaces/msg/detail/skill_detect_target_output__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace isae_robot_skillset_interfaces
{

namespace msg
{

namespace builder
{

class Init_SkillDetectTargetOutput_target
{
public:
  Init_SkillDetectTargetOutput_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::isae_robot_skillset_interfaces::msg::SkillDetectTargetOutput target(::isae_robot_skillset_interfaces::msg::SkillDetectTargetOutput::_target_type arg)
  {
    msg_.target = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillDetectTargetOutput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::isae_robot_skillset_interfaces::msg::SkillDetectTargetOutput>()
{
  return isae_robot_skillset_interfaces::msg::builder::Init_SkillDetectTargetOutput_target();
}

}  // namespace isae_robot_skillset_interfaces

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_DETECT_TARGET_OUTPUT__BUILDER_HPP_
