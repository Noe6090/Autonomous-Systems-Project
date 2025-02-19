// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from isae_robot_skillset_interfaces:msg/SkillMoveToStatus.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_MOVE_TO_STATUS__BUILDER_HPP_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_MOVE_TO_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "isae_robot_skillset_interfaces/msg/detail/skill_move_to_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace isae_robot_skillset_interfaces
{

namespace msg
{

namespace builder
{

class Init_SkillMoveToStatus_input
{
public:
  explicit Init_SkillMoveToStatus_input(::isae_robot_skillset_interfaces::msg::SkillMoveToStatus & msg)
  : msg_(msg)
  {}
  ::isae_robot_skillset_interfaces::msg::SkillMoveToStatus input(::isae_robot_skillset_interfaces::msg::SkillMoveToStatus::_input_type arg)
  {
    msg_.input = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillMoveToStatus msg_;
};

class Init_SkillMoveToStatus_state
{
public:
  explicit Init_SkillMoveToStatus_state(::isae_robot_skillset_interfaces::msg::SkillMoveToStatus & msg)
  : msg_(msg)
  {}
  Init_SkillMoveToStatus_input state(::isae_robot_skillset_interfaces::msg::SkillMoveToStatus::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_SkillMoveToStatus_input(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillMoveToStatus msg_;
};

class Init_SkillMoveToStatus_id
{
public:
  explicit Init_SkillMoveToStatus_id(::isae_robot_skillset_interfaces::msg::SkillMoveToStatus & msg)
  : msg_(msg)
  {}
  Init_SkillMoveToStatus_state id(::isae_robot_skillset_interfaces::msg::SkillMoveToStatus::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SkillMoveToStatus_state(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillMoveToStatus msg_;
};

class Init_SkillMoveToStatus_name
{
public:
  Init_SkillMoveToStatus_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SkillMoveToStatus_id name(::isae_robot_skillset_interfaces::msg::SkillMoveToStatus::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SkillMoveToStatus_id(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillMoveToStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::isae_robot_skillset_interfaces::msg::SkillMoveToStatus>()
{
  return isae_robot_skillset_interfaces::msg::builder::Init_SkillMoveToStatus_name();
}

}  // namespace isae_robot_skillset_interfaces

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_MOVE_TO_STATUS__BUILDER_HPP_
