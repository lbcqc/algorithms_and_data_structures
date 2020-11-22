#include "edge.h"

using namespace matrix;

int Edge::getWeight() { return weight; }

void Edge::setWeight(int _weight) { weight = _weight; }

void Edge::operator=(const int& _weight) { weight = _weight; }

bool Edge::operator<(const Edge& e) {
  if (weight < e.weight) {
    return true;
  }
  return false;
}
