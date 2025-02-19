#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "isae_robot_skillset::isae_robot_skillset" for configuration ""
set_property(TARGET isae_robot_skillset::isae_robot_skillset APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(isae_robot_skillset::isae_robot_skillset PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libisae_robot_skillset.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS isae_robot_skillset::isae_robot_skillset )
list(APPEND _IMPORT_CHECK_FILES_FOR_isae_robot_skillset::isae_robot_skillset "${_IMPORT_PREFIX}/lib/libisae_robot_skillset.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
