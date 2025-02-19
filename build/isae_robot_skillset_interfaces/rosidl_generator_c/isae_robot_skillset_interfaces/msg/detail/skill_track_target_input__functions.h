// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from isae_robot_skillset_interfaces:msg/SkillTrackTargetInput.idl
// generated code does not contain a copyright notice

#ifndef ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TRACK_TARGET_INPUT__FUNCTIONS_H_
#define ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TRACK_TARGET_INPUT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "isae_robot_skillset_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "isae_robot_skillset_interfaces/msg/detail/skill_track_target_input__struct.h"

/// Initialize msg/SkillTrackTargetInput message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * isae_robot_skillset_interfaces__msg__SkillTrackTargetInput
 * )) before or use
 * isae_robot_skillset_interfaces__msg__SkillTrackTargetInput__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_isae_robot_skillset_interfaces
bool
isae_robot_skillset_interfaces__msg__SkillTrackTargetInput__init(isae_robot_skillset_interfaces__msg__SkillTrackTargetInput * msg);

/// Finalize msg/SkillTrackTargetInput message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_isae_robot_skillset_interfaces
void
isae_robot_skillset_interfaces__msg__SkillTrackTargetInput__fini(isae_robot_skillset_interfaces__msg__SkillTrackTargetInput * msg);

/// Create msg/SkillTrackTargetInput message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * isae_robot_skillset_interfaces__msg__SkillTrackTargetInput__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_isae_robot_skillset_interfaces
isae_robot_skillset_interfaces__msg__SkillTrackTargetInput *
isae_robot_skillset_interfaces__msg__SkillTrackTargetInput__create();

/// Destroy msg/SkillTrackTargetInput message.
/**
 * It calls
 * isae_robot_skillset_interfaces__msg__SkillTrackTargetInput__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_isae_robot_skillset_interfaces
void
isae_robot_skillset_interfaces__msg__SkillTrackTargetInput__destroy(isae_robot_skillset_interfaces__msg__SkillTrackTargetInput * msg);

/// Check for msg/SkillTrackTargetInput message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_isae_robot_skillset_interfaces
bool
isae_robot_skillset_interfaces__msg__SkillTrackTargetInput__are_equal(const isae_robot_skillset_interfaces__msg__SkillTrackTargetInput * lhs, const isae_robot_skillset_interfaces__msg__SkillTrackTargetInput * rhs);

/// Copy a msg/SkillTrackTargetInput message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_isae_robot_skillset_interfaces
bool
isae_robot_skillset_interfaces__msg__SkillTrackTargetInput__copy(
  const isae_robot_skillset_interfaces__msg__SkillTrackTargetInput * input,
  isae_robot_skillset_interfaces__msg__SkillTrackTargetInput * output);

/// Initialize array of msg/SkillTrackTargetInput messages.
/**
 * It allocates the memory for the number of elements and calls
 * isae_robot_skillset_interfaces__msg__SkillTrackTargetInput__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_isae_robot_skillset_interfaces
bool
isae_robot_skillset_interfaces__msg__SkillTrackTargetInput__Sequence__init(isae_robot_skillset_interfaces__msg__SkillTrackTargetInput__Sequence * array, size_t size);

/// Finalize array of msg/SkillTrackTargetInput messages.
/**
 * It calls
 * isae_robot_skillset_interfaces__msg__SkillTrackTargetInput__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_isae_robot_skillset_interfaces
void
isae_robot_skillset_interfaces__msg__SkillTrackTargetInput__Sequence__fini(isae_robot_skillset_interfaces__msg__SkillTrackTargetInput__Sequence * array);

/// Create array of msg/SkillTrackTargetInput messages.
/**
 * It allocates the memory for the array and calls
 * isae_robot_skillset_interfaces__msg__SkillTrackTargetInput__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_isae_robot_skillset_interfaces
isae_robot_skillset_interfaces__msg__SkillTrackTargetInput__Sequence *
isae_robot_skillset_interfaces__msg__SkillTrackTargetInput__Sequence__create(size_t size);

/// Destroy array of msg/SkillTrackTargetInput messages.
/**
 * It calls
 * isae_robot_skillset_interfaces__msg__SkillTrackTargetInput__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_isae_robot_skillset_interfaces
void
isae_robot_skillset_interfaces__msg__SkillTrackTargetInput__Sequence__destroy(isae_robot_skillset_interfaces__msg__SkillTrackTargetInput__Sequence * array);

/// Check for msg/SkillTrackTargetInput message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_isae_robot_skillset_interfaces
bool
isae_robot_skillset_interfaces__msg__SkillTrackTargetInput__Sequence__are_equal(const isae_robot_skillset_interfaces__msg__SkillTrackTargetInput__Sequence * lhs, const isae_robot_skillset_interfaces__msg__SkillTrackTargetInput__Sequence * rhs);

/// Copy an array of msg/SkillTrackTargetInput messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_isae_robot_skillset_interfaces
bool
isae_robot_skillset_interfaces__msg__SkillTrackTargetInput__Sequence__copy(
  const isae_robot_skillset_interfaces__msg__SkillTrackTargetInput__Sequence * input,
  isae_robot_skillset_interfaces__msg__SkillTrackTargetInput__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ISAE_ROBOT_SKILLSET_INTERFACES__MSG__DETAIL__SKILL_TRACK_TARGET_INPUT__FUNCTIONS_H_
