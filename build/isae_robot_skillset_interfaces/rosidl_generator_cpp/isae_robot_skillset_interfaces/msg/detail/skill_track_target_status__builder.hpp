// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from isae_robot_skillset_interfaces:msg/SkillTrackTargetStatus.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TRACK_TARGET_STATUS__BUILDER_HPP_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TRACK_TARGET_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "isae_robot_skillset_interfaces/msg/detail/skill_track_target_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace isae_robot_skillset_interfaces
{

namespace msg
{

namespace builder
{

class Init_SkillTrackTargetStatus_input
{
public:
  explicit Init_SkillTrackTargetStatus_input(::isae_robot_skillset_interfaces::msg::SkillTrackTargetStatus & msg)
  : msg_(msg)
  {}
  ::isae_robot_skillset_interfaces::msg::SkillTrackTargetStatus input(::isae_robot_skillset_interfaces::msg::SkillTrackTargetStatus::_input_type arg)
  {
    msg_.input = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillTrackTargetStatus msg_;
};

class Init_SkillTrackTargetStatus_state
{
public:
  explicit Init_SkillTrackTargetStatus_state(::isae_robot_skillset_interfaces::msg::SkillTrackTargetStatus & msg)
  : msg_(msg)
  {}
  Init_SkillTrackTargetStatus_input state(::isae_robot_skillset_interfaces::msg::SkillTrackTargetStatus::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_SkillTrackTargetStatus_input(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillTrackTargetStatus msg_;
};

class Init_SkillTrackTargetStatus_id
{
public:
  explicit Init_SkillTrackTargetStatus_id(::isae_robot_skillset_interfaces::msg::SkillTrackTargetStatus & msg)
  : msg_(msg)
  {}
  Init_SkillTrackTargetStatus_state id(::isae_robot_skillset_interfaces::msg::SkillTrackTargetStatus::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SkillTrackTargetStatus_state(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillTrackTargetStatus msg_;
};

class Init_SkillTrackTargetStatus_name
{
public:
  Init_SkillTrackTargetStatus_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SkillTrackTargetStatus_id name(::isae_robot_skillset_interfaces::msg::SkillTrackTargetStatus::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SkillTrackTargetStatus_id(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillTrackTargetStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::isae_robot_skillset_interfaces::msg::SkillTrackTargetStatus>()
{
  return isae_robot_skillset_interfaces::msg::builder::Init_SkillTrackTargetStatus_name();
}

}  // namespace isae_robot_skillset_interfaces

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TRACK_TARGET_STATUS__BUILDER_HPP_
