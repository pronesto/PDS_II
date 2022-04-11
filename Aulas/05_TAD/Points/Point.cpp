// The implementation file point.cpp:
//
#include <string>

#include "point.hpp"
  
double Point::getX() {
  return x;
}

double Point::getY() {
  return y;
}

std::string Point::toString() {
  return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}
