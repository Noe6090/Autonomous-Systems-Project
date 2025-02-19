// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from isae_robot_skillset_interfaces:msg/EventRequest.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__EVENT_REQUEST__BUILDER_HPP_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__EVENT_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "isae_robot_skillset_interfaces/msg/detail/event_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace isae_robot_skillset_interfaces
{

namespace msg
{

namespace builder
{

class Init_EventRequest_name
{
public:
  explicit Init_EventRequest_name(::isae_robot_skillset_interfaces::msg::EventRequest & msg)
  : msg_(msg)
  {}
  ::isae_robot_skillset_interfaces::msg::EventRequest name(::isae_robot_skillset_interfaces::msg::EventRequest::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::EventRequest msg_;
};

class Init_EventRequest_id
{
public:
  Init_EventRequest_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EventRequest_name id(::isae_robot_skillset_interfaces::msg::EventRequest::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_EventRequest_name(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::EventRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::isae_robot_skillset_interfaces::msg::EventRequest>()
{
  return isae_robot_skillset_interfaces::msg::builder::Init_EventRequest_id();
}

}  // namespace isae_robot_skillset_interfaces

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__EVENT_REQUEST__BUILDER_HPP_
