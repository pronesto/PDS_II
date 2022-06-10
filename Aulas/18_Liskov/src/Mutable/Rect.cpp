#include <vector>

#include "Rect.hpp"

void test00() {
  Rectangle rect(2.0, 3.0);
  assert(rect.getWidth() == 2.0);
  assert(rect.getHeight() == 3.0);
  assert(rect.getArea() == 6.0);
  rect.setWidth(4.0);
  assert(rect.getWidth() == 4.0);
  assert(rect.getHeight() == 3.0);
  assert(rect.getArea() == 12.0);
  rect.setHeight(5.0);
  assert(rect.getWidth() == 4.0);
  assert(rect.getHeight() == 5.0);
  assert(rect.getArea() == 20.0);
}

void test01() {
  Square sq(3.0);
  assert(sq.getWidth() == 3.0);
  assert(sq.getHeight() == 3.0);
  assert(sq.getArea() == 9.0);
  sq.setWidth(4.0);
  assert(sq.getWidth() == 4.0);
  assert(sq.getHeight() == 4.0);
  assert(sq.getArea() == 16.0);
  sq.setHeight(5.0);
  assert(sq.getWidth() == 5.0);
  assert(sq.getHeight() == 5.0);
  assert(sq.getArea() == 25.0);
}

double sumAreas(std::vector<Rectangle*>& vec) {
  double sum = 0.0;
  for (Rectangle* r: vec) {
    sum += r->getArea();
  }
  return sum;
}

void test02() {
  Rectangle *r0 = new Rectangle(2.0, 3.0);
  Rectangle *r1 = new Square(5.0);
  std::vector<Rectangle*> vec;
  vec.push_back(r0);
  vec.push_back(r1);
  assert(sumAreas(vec) == 31.0);
  delete r0;
  delete r1;
}

void incAreas(std::vector<Rectangle*>& vec, const double factor) {
  for (Rectangle* r: vec) {
    r->setHeight(r->getHeight() * factor);
  }
}

void test03() {
  Rectangle *r0 = new Rectangle(2.0, 3.0);
  Rectangle *r1 = new Square(5.0);
  std::vector<Rectangle*> vec;
  vec.push_back(r0);
  vec.push_back(r1);
  assert(sumAreas(vec) == 31.0);
  incAreas(vec, 1.1);
  assert(sumAreas(vec) == 1.1 * 31.0);
  delete r0;
  delete r1;
}

int main() {
  test00();
  test01();
  test02();
  test03();
}
