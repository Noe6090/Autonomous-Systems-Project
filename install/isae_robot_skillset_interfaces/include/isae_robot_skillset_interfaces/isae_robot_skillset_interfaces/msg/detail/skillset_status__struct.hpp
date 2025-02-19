// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from isae_robot_skillset_interfaces:msg/SkillsetStatus.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILLSET_STATUS__STRUCT_HPP_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILLSET_STATUS__STRUCT_HPP_

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
// Member 'resources'
#include "isae_robot_skillset_interfaces/msg/detail/resource_state__struct.hpp"
// Member 'skill_detect_target'
#include "isae_robot_skillset_interfaces/msg/detail/skill_detect_target_status__struct.hpp"
// Member 'skill_move_to'
#include "isae_robot_skillset_interfaces/msg/detail/skill_move_to_status__struct.hpp"
// Member 'skill_take_picture'
#include "isae_robot_skillset_interfaces/msg/detail/skill_take_picture_status__struct.hpp"
// Member 'skill_track_target'
#include "isae_robot_skillset_interfaces/msg/detail/skill_track_target_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__isae_robot_skillset_interfaces__msg__SkillsetStatus __attribute__((deprecated))
#else
# define DEPRECATED__isae_robot_skillset_interfaces__msg__SkillsetStatus __declspec(deprecated)
#endif

namespace isae_robot_skillset_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SkillsetStatus_
{
  using Type = SkillsetStatus_<ContainerAllocator>;

  explicit SkillsetStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init),
    skill_detect_target(_init),
    skill_move_to(_init),
    skill_take_picture(_init),
    skill_track_target(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->info = "";
    }
  }

  explicit SkillsetStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    skill_detect_target(_alloc, _init),
    skill_move_to(_alloc, _init),
    skill_take_picture(_alloc, _init),
    skill_track_target(_alloc, _init),
    info(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->info = "";
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _resources_type =
    std::vector<isae_robot_skillset_interfaces::msg::ResourceState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<isae_robot_skillset_interfaces::msg::ResourceState_<ContainerAllocator>>>;
  _resources_type resources;
  using _skill_detect_target_type =
    isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus_<ContainerAllocator>;
  _skill_detect_target_type skill_detect_target;
  using _skill_move_to_type =
    isae_robot_skillset_interfaces::msg::SkillMoveToStatus_<ContainerAllocator>;
  _skill_move_to_type skill_move_to;
  using _skill_take_picture_type =
    isae_robot_skillset_interfaces::msg::SkillTakePictureStatus_<ContainerAllocator>;
  _skill_take_picture_type skill_take_picture;
  using _skill_track_target_type =
    isae_robot_skillset_interfaces::msg::SkillTrackTargetStatus_<ContainerAllocator>;
  _skill_track_target_type skill_track_target;
  using _info_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _info_type info;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__resources(
    const std::vector<isae_robot_skillset_interfaces::msg::ResourceState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<isae_robot_skillset_interfaces::msg::ResourceState_<ContainerAllocator>>> & _arg)
  {
    this->resources = _arg;
    return *this;
  }
  Type & set__skill_detect_target(
    const isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus_<ContainerAllocator> & _arg)
  {
    this->skill_detect_target = _arg;
    return *this;
  }
  Type & set__skill_move_to(
    const isae_robot_skillset_interfaces::msg::SkillMoveToStatus_<ContainerAllocator> & _arg)
  {
    this->skill_move_to = _arg;
    return *this;
  }
  Type & set__skill_take_picture(
    const isae_robot_skillset_interfaces::msg::SkillTakePictureStatus_<ContainerAllocator> & _arg)
  {
    this->skill_take_picture = _arg;
    return *this;
  }
  Type & set__skill_track_target(
    const isae_robot_skillset_interfaces::msg::SkillTrackTargetStatus_<ContainerAllocator> & _arg)
  {
    this->skill_track_target = _arg;
    return *this;
  }
  Type & set__info(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    isae_robot_skillset_interfaces::msg::SkillsetStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const isae_robot_skillset_interfaces::msg::SkillsetStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<isae_robot_skillset_interfaces::msg::SkillsetStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<isae_robot_skillset_interfaces::msg::SkillsetStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      isae_robot_skillset_interfaces::msg::SkillsetStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<isae_robot_skillset_interfaces::msg::SkillsetStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      isae_robot_skillset_interfaces::msg::SkillsetStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<isae_robot_skillset_interfaces::msg::SkillsetStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<isae_robot_skillset_interfaces::msg::SkillsetStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<isae_robot_skillset_interfaces::msg::SkillsetStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__isae_robot_skillset_interfaces__msg__SkillsetStatus
    std::shared_ptr<isae_robot_skillset_interfaces::msg::SkillsetStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__isae_robot_skillset_interfaces__msg__SkillsetStatus
    std::shared_ptr<isae_robot_skillset_interfaces::msg::SkillsetStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SkillsetStatus_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->resources != other.resources) {
      return false;
    }
    if (this->skill_detect_target != other.skill_detect_target) {
      return false;
    }
    if (this->skill_move_to != other.skill_move_to) {
      return false;
    }
    if (this->skill_take_picture != other.skill_take_picture) {
      return false;
    }
    if (this->skill_track_target != other.skill_track_target) {
      return false;
    }
    if (this->info != other.info) {
      return false;
    }
    return true;
  }
  bool operator!=(const SkillsetStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SkillsetStatus_

// alias to use template instance with default allocator
using SkillsetStatus =
  isae_robot_skillset_interfaces::msg::SkillsetStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace isae_robot_skillset_interfaces

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILLSET_STATUS__STRUCT_HPP_
