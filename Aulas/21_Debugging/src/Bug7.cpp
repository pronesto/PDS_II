#include <iostream>
int mdc(int m, int n) {
  assert(n != 0);
  if (m % n) {
    return n;
  } else {
    return mdc(n, m - n);
  }
}
int main() {
  assert(mdc(24, 16) == 4);
}
