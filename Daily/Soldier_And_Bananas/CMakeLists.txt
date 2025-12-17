cmake_minimum_required(VERSION 4.1)

project(Soldier_And_Bananas CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(Soldier_And_Bananas main.cpp)

target_link_libraries(Soldier_And_Bananas PRIVATE common)