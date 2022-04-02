#include <stdio.h>
#include <iostream>

unsigned* getMem() {
  unsigned x[10];
  int i;
  for (i = 0; i < 10; i++) {
    x[i] = i;
  }
  return x;
} 

int main () {
  unsigned *p1 = getMem();
  unsigned *p2 = getMem();
  printf("&p1: %p, &p2: %p\n", p1, p2);
  std::cout << p2[0] << std::endl;
  p1[0] = 2;
  std::cout << p2[0] << std::endl;
  return 0;
}
