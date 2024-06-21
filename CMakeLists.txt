cmake_minimum_required(VERSION 3.10)

# Project name
project(FactoryExample)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


# Include Boost library
include(./cmake/Boost.cmake)

# Enable testing
enable_testing()

add_subdirectory(src)
add_subdirectory(tests)

message("Boost Library: ${BOOST_LIBRARIES}")
