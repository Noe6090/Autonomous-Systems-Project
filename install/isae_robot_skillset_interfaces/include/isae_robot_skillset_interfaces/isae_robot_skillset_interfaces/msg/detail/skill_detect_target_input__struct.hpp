// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from isae_robot_skillset_interfaces:msg/SkillDetectTargetInput.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_DETECT_TARGET_INPUT__STRUCT_HPP_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_DETECT_TARGET_INPUT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'timeout'
#include "std_msgs/msg/detail/float64__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__isae_robot_skillset_interfaces__msg__SkillDetectTargetInput __attribute__((deprecated))
#else
# define DEPRECATED__isae_robot_skillset_interfaces__msg__SkillDetectTargetInput __declspec(deprecated)
#endif

namespace isae_robot_skillset_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SkillDetectTargetInput_
{
  using Type = SkillDetectTargetInput_<ContainerAllocator>;

  explicit SkillDetectTargetInput_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timeout(_init)
  {
    (void)_init;
  }

  explicit SkillDetectTargetInput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timeout(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _timeout_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _timeout_type timeout;

  // setters for named parameter idiom
  Type & set__timeout(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->timeout = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    isae_robot_skillset_interfaces::msg::SkillDetectTargetInput_<ContainerAllocator> *;
  using ConstRawPtr =
    const isae_robot_skillset_interfaces::msg::SkillDetectTargetInput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<isae_robot_skillset_interfaces::msg::SkillDetectTargetInput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<isae_robot_skillset_interfaces::msg::SkillDetectTargetInput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      isae_robot_skillset_interfaces::msg::SkillDetectTargetInput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<isae_robot_skillset_interfaces::msg::SkillDetectTargetInput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      isae_robot_skillset_interfaces::msg::SkillDetectTargetInput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<isae_robot_skillset_interfaces::msg::SkillDetectTargetInput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<isae_robot_skillset_interfaces::msg::SkillDetectTargetInput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<isae_robot_skillset_interfaces::msg::SkillDetectTargetInput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__isae_robot_skillset_interfaces__msg__SkillDetectTargetInput
    std::shared_ptr<isae_robot_skillset_interfaces::msg::SkillDetectTargetInput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__isae_robot_skillset_interfaces__msg__SkillDetectTargetInput
    std::shared_ptr<isae_robot_skillset_interfaces::msg::SkillDetectTargetInput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SkillDetectTargetInput_ & other) const
  {
    if (this->timeout != other.timeout) {
      return false;
    }
    return true;
  }
  bool operator!=(const SkillDetectTargetInput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SkillDetectTargetInput_

// alias to use template instance with default allocator
using SkillDetectTargetInput =
  isae_robot_skillset_interfaces::msg::SkillDetectTargetInput_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace isae_robot_skillset_interfaces

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_DETECT_TARGET_INPUT__STRUCT_HPP_
