#include <iostream>  

void swapV(int x, int y) {
  int tmp = x;
  x = y;
  y = tmp;
}

void swapP(int* x, int* y) {
  int tmp = *x;
  *x = *y;
  *y = tmp;
}

void swapR(int& x, int& y) {
  int tmp = x;
  x = y;
  y = tmp;
}

int main() {
  int a = 2;
  int b = 3;
  std::cout << "a = " << a << ", b = " << b << std::endl;
  swapP(&a, nullptr);
  std::cout << "a = " << a << ", b = " << b << std::endl;
  swapR(a, b);
  std::cout << "a = " << a << ", b = " << b << std::endl;
}
