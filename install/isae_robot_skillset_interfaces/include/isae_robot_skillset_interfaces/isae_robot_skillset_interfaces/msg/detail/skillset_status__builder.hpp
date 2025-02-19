// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from isae_robot_skillset_interfaces:msg/SkillsetStatus.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILLSET_STATUS__BUILDER_HPP_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILLSET_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "isae_robot_skillset_interfaces/msg/detail/skillset_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace isae_robot_skillset_interfaces
{

namespace msg
{

namespace builder
{

class Init_SkillsetStatus_info
{
public:
  explicit Init_SkillsetStatus_info(::isae_robot_skillset_interfaces::msg::SkillsetStatus & msg)
  : msg_(msg)
  {}
  ::isae_robot_skillset_interfaces::msg::SkillsetStatus info(::isae_robot_skillset_interfaces::msg::SkillsetStatus::_info_type arg)
  {
    msg_.info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillsetStatus msg_;
};

class Init_SkillsetStatus_skill_track_target
{
public:
  explicit Init_SkillsetStatus_skill_track_target(::isae_robot_skillset_interfaces::msg::SkillsetStatus & msg)
  : msg_(msg)
  {}
  Init_SkillsetStatus_info skill_track_target(::isae_robot_skillset_interfaces::msg::SkillsetStatus::_skill_track_target_type arg)
  {
    msg_.skill_track_target = std::move(arg);
    return Init_SkillsetStatus_info(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillsetStatus msg_;
};

class Init_SkillsetStatus_skill_take_picture
{
public:
  explicit Init_SkillsetStatus_skill_take_picture(::isae_robot_skillset_interfaces::msg::SkillsetStatus & msg)
  : msg_(msg)
  {}
  Init_SkillsetStatus_skill_track_target skill_take_picture(::isae_robot_skillset_interfaces::msg::SkillsetStatus::_skill_take_picture_type arg)
  {
    msg_.skill_take_picture = std::move(arg);
    return Init_SkillsetStatus_skill_track_target(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillsetStatus msg_;
};

class Init_SkillsetStatus_skill_move_to
{
public:
  explicit Init_SkillsetStatus_skill_move_to(::isae_robot_skillset_interfaces::msg::SkillsetStatus & msg)
  : msg_(msg)
  {}
  Init_SkillsetStatus_skill_take_picture skill_move_to(::isae_robot_skillset_interfaces::msg::SkillsetStatus::_skill_move_to_type arg)
  {
    msg_.skill_move_to = std::move(arg);
    return Init_SkillsetStatus_skill_take_picture(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillsetStatus msg_;
};

class Init_SkillsetStatus_skill_detect_target
{
public:
  explicit Init_SkillsetStatus_skill_detect_target(::isae_robot_skillset_interfaces::msg::SkillsetStatus & msg)
  : msg_(msg)
  {}
  Init_SkillsetStatus_skill_move_to skill_detect_target(::isae_robot_skillset_interfaces::msg::SkillsetStatus::_skill_detect_target_type arg)
  {
    msg_.skill_detect_target = std::move(arg);
    return Init_SkillsetStatus_skill_move_to(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillsetStatus msg_;
};

class Init_SkillsetStatus_resources
{
public:
  explicit Init_SkillsetStatus_resources(::isae_robot_skillset_interfaces::msg::SkillsetStatus & msg)
  : msg_(msg)
  {}
  Init_SkillsetStatus_skill_detect_target resources(::isae_robot_skillset_interfaces::msg::SkillsetStatus::_resources_type arg)
  {
    msg_.resources = std::move(arg);
    return Init_SkillsetStatus_skill_detect_target(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillsetStatus msg_;
};

class Init_SkillsetStatus_stamp
{
public:
  Init_SkillsetStatus_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SkillsetStatus_resources stamp(::isae_robot_skillset_interfaces::msg::SkillsetStatus::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_SkillsetStatus_resources(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillsetStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::isae_robot_skillset_interfaces::msg::SkillsetStatus>()
{
  return isae_robot_skillset_interfaces::msg::builder::Init_SkillsetStatus_stamp();
}

}  // namespace isae_robot_skillset_interfaces

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILLSET_STATUS__BUILDER_HPP_
