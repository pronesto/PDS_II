#include <iostream>
int mdc(int m, int n) {
  assert(n != 0);
  if (m % n == 0) {
    return n;
  } else {
    return m > n ? mdc(n, m - n) : mdc(n, m);
  }
}
int main() {
  int const NUM_TRIALS = 9;
  for (int n = 2; n < NUM_TRIALS - 1; n++) {
    for (int m = n + 1; m < NUM_TRIALS; m++) {
      std::cout << m << ", " << n << std::endl;
      std::cout << mdc(m, n) << std::endl;
    }
  }
}
