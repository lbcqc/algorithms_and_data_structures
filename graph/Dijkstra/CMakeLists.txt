cmake_minimum_required(VERSION 2.8.2)

project(Dijkstra)

aux_source_directory(. SRC_LIST)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
add_executable(dijkstra ${SRC_LIST})

# INSTALL
install(TARGETS dijkstra DESTINATION bin)

# cppcheck
if (CPPCHECK_FOUND)
	include(${CMAKE_SOURCE_DIR}/cmake/analysis.cmake)
	add_analysis(${PROJECT_NAME} SRC_LIST)
endif()
