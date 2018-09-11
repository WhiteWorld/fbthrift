cmake_minimum_required(VERSION 3.5)
add_definitions(-std=c++14)
#set (CMAKE_CXX_FLAGS "-std=c++14 -lssl")
include(ThriftLibrary.cmake)

include_directories(/fbthrift/)
include_directories(/usr/include)
add_subdirectory(if)
add_subdirectory(cpp2)
