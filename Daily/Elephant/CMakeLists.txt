cmake_minimum_required(VERSION 4.1)

project(Elephant CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(Elephant main.cpp)

target_link_libraries(Elephant PRIVATE common)