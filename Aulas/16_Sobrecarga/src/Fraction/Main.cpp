#include <vector>
#include <iostream>
#include <algorithm>
#include "Fraction.hpp"

template <class T> void read(std::vector<T>& data) {
  T val;
  while (std::cin >> val) {
    data.push_back(val);
  }
}

template <class T> void print(std::vector<T>& data) {
  bool isFirst = true;
  for (T elem: data) {
    if (isFirst) {
      isFirst = false;
    } else {
      std::cout << ", ";
    }
    std::cout << elem;
  }
  std::cout << std::endl;
}

template <class T> T sum(std::vector<T>& data) {
  T sum = 0;
  for (T val: data) {
    sum = sum + val;
  }
  return sum;
}

void test00() {
  std::vector<Fraction> vec;
  read(vec);
  std::sort(vec.begin(), vec.end());
  print(vec);
}

void test01() {
  Fraction f0(2, 3), f1(5, 2), f2(2, 3);
  std::cout << (f0 < f1) << std::endl;
  std::cout << (f0 > f1) << std::endl;
  std::cout << (f0 <= f2) << std::endl;
  std::cout << (f0 >= f2) << std::endl;
  std::cout << (f0 < f2) << std::endl;
  std::cout << (f0 > f2) << std::endl;
}

void test02() {
  Fraction f0(4, 2);
  int x = f0;
  std::cout << x << std::endl;
}

void test03() {
  Fraction f0(7, 3);
  int i = f0;
  float f = f0;
  double d = f0;
  std::cout << i << std::endl;
  std::cout << f << std::endl;
  std::cout << d << std::endl;
}

void test04() {
  Fraction f0 = 1;
  Fraction f1 = 2;
  std::cout << f0 << std::endl;
  std::cout << f1 << std::endl;
}

void test05() {
  std::vector<Fraction> vec;
  read(vec);
  Fraction f = sum(vec);
  std::cout << f << std::endl;
}

int main() {
  int option = 0;
  std::cin >> option;
  switch (option) {
    case 0:
      test00();
      break;
    case 1:
      test01();
      break;
    case 2:
      test02();
      break;
    case 3:
      test03();
      break;
    case 4:
      test04();
      break;
    case 5:
      test05();
      break;
  }
}
