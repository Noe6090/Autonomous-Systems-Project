// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from isae_robot_skillset_interfaces:msg/SkillTakePictureStatus.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TAKE_PICTURE_STATUS__BUILDER_HPP_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TAKE_PICTURE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "isae_robot_skillset_interfaces/msg/detail/skill_take_picture_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace isae_robot_skillset_interfaces
{

namespace msg
{

namespace builder
{

class Init_SkillTakePictureStatus_input
{
public:
  explicit Init_SkillTakePictureStatus_input(::isae_robot_skillset_interfaces::msg::SkillTakePictureStatus & msg)
  : msg_(msg)
  {}
  ::isae_robot_skillset_interfaces::msg::SkillTakePictureStatus input(::isae_robot_skillset_interfaces::msg::SkillTakePictureStatus::_input_type arg)
  {
    msg_.input = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillTakePictureStatus msg_;
};

class Init_SkillTakePictureStatus_state
{
public:
  explicit Init_SkillTakePictureStatus_state(::isae_robot_skillset_interfaces::msg::SkillTakePictureStatus & msg)
  : msg_(msg)
  {}
  Init_SkillTakePictureStatus_input state(::isae_robot_skillset_interfaces::msg::SkillTakePictureStatus::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_SkillTakePictureStatus_input(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillTakePictureStatus msg_;
};

class Init_SkillTakePictureStatus_id
{
public:
  explicit Init_SkillTakePictureStatus_id(::isae_robot_skillset_interfaces::msg::SkillTakePictureStatus & msg)
  : msg_(msg)
  {}
  Init_SkillTakePictureStatus_state id(::isae_robot_skillset_interfaces::msg::SkillTakePictureStatus::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SkillTakePictureStatus_state(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillTakePictureStatus msg_;
};

class Init_SkillTakePictureStatus_name
{
public:
  Init_SkillTakePictureStatus_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SkillTakePictureStatus_id name(::isae_robot_skillset_interfaces::msg::SkillTakePictureStatus::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SkillTakePictureStatus_id(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillTakePictureStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::isae_robot_skillset_interfaces::msg::SkillTakePictureStatus>()
{
  return isae_robot_skillset_interfaces::msg::builder::Init_SkillTakePictureStatus_name();
}

}  // namespace isae_robot_skillset_interfaces

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TAKE_PICTURE_STATUS__BUILDER_HPP_
