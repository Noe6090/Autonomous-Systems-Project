// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from isae_robot_skillset_interfaces:msg/EventResponse.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__EVENT_RESPONSE__BUILDER_HPP_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__EVENT_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "isae_robot_skillset_interfaces/msg/detail/event_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace isae_robot_skillset_interfaces
{

namespace msg
{

namespace builder
{

class Init_EventResponse_response
{
public:
  explicit Init_EventResponse_response(::isae_robot_skillset_interfaces::msg::EventResponse & msg)
  : msg_(msg)
  {}
  ::isae_robot_skillset_interfaces::msg::EventResponse response(::isae_robot_skillset_interfaces::msg::EventResponse::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::EventResponse msg_;
};

class Init_EventResponse_id
{
public:
  Init_EventResponse_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EventResponse_response id(::isae_robot_skillset_interfaces::msg::EventResponse::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_EventResponse_response(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::EventResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::isae_robot_skillset_interfaces::msg::EventResponse>()
{
  return isae_robot_skillset_interfaces::msg::builder::Init_EventResponse_id();
}

}  // namespace isae_robot_skillset_interfaces

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__EVENT_RESPONSE__BUILDER_HPP_
