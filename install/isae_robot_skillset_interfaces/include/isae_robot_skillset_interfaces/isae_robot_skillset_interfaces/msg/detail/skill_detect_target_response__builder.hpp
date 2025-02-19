// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from isae_robot_skillset_interfaces:msg/SkillDetectTargetResponse.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_DETECT_TARGET_RESPONSE__BUILDER_HPP_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_DETECT_TARGET_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "isae_robot_skillset_interfaces/msg/detail/skill_detect_target_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace isae_robot_skillset_interfaces
{

namespace msg
{

namespace builder
{

class Init_SkillDetectTargetResponse_output
{
public:
  explicit Init_SkillDetectTargetResponse_output(::isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse & msg)
  : msg_(msg)
  {}
  ::isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse output(::isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse::_output_type arg)
  {
    msg_.output = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse msg_;
};

class Init_SkillDetectTargetResponse_postcondition
{
public:
  explicit Init_SkillDetectTargetResponse_postcondition(::isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse & msg)
  : msg_(msg)
  {}
  Init_SkillDetectTargetResponse_output postcondition(::isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse::_postcondition_type arg)
  {
    msg_.postcondition = std::move(arg);
    return Init_SkillDetectTargetResponse_output(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse msg_;
};

class Init_SkillDetectTargetResponse_effect
{
public:
  explicit Init_SkillDetectTargetResponse_effect(::isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse & msg)
  : msg_(msg)
  {}
  Init_SkillDetectTargetResponse_postcondition effect(::isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse::_effect_type arg)
  {
    msg_.effect = std::move(arg);
    return Init_SkillDetectTargetResponse_postcondition(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse msg_;
};

class Init_SkillDetectTargetResponse_name
{
public:
  explicit Init_SkillDetectTargetResponse_name(::isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse & msg)
  : msg_(msg)
  {}
  Init_SkillDetectTargetResponse_effect name(::isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SkillDetectTargetResponse_effect(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse msg_;
};

class Init_SkillDetectTargetResponse_result
{
public:
  explicit Init_SkillDetectTargetResponse_result(::isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse & msg)
  : msg_(msg)
  {}
  Init_SkillDetectTargetResponse_name result(::isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_SkillDetectTargetResponse_name(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse msg_;
};

class Init_SkillDetectTargetResponse_id
{
public:
  Init_SkillDetectTargetResponse_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SkillDetectTargetResponse_result id(::isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SkillDetectTargetResponse_result(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse>()
{
  return isae_robot_skillset_interfaces::msg::builder::Init_SkillDetectTargetResponse_id();
}

}  // namespace isae_robot_skillset_interfaces

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_DETECT_TARGET_RESPONSE__BUILDER_HPP_
