cmake_minimum_required(VERSION 2.8.2)

project(adjacency_matrix)

add_library(adjacency_matrix
  src/edge.cc
  src/graph.cc
  src/node.cc
)

target_include_directories(adjacency_matrix PUBLIC 
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(adjacency_matrix_demo 
  src/main.cc
) 

target_link_libraries(adjacency_matrix_demo PUBLIC 
  adjacency_matrix
)

add_executable(adjacency_matrix_unittest
  src/edge_unittest.cc
  src/graph_unittest.cc
  src/node_unittest.cc
)

target_link_libraries(adjacency_matrix_unittest PUBLIC 
  adjacency_matrix
  gtest_main
)

add_test(adjacency_matrix adjacency_matrix_unittest)

# INSTALL
install(TARGETS adjacency_matrix_demo RUNTIME DESTINATION bin)
install(TARGETS adjacency_matrix_unittest RUNTIME DESTINATION bin)
install(TARGETS adjacency_matrix ARCHIVE DESTINATION lib)
install(DIRECTORY include/ DESTINATION include/AdjacencyMatrix)

# cppchec
if (CPPCHECK_FOUND)
	aux_source_directory(src/ SRC_LIST)
	include(${CMAKE_SOURCE_DIR}/cmake/analysis.cmake)
	add_analysis(${PROJECT_NAME} SRC_LIST)
endif()
