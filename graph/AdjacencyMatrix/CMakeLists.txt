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
