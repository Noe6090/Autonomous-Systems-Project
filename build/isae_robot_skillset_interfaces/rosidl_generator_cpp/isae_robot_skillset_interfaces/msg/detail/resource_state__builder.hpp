// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from isae_robot_skillset_interfaces:msg/ResourceState.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__RESOURCE_STATE__BUILDER_HPP_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__RESOURCE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "isae_robot_skillset_interfaces/msg/detail/resource_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace isae_robot_skillset_interfaces
{

namespace msg
{

namespace builder
{

class Init_ResourceState_state
{
public:
  explicit Init_ResourceState_state(::isae_robot_skillset_interfaces::msg::ResourceState & msg)
  : msg_(msg)
  {}
  ::isae_robot_skillset_interfaces::msg::ResourceState state(::isae_robot_skillset_interfaces::msg::ResourceState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::ResourceState msg_;
};

class Init_ResourceState_name
{
public:
  Init_ResourceState_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ResourceState_state name(::isae_robot_skillset_interfaces::msg::ResourceState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ResourceState_state(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::ResourceState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::isae_robot_skillset_interfaces::msg::ResourceState>()
{
  return isae_robot_skillset_interfaces::msg::builder::Init_ResourceState_name();
}

}  // namespace isae_robot_skillset_interfaces

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__RESOURCE_STATE__BUILDER_HPP_
