cmake_minimum_required (VERSION 3.10.2)

# Set the project name to your project name, template isn't very descriptive
project (template)


# Some useful default settings
include(cmake/StandardProjectSettings.cmake)

add_subdirectory(src)