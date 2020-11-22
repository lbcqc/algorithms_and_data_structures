cmake_minimum_required(VERSION 2.8.2)

project(Dijkstra)

aux_source_directory(. SRC_LIST)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
add_executable(Dijkstra ${SRC_LIST})
