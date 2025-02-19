// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from isae_robot_skillset_interfaces:msg/SkillTrackTargetProgress.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TRACK_TARGET_PROGRESS__BUILDER_HPP_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TRACK_TARGET_PROGRESS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "isae_robot_skillset_interfaces/msg/detail/skill_track_target_progress__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace isae_robot_skillset_interfaces
{

namespace msg
{

namespace builder
{

class Init_SkillTrackTargetProgress_detection
{
public:
  explicit Init_SkillTrackTargetProgress_detection(::isae_robot_skillset_interfaces::msg::SkillTrackTargetProgress & msg)
  : msg_(msg)
  {}
  ::isae_robot_skillset_interfaces::msg::SkillTrackTargetProgress detection(::isae_robot_skillset_interfaces::msg::SkillTrackTargetProgress::_detection_type arg)
  {
    msg_.detection = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillTrackTargetProgress msg_;
};

class Init_SkillTrackTargetProgress_id
{
public:
  Init_SkillTrackTargetProgress_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SkillTrackTargetProgress_detection id(::isae_robot_skillset_interfaces::msg::SkillTrackTargetProgress::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SkillTrackTargetProgress_detection(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillTrackTargetProgress msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::isae_robot_skillset_interfaces::msg::SkillTrackTargetProgress>()
{
  return isae_robot_skillset_interfaces::msg::builder::Init_SkillTrackTargetProgress_id();
}

}  // namespace isae_robot_skillset_interfaces

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TRACK_TARGET_PROGRESS__BUILDER_HPP_
