cmake_minimum_required(VERSION 3.5)
project(isae_robot_skillset)

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
#--------------------------------------------------

include_directories(include)

#--------------------------------------------------------------------

add_library(isae_robot_skillset
  src/Resource.cpp
  src/Node.cpp
  src/NodeDebug.cpp
  src/Data.cpp
  src/Event.cpp
  src/Skill.cpp
)

target_link_libraries(isae_robot_skillset)
ament_target_dependencies(isae_robot_skillset rclcpp std_msgs isae_robot_skillset_interfaces)

install(DIRECTORY include/
  DESTINATION include)

install(
  TARGETS isae_robot_skillset
  EXPORT isae_robot_skillset
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib
  RUNTIME DESTINATION bin
  INCLUDES DESTINATION include
)

#--------------------------------------------------------------------

add_executable(isae_robot_node src/isae_robot_node.cpp)
target_link_libraries(isae_robot_node
  isae_robot_skillset
)
install(TARGETS
  isae_robot_node
  DESTINATION lib/${PROJECT_NAME})

#--------------------------------------------------------------------

set(PROJECT_LIBS isae_robot_skillset)

ament_export_targets(isae_robot_skillset)

#--------------------------------------------------------------------

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
