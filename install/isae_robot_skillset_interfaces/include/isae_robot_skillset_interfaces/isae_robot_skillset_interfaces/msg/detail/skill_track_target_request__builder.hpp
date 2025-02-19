// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from isae_robot_skillset_interfaces:msg/SkillTrackTargetRequest.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TRACK_TARGET_REQUEST__BUILDER_HPP_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TRACK_TARGET_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "isae_robot_skillset_interfaces/msg/detail/skill_track_target_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace isae_robot_skillset_interfaces
{

namespace msg
{

namespace builder
{

class Init_SkillTrackTargetRequest_input
{
public:
  explicit Init_SkillTrackTargetRequest_input(::isae_robot_skillset_interfaces::msg::SkillTrackTargetRequest & msg)
  : msg_(msg)
  {}
  ::isae_robot_skillset_interfaces::msg::SkillTrackTargetRequest input(::isae_robot_skillset_interfaces::msg::SkillTrackTargetRequest::_input_type arg)
  {
    msg_.input = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillTrackTargetRequest msg_;
};

class Init_SkillTrackTargetRequest_id
{
public:
  Init_SkillTrackTargetRequest_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SkillTrackTargetRequest_input id(::isae_robot_skillset_interfaces::msg::SkillTrackTargetRequest::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SkillTrackTargetRequest_input(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillTrackTargetRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::isae_robot_skillset_interfaces::msg::SkillTrackTargetRequest>()
{
  return isae_robot_skillset_interfaces::msg::builder::Init_SkillTrackTargetRequest_id();
}

}  // namespace isae_robot_skillset_interfaces

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TRACK_TARGET_REQUEST__BUILDER_HPP_
