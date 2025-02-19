// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from isae_robot_skillset_interfaces:msg/SkillTakePictureResponse.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TAKE_PICTURE_RESPONSE__STRUCT_HPP_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TAKE_PICTURE_RESPONSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__isae_robot_skillset_interfaces__msg__SkillTakePictureResponse __attribute__((deprecated))
#else
# define DEPRECATED__isae_robot_skillset_interfaces__msg__SkillTakePictureResponse __declspec(deprecated)
#endif

namespace isae_robot_skillset_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SkillTakePictureResponse_
{
  using Type = SkillTakePictureResponse_<ContainerAllocator>;

  explicit SkillTakePictureResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->result = 0;
      this->name = "";
      this->effect = false;
      this->postcondition = false;
    }
  }

  explicit SkillTakePictureResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc),
    name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->result = 0;
      this->name = "";
      this->effect = false;
      this->postcondition = false;
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _result_type =
    uint8_t;
  _result_type result;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _effect_type =
    bool;
  _effect_type effect;
  using _postcondition_type =
    bool;
  _postcondition_type postcondition;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__result(
    const uint8_t & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__effect(
    const bool & _arg)
  {
    this->effect = _arg;
    return *this;
  }
  Type & set__postcondition(
    const bool & _arg)
  {
    this->postcondition = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SUCCESS =
    0u;
  static constexpr uint8_t ALREADY_RUNNING =
    1u;
  static constexpr uint8_t PRECONDITION_FAILURE =
    2u;
  static constexpr uint8_t VALIDATE_FAILURE =
    3u;
  static constexpr uint8_t START_FAILURE =
    4u;
  static constexpr uint8_t INVARIANT_FAILURE =
    5u;
  static constexpr uint8_t INTERRUPT =
    6u;
  static constexpr uint8_t FAILURE =
    7u;

  // pointer types
  using RawPtr =
    isae_robot_skillset_interfaces::msg::SkillTakePictureResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const isae_robot_skillset_interfaces::msg::SkillTakePictureResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<isae_robot_skillset_interfaces::msg::SkillTakePictureResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<isae_robot_skillset_interfaces::msg::SkillTakePictureResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      isae_robot_skillset_interfaces::msg::SkillTakePictureResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<isae_robot_skillset_interfaces::msg::SkillTakePictureResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      isae_robot_skillset_interfaces::msg::SkillTakePictureResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<isae_robot_skillset_interfaces::msg::SkillTakePictureResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<isae_robot_skillset_interfaces::msg::SkillTakePictureResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<isae_robot_skillset_interfaces::msg::SkillTakePictureResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__isae_robot_skillset_interfaces__msg__SkillTakePictureResponse
    std::shared_ptr<isae_robot_skillset_interfaces::msg::SkillTakePictureResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__isae_robot_skillset_interfaces__msg__SkillTakePictureResponse
    std::shared_ptr<isae_robot_skillset_interfaces::msg::SkillTakePictureResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SkillTakePictureResponse_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->effect != other.effect) {
      return false;
    }
    if (this->postcondition != other.postcondition) {
      return false;
    }
    return true;
  }
  bool operator!=(const SkillTakePictureResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SkillTakePictureResponse_

// alias to use template instance with default allocator
using SkillTakePictureResponse =
  isae_robot_skillset_interfaces::msg::SkillTakePictureResponse_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SkillTakePictureResponse_<ContainerAllocator>::SUCCESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SkillTakePictureResponse_<ContainerAllocator>::ALREADY_RUNNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SkillTakePictureResponse_<ContainerAllocator>::PRECONDITION_FAILURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SkillTakePictureResponse_<ContainerAllocator>::VALIDATE_FAILURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SkillTakePictureResponse_<ContainerAllocator>::START_FAILURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SkillTakePictureResponse_<ContainerAllocator>::INVARIANT_FAILURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SkillTakePictureResponse_<ContainerAllocator>::INTERRUPT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SkillTakePictureResponse_<ContainerAllocator>::FAILURE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace isae_robot_skillset_interfaces

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TAKE_PICTURE_RESPONSE__STRUCT_HPP_
