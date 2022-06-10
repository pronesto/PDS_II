#include <vector>

#include "Rect.hpp"

void test00() {
  Rectangle rect0(2.0, 3.0);
  assert(rect0.getWidth() == 2.0);
  assert(rect0.getHeight() == 3.0);
  assert(rect0.getArea() == 6.0);
}

void test01() {
  Square sq0(3.0);
  assert(sq0.getWidth() == 3.0);
  assert(sq0.getHeight() == 3.0);
  assert(sq0.getArea() == 9.0);
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

void incAreas(
    std::vector<Rectangle*>& src,
    std::vector<Rectangle*>& dst,
    const double factor
) {
  dst.clear();
  for (Rectangle* r: src) {
    dst.push_back(new Rectangle(r->getWidth(), r->getHeight() * 1.1));
  }
}

void test03() {
  Rectangle *r0 = new Rectangle(2.0, 3.0);
  Rectangle *r1 = new Square(5.0);
  std::vector<Rectangle*> vec;
  vec.push_back(r0);
  vec.push_back(r1);
  std::vector<Rectangle*> dst;
  assert(sumAreas(vec) == 31.0);
  incAreas(vec, dst, 1.1);
  assert(sumAreas(dst) == 1.1 * 31.0);
  delete r0;
  delete r1;
}

void test04() {
  Rectangle *r0 = new Rectangle(2.0, 3.0);
  Rectangle *r1 = new Square(5.0);
  std::vector<Rectangle*> vec;
  vec.push_back(r0);
  vec.push_back(r1);
  std::vector<Rectangle*> dst;
  assert(sumAreas(vec) == 31.0);
  incAreas(vec, dst, 1.1);
  assert(sumAreas(dst) == 1.1 * 31.0);
  for (Rectangle* r: dst) {
    delete r;
  }
  delete r0;
  delete r1;
}

int main() {
  test00();
  test01();
  test02();
  test03();
  test04();
}
