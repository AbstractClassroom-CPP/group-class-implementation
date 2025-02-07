# CMakeLists.txt
# CMake configuration file for the ParserProject

cmake_minimum_required(VERSION 3.31)

project(GroupProject)

# Set C++ standard to 17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# FetchContent module for downloading dependencies
include(FetchContent)

# Add include directories for headers
include_directories(include)

# Set output directory for binaries
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Add the Parser executable
add_executable(GroupDriver
    src/Group/Group.cpp
    src/Group/CyclicGroup.cpp
    src/main.cpp
)

# Set optimization flags for Release build type
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3")

# Ensure the build type is set to Release by default if not provided
if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()
