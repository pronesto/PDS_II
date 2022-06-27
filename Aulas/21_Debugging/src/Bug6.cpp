#include <iostream>
int fact(int n) {
  return n ? n * fact(n-1) : 1;
}
int main() {
  int n = 0;
  while (std::cin >> n) {
    std::cout << n << ": " << fact(n) << std::endl;
  }
  return 0;
}
