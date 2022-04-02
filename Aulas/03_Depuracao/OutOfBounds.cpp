#include <iostream>
#include <stdio.h>
int foo(int v) {
  int a[1];
  printf("&(a[1]): %p, &v: %p\n", &(a[1]), &v);
  a[1] = 17;
  return a[1] + v;
}
int main() {
  int x = 25;
  std::cout << foo(x) << std::endl;
}
