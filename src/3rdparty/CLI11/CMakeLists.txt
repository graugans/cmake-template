cmake_minimum_required (VERSION 3.10.2)
project (CLI11 VERSION 1.9.0 LANGUAGES CXX)


# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(header_files
    ${CMAKE_CURRENT_SOURCE_DIR}/include/CLI11.hpp)

add_library(${PROJECT_NAME} INTERFACE)
target_sources(${PROJECT_NAME} INTERFACE "$<BUILD_INTERFACE:${header_files}>")
target_include_directories(${PROJECT_NAME} INTERFACE include/)

