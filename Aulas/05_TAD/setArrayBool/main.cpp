#include <iostream>

#include "set.hpp"

int main() {
  Set set0(10);
  //
  // Test insert and contains:
  set0.insert(2);
  set0.insert(3);
  set0.insert(5);
  std::cout << "contains 1 " << set0.contains(1) << std::endl;
  std::cout << "contains 2 " << set0.contains(2) << std::endl;
  std::cout << "contains 3 " << set0.contains(3) << std::endl;
  std::cout << "contains 4 " << set0.contains(4) << std::endl;
  std::cout << "contains 5 " << set0.contains(5) << std::endl;
  //
  // Test remove and contains:
  std::cout << "------\n";
  set0.remove(1);
  set0.remove(3);
  set0.remove(5);
  std::cout << "contains 1 " << set0.contains(1) << std::endl;
  std::cout << "contains 2 " << set0.contains(2) << std::endl;
  std::cout << "contains 3 " << set0.contains(3) << std::endl;
  std::cout << "contains 4 " << set0.contains(4) << std::endl;
  std::cout << "contains 5 " << set0.contains(5) << std::endl;
}
