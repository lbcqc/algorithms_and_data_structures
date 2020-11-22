#ifndef GRAPH_H_WCIKKVRF
#define GRAPH_H_WCIKKVRF

#include "edge.h"
#include "node.h"

namespace matrix {
class Graph {
 public:
  Graph() : nodeNum(0), node(nullptr), edge(nullptr) {}
  virtual ~Graph();

 public:
  void init(const int& _nodeNum);
  Edge *operator[](const int& index);
  Edge **& getEdge();
  Node *& getNode();
  const int& getNodeNum();
  std::string dump();

 private:
  void newNodeEdge();
  void freeNodeEdge();

 private:
  int nodeNum;
  Node *node;
  Edge **edge;
};
}  // namespace matrix

#endif /* end of include guard: GRAPH_H_WCIKKVRF */
