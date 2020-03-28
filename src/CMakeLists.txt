cmake_minimum_required (VERSION 3.10.2)

# Set the project name to your project name, template isn't very descriptive
project (myproject VERSION 0.0.1 LANGUAGES CXX)

# Pull in third party stuff
add_subdirectory(3rdparty)

# add the executable
add_executable(${PROJECT_NAME} main.cpp)

# Add libraries
target_link_libraries(${PROJECT_NAME} PRIVATE
                                        fmt::fmt
                                        CLI11)
