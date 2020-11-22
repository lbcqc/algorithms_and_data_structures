#include "edge.h"
#include "gtest/gtest.h"

using namespace matrix;

TEST(EdgeTest, weight) {
  Edge edge;
  edge.setWeight(10);
  EXPECT_EQ(10, edge.getWeight());
}

TEST(EdgeTest, operator_equal) {
  Edge edge;
  edge = 10;
  EXPECT_EQ(10, edge.getWeight());
}

TEST(EdgeTest, operator_less) {
  Edge edge1, edge2;
  edge1 = 10;
  edge2 = 11;
  EXPECT_TRUE(edge1 < edge2);

  edge1 = 11;
  edge2 = 11;
  EXPECT_FALSE(edge2 < edge1);
}
