cmake_minimum_required(VERSION 4.1)

project(Bear_And_Big_Brother CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(Bear_And_Big_Brother main.cpp)

target_link_libraries(Bear_And_Big_Brother PRIVATE common)