#include "edge.h"
#include "graph.h"
#include <string>

using namespace matrix;

Graph::~Graph() {
  freeNodeEdge();
}

void Graph::init(const int& _nodeNum) {
  if (_nodeNum <= 0) {
    return;
  }

  freeNodeEdge();

  nodeNum = _nodeNum;
  newNodeEdge();

  return;
}

Edge *Graph::operator[](const int& index) {
  if (!edge || index >= nodeNum)
    return nullptr;
  return edge[index];
}

Edge **& Graph::getEdge() {
  return edge;
}

Node *& Graph::getNode() {
  return node;
}

const int& Graph::getNodeNum() {
  return nodeNum;
}

std::string Graph::dump() {
  std::string str;
  int i, j;
  str += " ";
  for (i = 0; i < nodeNum; ++i) {
    str += " " + std::to_string(i);
  }
  str += "\n";
  for (i = 0; i < nodeNum; ++i) {
    str += std::to_string(i);
    for (j = 0; j < nodeNum; ++j) {
      str += " " + std::to_string(edge[i][j].getWeight());
    }
    str += "\n";
  }
  return str;
}


void Graph::newNodeEdge() {
  node = new Node[nodeNum];
  edge = new Edge*[nodeNum];
  for (int i = 0; i < nodeNum; ++i) {
    edge[i] = new Edge[nodeNum]; 
  }
}

void Graph::freeNodeEdge() {
  if (node) {
    delete []node;
    node = nullptr;
  }
  if (!edge) {
    return;
  }
  for (int i = 0; i < nodeNum; ++i) {
    if (edge[i]) {
      delete []edge[i];
      edge[i] = nullptr;
    }
  }
  delete []edge;
  edge = nullptr;
}
