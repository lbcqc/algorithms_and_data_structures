#ifndef NODE_H_VIMQCSZN
#define NODE_H_VIMQCSZN

#include <iostream>

namespace matrix {
class Node {
 public:
  Node() : name("NULL") {}
  Node(const std::string& _name) : name(_name) {}
  virtual ~Node() {}

 public:
  void setName(const std::string& _name);
  const std::string& getName();

 private:
  std::string name;
};
}  // namespace matrix

#endif /* end of include guard: NODE_H_VIMQCSZN */
