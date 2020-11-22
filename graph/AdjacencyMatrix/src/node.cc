#include "node.h"

using namespace matrix;


void Node::setName(const std::string& _name) {
  name = _name;
}

const std::string&  Node::getName() {
  return name;
}
