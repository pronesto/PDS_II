#include <iostream>

using Point = double[2];
// typedef double Point[2];
int main() {
  Point point1;
  Point point2;
  point1[0] = 3.14;
  point1[1] = 2.76;
  point2[0] = point1[1];
  std::cout << point1[1] << std::endl;
  std::cout << point2[0] << std::endl;
}
