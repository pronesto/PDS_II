#include <iostream>

int main() {
  int x = 4;
  int *p;
  *p = 3;
  std::cout << x << ", " << *p << std::endl;
  return 0;
}
