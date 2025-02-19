// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from isae_robot_skillset_interfaces:msg/SkillDetectTargetRequest.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_DETECT_TARGET_REQUEST__BUILDER_HPP_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_DETECT_TARGET_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "isae_robot_skillset_interfaces/msg/detail/skill_detect_target_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace isae_robot_skillset_interfaces
{

namespace msg
{

namespace builder
{

class Init_SkillDetectTargetRequest_input
{
public:
  explicit Init_SkillDetectTargetRequest_input(::isae_robot_skillset_interfaces::msg::SkillDetectTargetRequest & msg)
  : msg_(msg)
  {}
  ::isae_robot_skillset_interfaces::msg::SkillDetectTargetRequest input(::isae_robot_skillset_interfaces::msg::SkillDetectTargetRequest::_input_type arg)
  {
    msg_.input = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillDetectTargetRequest msg_;
};

class Init_SkillDetectTargetRequest_id
{
public:
  Init_SkillDetectTargetRequest_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SkillDetectTargetRequest_input id(::isae_robot_skillset_interfaces::msg::SkillDetectTargetRequest::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SkillDetectTargetRequest_input(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillDetectTargetRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::isae_robot_skillset_interfaces::msg::SkillDetectTargetRequest>()
{
  return isae_robot_skillset_interfaces::msg::builder::Init_SkillDetectTargetRequest_id();
}

}  // namespace isae_robot_skillset_interfaces

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_DETECT_TARGET_REQUEST__BUILDER_HPP_
