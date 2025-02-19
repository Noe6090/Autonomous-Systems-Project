// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from isae_robot_skillset_interfaces:msg/SkillTrackTargetResponse.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TRACK_TARGET_RESPONSE__BUILDER_HPP_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TRACK_TARGET_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "isae_robot_skillset_interfaces/msg/detail/skill_track_target_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace isae_robot_skillset_interfaces
{

namespace msg
{

namespace builder
{

class Init_SkillTrackTargetResponse_postcondition
{
public:
  explicit Init_SkillTrackTargetResponse_postcondition(::isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse & msg)
  : msg_(msg)
  {}
  ::isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse postcondition(::isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse::_postcondition_type arg)
  {
    msg_.postcondition = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse msg_;
};

class Init_SkillTrackTargetResponse_effect
{
public:
  explicit Init_SkillTrackTargetResponse_effect(::isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse & msg)
  : msg_(msg)
  {}
  Init_SkillTrackTargetResponse_postcondition effect(::isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse::_effect_type arg)
  {
    msg_.effect = std::move(arg);
    return Init_SkillTrackTargetResponse_postcondition(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse msg_;
};

class Init_SkillTrackTargetResponse_name
{
public:
  explicit Init_SkillTrackTargetResponse_name(::isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse & msg)
  : msg_(msg)
  {}
  Init_SkillTrackTargetResponse_effect name(::isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SkillTrackTargetResponse_effect(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse msg_;
};

class Init_SkillTrackTargetResponse_is_battery_high
{
public:
  explicit Init_SkillTrackTargetResponse_is_battery_high(::isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse & msg)
  : msg_(msg)
  {}
  Init_SkillTrackTargetResponse_name is_battery_high(::isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse::_is_battery_high_type arg)
  {
    msg_.is_battery_high = std::move(arg);
    return Init_SkillTrackTargetResponse_name(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse msg_;
};

class Init_SkillTrackTargetResponse_is_idle
{
public:
  explicit Init_SkillTrackTargetResponse_is_idle(::isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse & msg)
  : msg_(msg)
  {}
  Init_SkillTrackTargetResponse_is_battery_high is_idle(::isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse::_is_idle_type arg)
  {
    msg_.is_idle = std::move(arg);
    return Init_SkillTrackTargetResponse_is_battery_high(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse msg_;
};

class Init_SkillTrackTargetResponse_result
{
public:
  explicit Init_SkillTrackTargetResponse_result(::isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse & msg)
  : msg_(msg)
  {}
  Init_SkillTrackTargetResponse_is_idle result(::isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_SkillTrackTargetResponse_is_idle(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse msg_;
};

class Init_SkillTrackTargetResponse_id
{
public:
  Init_SkillTrackTargetResponse_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SkillTrackTargetResponse_result id(::isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SkillTrackTargetResponse_result(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse>()
{
  return isae_robot_skillset_interfaces::msg::builder::Init_SkillTrackTargetResponse_id();
}

}  // namespace isae_robot_skillset_interfaces

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TRACK_TARGET_RESPONSE__BUILDER_HPP_
