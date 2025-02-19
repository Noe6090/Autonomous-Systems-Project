// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from isae_robot_skillset_interfaces:msg/SkillMoveToProgress.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_MOVE_TO_PROGRESS__BUILDER_HPP_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_MOVE_TO_PROGRESS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "isae_robot_skillset_interfaces/msg/detail/skill_move_to_progress__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace isae_robot_skillset_interfaces
{

namespace msg
{

namespace builder
{

class Init_SkillMoveToProgress_distance
{
public:
  explicit Init_SkillMoveToProgress_distance(::isae_robot_skillset_interfaces::msg::SkillMoveToProgress & msg)
  : msg_(msg)
  {}
  ::isae_robot_skillset_interfaces::msg::SkillMoveToProgress distance(::isae_robot_skillset_interfaces::msg::SkillMoveToProgress::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillMoveToProgress msg_;
};

class Init_SkillMoveToProgress_id
{
public:
  Init_SkillMoveToProgress_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SkillMoveToProgress_distance id(::isae_robot_skillset_interfaces::msg::SkillMoveToProgress::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SkillMoveToProgress_distance(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillMoveToProgress msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::isae_robot_skillset_interfaces::msg::SkillMoveToProgress>()
{
  return isae_robot_skillset_interfaces::msg::builder::Init_SkillMoveToProgress_id();
}

}  // namespace isae_robot_skillset_interfaces

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_MOVE_TO_PROGRESS__BUILDER_HPP_
