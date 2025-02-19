cmake_minimum_required(VERSION 3.5)
project(aias_lab_skillset)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

if(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-stdlib=libstdc++)
endif()

#--------------------------------------------------
# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(isae_robot_skillset_interfaces REQUIRED)
find_package(isae_robot_skillset REQUIRED)
find_package(nav2_msgs REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(topic_tools_interfaces REQUIRED)
find_package(image_transport REQUIRED)
find_package(cv_bridge REQUIRED)

#--------------------------------------------------

include_directories(include)

#--------------------------------------------------------------------

add_library(aias_lab_skillset
  src/Node.cpp
)

target_link_libraries(aias_lab_skillset)
ament_target_dependencies(aias_lab_skillset 
  rclcpp std_msgs isae_robot_skillset_interfaces isae_robot_skillset
  nav2_msgs rclcpp_action tf2_geometry_msgs geometry_msgs topic_tools_interfaces image_transport cv_bridge
  )

install(DIRECTORY include/
  DESTINATION include)

install(
  TARGETS aias_lab_skillset
  EXPORT aias_lab_skillset
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib
  RUNTIME DESTINATION bin
  INCLUDES DESTINATION include
)

#--------------------------------------------------------------------

add_executable(aias_lab_skillset_node src/aias_lab_skillset_node.cpp)
target_link_libraries(aias_lab_skillset_node
  aias_lab_skillset
)
install(TARGETS
  aias_lab_skillset_node
  DESTINATION lib/${PROJECT_NAME})

#--------------------------------------------------------------------

set(PROJECT_LIBS aias_lab_skillset)

ament_export_targets(aias_lab_skillset)

#--------------------------------------------------------------------

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
