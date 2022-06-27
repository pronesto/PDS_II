#include <iostream>

#define ARRAY_SIZE 4

int main() {
  int x[5] = {2, 3, 5, 7};
  int begin = 1;
  int end = 2;
  int sum = 0;
  for (int i = begin; i < end; i++) {
    sum += x[i];
  }
  assert(sum == 8);
  return 0;
}
