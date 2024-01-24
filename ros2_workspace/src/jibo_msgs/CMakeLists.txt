cmake_minimum_required(VERSION 3.5)
project(jibo_msgs)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
  set(CMAKE_CXX_STANDARD_REQUIRED ON)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(ament_index_cpp REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)
find_package(std_srvs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/JiboAction.msg"
  "msg/JiboAsrCommand.msg"
  "msg/JiboAsrResult.msg"
  "msg/JiboRemote.msg"
  "msg/JiboState.msg"
  "msg/JiboVec3.msg"
  DEPENDENCIES std_msgs
)

set(dependencies "ament_index_cpp" "std_msgs" "std_srvs")

ament_package()
