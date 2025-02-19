// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from isae_robot_skillset_interfaces:msg/SkillTakePictureResponse.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TAKE_PICTURE_RESPONSE__BUILDER_HPP_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TAKE_PICTURE_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "isae_robot_skillset_interfaces/msg/detail/skill_take_picture_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace isae_robot_skillset_interfaces
{

namespace msg
{

namespace builder
{

class Init_SkillTakePictureResponse_postcondition
{
public:
  explicit Init_SkillTakePictureResponse_postcondition(::isae_robot_skillset_interfaces::msg::SkillTakePictureResponse & msg)
  : msg_(msg)
  {}
  ::isae_robot_skillset_interfaces::msg::SkillTakePictureResponse postcondition(::isae_robot_skillset_interfaces::msg::SkillTakePictureResponse::_postcondition_type arg)
  {
    msg_.postcondition = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillTakePictureResponse msg_;
};

class Init_SkillTakePictureResponse_effect
{
public:
  explicit Init_SkillTakePictureResponse_effect(::isae_robot_skillset_interfaces::msg::SkillTakePictureResponse & msg)
  : msg_(msg)
  {}
  Init_SkillTakePictureResponse_postcondition effect(::isae_robot_skillset_interfaces::msg::SkillTakePictureResponse::_effect_type arg)
  {
    msg_.effect = std::move(arg);
    return Init_SkillTakePictureResponse_postcondition(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillTakePictureResponse msg_;
};

class Init_SkillTakePictureResponse_name
{
public:
  explicit Init_SkillTakePictureResponse_name(::isae_robot_skillset_interfaces::msg::SkillTakePictureResponse & msg)
  : msg_(msg)
  {}
  Init_SkillTakePictureResponse_effect name(::isae_robot_skillset_interfaces::msg::SkillTakePictureResponse::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SkillTakePictureResponse_effect(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillTakePictureResponse msg_;
};

class Init_SkillTakePictureResponse_result
{
public:
  explicit Init_SkillTakePictureResponse_result(::isae_robot_skillset_interfaces::msg::SkillTakePictureResponse & msg)
  : msg_(msg)
  {}
  Init_SkillTakePictureResponse_name result(::isae_robot_skillset_interfaces::msg::SkillTakePictureResponse::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_SkillTakePictureResponse_name(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillTakePictureResponse msg_;
};

class Init_SkillTakePictureResponse_id
{
public:
  Init_SkillTakePictureResponse_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SkillTakePictureResponse_result id(::isae_robot_skillset_interfaces::msg::SkillTakePictureResponse::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SkillTakePictureResponse_result(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillTakePictureResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::isae_robot_skillset_interfaces::msg::SkillTakePictureResponse>()
{
  return isae_robot_skillset_interfaces::msg::builder::Init_SkillTakePictureResponse_id();
}

}  // namespace isae_robot_skillset_interfaces

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TAKE_PICTURE_RESPONSE__BUILDER_HPP_
