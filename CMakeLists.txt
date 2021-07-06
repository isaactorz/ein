cmake_minimum_required(VERSION 3.10) # reasonable default?

project(ein)

option(ENABLE_TESTING OFF)

add_library(${PROJECT_NAME} INTERFACE)

target_include_directories(${PROJECT_NAME} INTERFACE include)

set_target_properties(${PROJECT_NAME} PROPERTIES
  CXX_STANDARD 20
  )

if (ENABLE_TESTING)
  enable_testing()
  add_subdirectory(tests)
endif()