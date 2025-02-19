#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "aias_lab_skillset::aias_lab_skillset" for configuration ""
set_property(TARGET aias_lab_skillset::aias_lab_skillset APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(aias_lab_skillset::aias_lab_skillset PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libaias_lab_skillset.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS aias_lab_skillset::aias_lab_skillset )
list(APPEND _IMPORT_CHECK_FILES_FOR_aias_lab_skillset::aias_lab_skillset "${_IMPORT_PREFIX}/lib/libaias_lab_skillset.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
