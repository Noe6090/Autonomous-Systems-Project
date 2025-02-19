// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from isae_robot_skillset_interfaces:msg/DataPoseResponse.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__DATA_POSE_RESPONSE__STRUCT_HPP_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__DATA_POSE_RESPONSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'value'
#include "geometry_msgs/msg/detail/pose2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__isae_robot_skillset_interfaces__msg__DataPoseResponse __attribute__((deprecated))
#else
# define DEPRECATED__isae_robot_skillset_interfaces__msg__DataPoseResponse __declspec(deprecated)
#endif

namespace isae_robot_skillset_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DataPoseResponse_
{
  using Type = DataPoseResponse_<ContainerAllocator>;

  explicit DataPoseResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init),
    value(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->has_data = false;
    }
  }

  explicit DataPoseResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc),
    stamp(_alloc, _init),
    value(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->has_data = false;
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _has_data_type =
    bool;
  _has_data_type has_data;
  using _value_type =
    geometry_msgs::msg::Pose2D_<ContainerAllocator>;
  _value_type value;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__has_data(
    const bool & _arg)
  {
    this->has_data = _arg;
    return *this;
  }
  Type & set__value(
    const geometry_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    isae_robot_skillset_interfaces::msg::DataPoseResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const isae_robot_skillset_interfaces::msg::DataPoseResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<isae_robot_skillset_interfaces::msg::DataPoseResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<isae_robot_skillset_interfaces::msg::DataPoseResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      isae_robot_skillset_interfaces::msg::DataPoseResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<isae_robot_skillset_interfaces::msg::DataPoseResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      isae_robot_skillset_interfaces::msg::DataPoseResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<isae_robot_skillset_interfaces::msg::DataPoseResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<isae_robot_skillset_interfaces::msg::DataPoseResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<isae_robot_skillset_interfaces::msg::DataPoseResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__isae_robot_skillset_interfaces__msg__DataPoseResponse
    std::shared_ptr<isae_robot_skillset_interfaces::msg::DataPoseResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__isae_robot_skillset_interfaces__msg__DataPoseResponse
    std::shared_ptr<isae_robot_skillset_interfaces::msg::DataPoseResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DataPoseResponse_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->has_data != other.has_data) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const DataPoseResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DataPoseResponse_

// alias to use template instance with default allocator
using DataPoseResponse =
  isae_robot_skillset_interfaces::msg::DataPoseResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace isae_robot_skillset_interfaces

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__DATA_POSE_RESPONSE__STRUCT_HPP_
