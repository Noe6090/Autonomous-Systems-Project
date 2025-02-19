// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from isae_robot_skillset_interfaces:msg/SkillTrackTargetProgress.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TRACK_TARGET_PROGRESS__STRUCT_HPP_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TRACK_TARGET_PROGRESS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'detection'
#include "geometry_msgs/msg/detail/pose2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__isae_robot_skillset_interfaces__msg__SkillTrackTargetProgress __attribute__((deprecated))
#else
# define DEPRECATED__isae_robot_skillset_interfaces__msg__SkillTrackTargetProgress __declspec(deprecated)
#endif

namespace isae_robot_skillset_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SkillTrackTargetProgress_
{
  using Type = SkillTrackTargetProgress_<ContainerAllocator>;

  explicit SkillTrackTargetProgress_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : detection(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
    }
  }

  explicit SkillTrackTargetProgress_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc),
    detection(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _detection_type =
    geometry_msgs::msg::Pose2D_<ContainerAllocator>;
  _detection_type detection;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__detection(
    const geometry_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->detection = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    isae_robot_skillset_interfaces::msg::SkillTrackTargetProgress_<ContainerAllocator> *;
  using ConstRawPtr =
    const isae_robot_skillset_interfaces::msg::SkillTrackTargetProgress_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<isae_robot_skillset_interfaces::msg::SkillTrackTargetProgress_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<isae_robot_skillset_interfaces::msg::SkillTrackTargetProgress_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      isae_robot_skillset_interfaces::msg::SkillTrackTargetProgress_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<isae_robot_skillset_interfaces::msg::SkillTrackTargetProgress_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      isae_robot_skillset_interfaces::msg::SkillTrackTargetProgress_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<isae_robot_skillset_interfaces::msg::SkillTrackTargetProgress_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<isae_robot_skillset_interfaces::msg::SkillTrackTargetProgress_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<isae_robot_skillset_interfaces::msg::SkillTrackTargetProgress_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__isae_robot_skillset_interfaces__msg__SkillTrackTargetProgress
    std::shared_ptr<isae_robot_skillset_interfaces::msg::SkillTrackTargetProgress_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__isae_robot_skillset_interfaces__msg__SkillTrackTargetProgress
    std::shared_ptr<isae_robot_skillset_interfaces::msg::SkillTrackTargetProgress_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SkillTrackTargetProgress_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->detection != other.detection) {
      return false;
    }
    return true;
  }
  bool operator!=(const SkillTrackTargetProgress_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SkillTrackTargetProgress_

// alias to use template instance with default allocator
using SkillTrackTargetProgress =
  isae_robot_skillset_interfaces::msg::SkillTrackTargetProgress_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace isae_robot_skillset_interfaces

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TRACK_TARGET_PROGRESS__STRUCT_HPP_
