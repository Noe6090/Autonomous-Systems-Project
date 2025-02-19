// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from isae_robot_skillset_interfaces:msg/SkillTakePictureRequest.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TAKE_PICTURE_REQUEST__BUILDER_HPP_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TAKE_PICTURE_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "isae_robot_skillset_interfaces/msg/detail/skill_take_picture_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace isae_robot_skillset_interfaces
{

namespace msg
{

namespace builder
{

class Init_SkillTakePictureRequest_input
{
public:
  explicit Init_SkillTakePictureRequest_input(::isae_robot_skillset_interfaces::msg::SkillTakePictureRequest & msg)
  : msg_(msg)
  {}
  ::isae_robot_skillset_interfaces::msg::SkillTakePictureRequest input(::isae_robot_skillset_interfaces::msg::SkillTakePictureRequest::_input_type arg)
  {
    msg_.input = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillTakePictureRequest msg_;
};

class Init_SkillTakePictureRequest_id
{
public:
  Init_SkillTakePictureRequest_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SkillTakePictureRequest_input id(::isae_robot_skillset_interfaces::msg::SkillTakePictureRequest::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SkillTakePictureRequest_input(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::SkillTakePictureRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::isae_robot_skillset_interfaces::msg::SkillTakePictureRequest>()
{
  return isae_robot_skillset_interfaces::msg::builder::Init_SkillTakePictureRequest_id();
}

}  // namespace isae_robot_skillset_interfaces

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TAKE_PICTURE_REQUEST__BUILDER_HPP_
