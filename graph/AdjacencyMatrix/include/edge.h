#ifndef EDGE_H_UU0HZAPC
#define EDGE_H_UU0HZAPC

namespace matrix {
class Edge {
 public:
  Edge() : weight(0) {}
  virtual ~Edge() {}

 public:
  int getWeight();
  void setWeight(int _weight);
  void operator=(const int& _weight);
  bool operator<(const Edge& e);

 private:
  int weight;
};
}  // namespace matrix

#endif /* end of include guard: EDGE_H_UU0HZAPC */
