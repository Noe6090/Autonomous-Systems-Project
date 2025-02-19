// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from isae_robot_skillset_interfaces:msg/SkillDetectTargetStatus.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_DETECT_TARGET_STATUS__STRUCT_HPP_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_DETECT_TARGET_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'input'
#include "isae_robot_skillset_interfaces/msg/detail/skill_detect_target_input__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__isae_robot_skillset_interfaces__msg__SkillDetectTargetStatus __attribute__((deprecated))
#else
# define DEPRECATED__isae_robot_skillset_interfaces__msg__SkillDetectTargetStatus __declspec(deprecated)
#endif

namespace isae_robot_skillset_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SkillDetectTargetStatus_
{
  using Type = SkillDetectTargetStatus_<ContainerAllocator>;

  explicit SkillDetectTargetStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : input(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->id = "";
      this->state = 0;
    }
  }

  explicit SkillDetectTargetStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    id(_alloc),
    input(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->id = "";
      this->state = 0;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _state_type =
    uint8_t;
  _state_type state;
  using _input_type =
    isae_robot_skillset_interfaces::msg::SkillDetectTargetInput_<ContainerAllocator>;
  _input_type input;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__input(
    const isae_robot_skillset_interfaces::msg::SkillDetectTargetInput_<ContainerAllocator> & _arg)
  {
    this->input = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t READY =
    0u;
  static constexpr uint8_t RUNNING =
    1u;
  static constexpr uint8_t INTERRUPTING =
    2u;

  // pointer types
  using RawPtr =
    isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__isae_robot_skillset_interfaces__msg__SkillDetectTargetStatus
    std::shared_ptr<isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__isae_robot_skillset_interfaces__msg__SkillDetectTargetStatus
    std::shared_ptr<isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SkillDetectTargetStatus_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->input != other.input) {
      return false;
    }
    return true;
  }
  bool operator!=(const SkillDetectTargetStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SkillDetectTargetStatus_

// alias to use template instance with default allocator
using SkillDetectTargetStatus =
  isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SkillDetectTargetStatus_<ContainerAllocator>::READY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SkillDetectTargetStatus_<ContainerAllocator>::RUNNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SkillDetectTargetStatus_<ContainerAllocator>::INTERRUPTING;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace isae_robot_skillset_interfaces

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_DETECT_TARGET_STATUS__STRUCT_HPP_
