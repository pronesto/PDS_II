#include <iostream>

void sum(int* s, int* a, int* b) {
  *s = *a + *b;
}

int main() {
  int x = 2;
  int y = 3;
  int total = 0;
  sum(&x, &y, &total);
  assert(total = x + y);
}
