cmake_minimum_required(VERSION 3.5)
project(isae_robot_skillset_interfaces)

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

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

#--------------------------------------------------
find_package(rosidl_default_generators REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(std_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
#========== GENERIC ==========
  # ----- Data -----
  "msg/DataRequest.msg"
  # ----- Event -----
  "msg/EventRequest.msg"
  "msg/EventResponse.msg"
  # ----- SkillSet -----
  "msg/SkillsetStatus.msg"
  "msg/ResourceState.msg"
  # ----- Skill -----
  "msg/SkillInterrupt.msg"
  # "msg/SkillResult.msg"
  # "msg/SkillTransition.msg"
#========== SPECIFIC ==========
# ----- data pose -----
  "msg/DataPose.msg"
  "msg/DataPoseResponse.msg"

# ----- Skill detect_target -----
  "msg/SkillDetectTargetInput.msg"
  "msg/SkillDetectTargetOutput.msg"
  "msg/SkillDetectTargetRequest.msg"
  "msg/SkillDetectTargetResponse.msg"
  
  "msg/SkillDetectTargetStatus.msg"
# ----- Skill move_to -----
  "msg/SkillMoveToInput.msg"
  
  "msg/SkillMoveToRequest.msg"
  "msg/SkillMoveToResponse.msg"
  "msg/SkillMoveToProgress.msg"
  "msg/SkillMoveToStatus.msg"
# ----- Skill take_picture -----
  "msg/SkillTakePictureInput.msg"
  
  "msg/SkillTakePictureRequest.msg"
  "msg/SkillTakePictureResponse.msg"
  
  "msg/SkillTakePictureStatus.msg"
# ----- Skill track_target -----
  "msg/SkillTrackTargetInput.msg"
  
  "msg/SkillTrackTargetRequest.msg"
  "msg/SkillTrackTargetResponse.msg"
  "msg/SkillTrackTargetProgress.msg"
  "msg/SkillTrackTargetStatus.msg"

  DEPENDENCIES builtin_interfaces geometry_msgs std_msgs
)
#--------------------------------------------------

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
