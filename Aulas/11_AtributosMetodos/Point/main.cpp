#include <iostream>

#include "Point.hpp"
#include "Segment.hpp"

void test0() {
  Point p0(1.0, 3.14);
  p0.setX(2.0);
  std::cout << p0.to_string() << std::endl;
}

void test1() {
  Point p0;
  p0.setX(2.0);
  std::cout << p0.to_string() << std::endl;
}

void test2() {
  Point p0(1.0, 3.14);
  Point p1;
  p1.clone(p0);
  std::cout << p1.to_string() << std::endl;
}

void test3() {
  Point p0(1.0, 3.14);
  Point p1(p0);
  std::cout << p1.to_string() << std::endl;
}

void test4() {
  Point p0(1.0, 3.14);
  Point p1(1.61, 2.76);
  Point p2;
  Point p3(p0);
  assert(Point::get_num_points() == 4);
}

void test5() {
  test0();
  test4();
}

void test6() {
  Point *p0 = new Point(1.0, 3.14);
  Point *p1 = new Point(1.61, 2.76);
  Point *p2 = p1;
  std::cout << p0->to_string() << std::endl;
  std::cout << p1->to_string() << std::endl;
  std::cout << p2->to_string() << std::endl;
}

void test7() {
  Point p0(1.0, 1.0);
  Point p1(2.0, 1.0);
  assert(Point::distance(&p0, &p1) == 1.0);
}

void test8() {
  Segment s(1.0, 1.0, 2.0, 1.0);
  assert(s.length() == 1.0);
  std::cout << s.to_string() << std::endl;
}

int main() {
  int option = 0;
  std::cin >> option;
  switch(option) {
    case 0:
      test0();
      break;
    case 1:
      test1();
      break;
    case 2:
      test2();
      break;
    case 3:
      test3();
      break;
    case 4:
      test4();
      break;
    case 5:
      test5();
      break;
    case 6:
      test6();
      break;
    case 7:
      test7();
      break;
    case 8:
      test7();
      break;
    default:
      std::cerr << "Opcao invalida: " << option << std::endl;
  }
}
