// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from isae_robot_skillset_interfaces:msg/DataPoseResponse.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__DATA_POSE_RESPONSE__BUILDER_HPP_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__DATA_POSE_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "isae_robot_skillset_interfaces/msg/detail/data_pose_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace isae_robot_skillset_interfaces
{

namespace msg
{

namespace builder
{

class Init_DataPoseResponse_value
{
public:
  explicit Init_DataPoseResponse_value(::isae_robot_skillset_interfaces::msg::DataPoseResponse & msg)
  : msg_(msg)
  {}
  ::isae_robot_skillset_interfaces::msg::DataPoseResponse value(::isae_robot_skillset_interfaces::msg::DataPoseResponse::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::DataPoseResponse msg_;
};

class Init_DataPoseResponse_has_data
{
public:
  explicit Init_DataPoseResponse_has_data(::isae_robot_skillset_interfaces::msg::DataPoseResponse & msg)
  : msg_(msg)
  {}
  Init_DataPoseResponse_value has_data(::isae_robot_skillset_interfaces::msg::DataPoseResponse::_has_data_type arg)
  {
    msg_.has_data = std::move(arg);
    return Init_DataPoseResponse_value(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::DataPoseResponse msg_;
};

class Init_DataPoseResponse_stamp
{
public:
  explicit Init_DataPoseResponse_stamp(::isae_robot_skillset_interfaces::msg::DataPoseResponse & msg)
  : msg_(msg)
  {}
  Init_DataPoseResponse_has_data stamp(::isae_robot_skillset_interfaces::msg::DataPoseResponse::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_DataPoseResponse_has_data(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::DataPoseResponse msg_;
};

class Init_DataPoseResponse_id
{
public:
  Init_DataPoseResponse_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DataPoseResponse_stamp id(::isae_robot_skillset_interfaces::msg::DataPoseResponse::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_DataPoseResponse_stamp(msg_);
  }

private:
  ::isae_robot_skillset_interfaces::msg::DataPoseResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::isae_robot_skillset_interfaces::msg::DataPoseResponse>()
{
  return isae_robot_skillset_interfaces::msg::builder::Init_DataPoseResponse_id();
}

}  // namespace isae_robot_skillset_interfaces

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__DATA_POSE_RESPONSE__BUILDER_HPP_
