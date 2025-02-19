// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from isae_robot_skillset_interfaces:msg/DataPose.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__DATA_POSE__BUILDER_HPP_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__DATA_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "isae_robot_skillset_interfaces/msg/detail/data_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace isae_robot_skillset_interfaces
{

namespace msg
{

namespace builder
{

class Init_DataPose_value
{
public:
  explicit Init_DataPose_value(::isae_robot_skillset_interfaces::msg::DataPose & msg)
  : msg_(msg)
  {}
  ::isae_robot_skillset_interfaces::msg::DataPose value(::isae_robot_skillset_interfaces::msg::DataPose::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::DataPose msg_;
};

class Init_DataPose_stamp
{
public:
  Init_DataPose_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DataPose_value stamp(::isae_robot_skillset_interfaces::msg::DataPose::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_DataPose_value(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::DataPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::isae_robot_skillset_interfaces::msg::DataPose>()
{
  return isae_robot_skillset_interfaces::msg::builder::Init_DataPose_stamp();
}

}  // namespace isae_robot_skillset_interfaces

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__DATA_POSE__BUILDER_HPP_
