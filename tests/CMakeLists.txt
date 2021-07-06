cmake_minimum_required(VERSION 3.10)

find_package(GTest CONFIG REQUIRED)

project(tests)

add_executable(${PROJECT_NAME} 
  tests.cpp
  )

target_link_libraries(${PROJECT_NAME}
  GTest::gtest
  GTest::gtest_main
  ein
)

set_target_properties(${PROJECT_NAME} PROPERTIES
  CXX_STANDARD 20
  )