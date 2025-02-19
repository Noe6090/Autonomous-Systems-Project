# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_isae_robot_skillset_gui_widgets_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED isae_robot_skillset_gui_widgets_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(isae_robot_skillset_gui_widgets_FOUND FALSE)
  elseif(NOT isae_robot_skillset_gui_widgets_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(isae_robot_skillset_gui_widgets_FOUND FALSE)
  endif()
  return()
endif()
set(_isae_robot_skillset_gui_widgets_CONFIG_INCLUDED TRUE)

# output package information
if(NOT isae_robot_skillset_gui_widgets_FIND_QUIETLY)
  message(STATUS "Found isae_robot_skillset_gui_widgets: 0.0.0 (${isae_robot_skillset_gui_widgets_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'isae_robot_skillset_gui_widgets' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${isae_robot_skillset_gui_widgets_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(isae_robot_skillset_gui_widgets_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_targets-extras.cmake")
foreach(_extra ${_extras})
  include("${isae_robot_skillset_gui_widgets_DIR}/${_extra}")
endforeach()
