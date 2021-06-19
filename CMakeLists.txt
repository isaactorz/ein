cmake_minimum_required(VERSION 3.10) # reasonable default?

project(ein)

add_library(${PROJECT_NAME}
  source/Geometry.hpp
  source/Warnings.hpp
  )
