#include <iostream>

#define ARRAY_SIZE 4

int main() {
  int x[5] = {2, 3, 5, 7};
  int sum = 0;
  for (int i = ARRAY_SIZE - 1; i > 0; --i) {
    sum += x[i];
  }
  assert(sum == 17);
  return 0;
}
