#include <iostream>
  
struct Point {
  float x;
  float y;
  // This method is just an incantation.
  // We will learn about it later in the course!
  virtual void dummy() {}
};

struct Index2D {
  int i;
  int j;
};

int main() {
  Point point1;
  point1.x = 3.14;
  point1.y = 2.71;
  std::cout << point1.x << ", " << point1.y << std::endl;
  Index2D *i2d = dynamic_cast<Index2D*>(&point1);
  std::cout << i2d->i << ", " << i2d->j << std::endl;
}
