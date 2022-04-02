#include <iostream>

#define CUBE(x) (x)*(x)*(x)

int main() {
  int i = 0;
  int x = 2;
  int sum = 0;
  while (i++ < 100) {
    sum += CUBE(x);
  }
  std::cout << sum << std::endl;
  return 0;
}
