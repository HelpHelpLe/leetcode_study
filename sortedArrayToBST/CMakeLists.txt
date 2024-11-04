cmake_minimum_required(VERSION 3.15)

project(sortedArrayToBST)

add_compile_options(-g)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/)

add_executable(main main.cc solution.cc)
