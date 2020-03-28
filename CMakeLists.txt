cmake_minimum_required (VERSION 3.10.2)

# Set the project name to your project name, template isn't very descriptive
project (template)


# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


# Some useful default settings
include(cmake/StandardProjectSettings.cmake)

# allow for static analysis options
set(ENABLE_CLANG_TIDY ON)
include(cmake/StaticAnalyzers.cmake)

add_subdirectory(src)