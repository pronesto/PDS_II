// The main function will be in a main.cpp file:
//
#include <iostream>

#include "point.hpp"

int main() {
  Point p0(3.14, 2.71);
  std::cout << p0.getX() << std::endl;
  Point p1(1.42, 1.61);
  std::cout << p1.getX() << std::endl;
}
