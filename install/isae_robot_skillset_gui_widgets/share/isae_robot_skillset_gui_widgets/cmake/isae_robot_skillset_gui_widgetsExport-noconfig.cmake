#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "isae_robot_skillset_gui_widgets::isae_robot_skillset_gui_widgets" for configuration ""
set_property(TARGET isae_robot_skillset_gui_widgets::isae_robot_skillset_gui_widgets APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(isae_robot_skillset_gui_widgets::isae_robot_skillset_gui_widgets PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libisae_robot_skillset_gui_widgets.so"
  IMPORTED_SONAME_NOCONFIG "libisae_robot_skillset_gui_widgets.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS isae_robot_skillset_gui_widgets::isae_robot_skillset_gui_widgets )
list(APPEND _IMPORT_CHECK_FILES_FOR_isae_robot_skillset_gui_widgets::isae_robot_skillset_gui_widgets "${_IMPORT_PREFIX}/lib/libisae_robot_skillset_gui_widgets.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
