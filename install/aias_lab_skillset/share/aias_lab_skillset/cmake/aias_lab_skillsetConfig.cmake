# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_aias_lab_skillset_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED aias_lab_skillset_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(aias_lab_skillset_FOUND FALSE)
  elseif(NOT aias_lab_skillset_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(aias_lab_skillset_FOUND FALSE)
  endif()
  return()
endif()
set(_aias_lab_skillset_CONFIG_INCLUDED TRUE)

# output package information
if(NOT aias_lab_skillset_FIND_QUIETLY)
  message(STATUS "Found aias_lab_skillset: 0.0.0 (${aias_lab_skillset_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'aias_lab_skillset' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${aias_lab_skillset_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(aias_lab_skillset_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_targets-extras.cmake")
foreach(_extra ${_extras})
  include("${aias_lab_skillset_DIR}/${_extra}")
endforeach()
