#include <iostream>

int factF(int n) {
  int a = 1;
  for (int i = 2; i <= n; i++) {
    a *= i;
  }
  return a;
}

int factW(int n) {
  int a = 1;
  while (n > 1) {
    a *= n;
    n--;
  }
  return a;
}

int factDoW(int n) {
  if (n < 1) {
    return 1;
  } else {
    int a = 1;
    do {
      a *= n;
      n--;
    } while (n > 1);
    return a;
  }
}

int factR(int n) {
  return n < 1 ? 1 : n * factR(n-1);
}

int main() {
  int n;
  std::cin >> n;
  std::cout << factF(n) << std::endl;
  std::cout << factW(n) << std::endl;
  std::cout << factDoW(n) << std::endl;
  std::cout << factR(n) << std::endl;
}
