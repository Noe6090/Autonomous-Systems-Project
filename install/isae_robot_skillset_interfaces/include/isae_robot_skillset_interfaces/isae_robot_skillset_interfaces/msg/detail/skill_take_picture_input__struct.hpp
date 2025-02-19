// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from isae_robot_skillset_interfaces:msg/SkillTakePictureInput.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TAKE_PICTURE_INPUT__STRUCT_HPP_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TAKE_PICTURE_INPUT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'object_name'
#include "std_msgs/msg/detail/string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__isae_robot_skillset_interfaces__msg__SkillTakePictureInput __attribute__((deprecated))
#else
# define DEPRECATED__isae_robot_skillset_interfaces__msg__SkillTakePictureInput __declspec(deprecated)
#endif

namespace isae_robot_skillset_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SkillTakePictureInput_
{
  using Type = SkillTakePictureInput_<ContainerAllocator>;

  explicit SkillTakePictureInput_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object_name(_init)
  {
    (void)_init;
  }

  explicit SkillTakePictureInput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object_name(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _object_name_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _object_name_type object_name;

  // setters for named parameter idiom
  Type & set__object_name(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->object_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    isae_robot_skillset_interfaces::msg::SkillTakePictureInput_<ContainerAllocator> *;
  using ConstRawPtr =
    const isae_robot_skillset_interfaces::msg::SkillTakePictureInput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<isae_robot_skillset_interfaces::msg::SkillTakePictureInput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<isae_robot_skillset_interfaces::msg::SkillTakePictureInput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      isae_robot_skillset_interfaces::msg::SkillTakePictureInput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<isae_robot_skillset_interfaces::msg::SkillTakePictureInput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      isae_robot_skillset_interfaces::msg::SkillTakePictureInput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<isae_robot_skillset_interfaces::msg::SkillTakePictureInput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<isae_robot_skillset_interfaces::msg::SkillTakePictureInput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<isae_robot_skillset_interfaces::msg::SkillTakePictureInput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__isae_robot_skillset_interfaces__msg__SkillTakePictureInput
    std::shared_ptr<isae_robot_skillset_interfaces::msg::SkillTakePictureInput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__isae_robot_skillset_interfaces__msg__SkillTakePictureInput
    std::shared_ptr<isae_robot_skillset_interfaces::msg::SkillTakePictureInput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SkillTakePictureInput_ & other) const
  {
    if (this->object_name != other.object_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const SkillTakePictureInput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SkillTakePictureInput_

// alias to use template instance with default allocator
using SkillTakePictureInput =
  isae_robot_skillset_interfaces::msg::SkillTakePictureInput_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace isae_robot_skillset_interfaces

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TAKE_PICTURE_INPUT__STRUCT_HPP_
