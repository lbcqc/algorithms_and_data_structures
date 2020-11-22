#include <graph.h>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  cout << "== hello matrix demo" << endl;

  matrix::Graph graph;
  graph.init(3);
  graph[0][1] = 1;
  graph[1][2] = 1;
  string str = graph.dump();
  cout << str << endl;

  return 0;
}
