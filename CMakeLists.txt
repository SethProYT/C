cmake_minimum_required(VERSION 3.10)

# Set the project name
project(My_mind C)

# Set the C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

# Include directories
set(INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
include_directories(${INCLUDE_DIR})

# Add an executable
add_executable(THEMIND main.c)