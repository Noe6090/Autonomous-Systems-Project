// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from isae_robot_skillset_interfaces:msg/SkillDetectTargetStatus.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_DETECT_TARGET_STATUS__BUILDER_HPP_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_DETECT_TARGET_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "isae_robot_skillset_interfaces/msg/detail/skill_detect_target_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace isae_robot_skillset_interfaces
{

namespace msg
{

namespace builder
{

class Init_SkillDetectTargetStatus_input
{
public:
  explicit Init_SkillDetectTargetStatus_input(::isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus & msg)
  : msg_(msg)
  {}
  ::isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus input(::isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus::_input_type arg)
  {
    msg_.input = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus msg_;
};

class Init_SkillDetectTargetStatus_state
{
public:
  explicit Init_SkillDetectTargetStatus_state(::isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus & msg)
  : msg_(msg)
  {}
  Init_SkillDetectTargetStatus_input state(::isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_SkillDetectTargetStatus_input(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus msg_;
};

class Init_SkillDetectTargetStatus_id
{
public:
  explicit Init_SkillDetectTargetStatus_id(::isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus & msg)
  : msg_(msg)
  {}
  Init_SkillDetectTargetStatus_state id(::isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SkillDetectTargetStatus_state(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus msg_;
};

class Init_SkillDetectTargetStatus_name
{
public:
  Init_SkillDetectTargetStatus_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SkillDetectTargetStatus_id name(::isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SkillDetectTargetStatus_id(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus>()
{
  return isae_robot_skillset_interfaces::msg::builder::Init_SkillDetectTargetStatus_name();
}

}  // namespace isae_robot_skillset_interfaces

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_DETECT_TARGET_STATUS__BUILDER_HPP_
