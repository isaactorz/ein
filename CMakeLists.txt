cmake_minimum_required(VERSION 3.10) # reasonable default?

project(ein)

add_library(${PROJECT_NAME} INTERFACE)

target_include_directories(${PROJECT_NAME} INTERFACE include)

set_target_properties(${PROJECT_NAME} PROPERTIES
  CXX_STANDARD 20
  )