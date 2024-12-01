cmake_minimum_required(VERSION 3.10)
project(myproject)

add_executable(mytests src/main.cpp)

add_custom_target(generate_docs ALL
  COMMAND doxygen Doxyfile
  WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

find_package(Doxygen REQUIRED)