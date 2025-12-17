cmake_minimum_required(VERSION 4.1)

project(Stones_On_The_Table CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(Stones_On_The_Table main.cpp)

target_link_libraries(Stones_On_The_Table PRIVATE common)