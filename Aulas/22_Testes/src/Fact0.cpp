#include <assert.h>
int factorial(int number) {
  return number <= 1 ? number : factorial(number - 1) * number;
}
void testFactorial() {
  int t0 = factorial(1);
  assert(t0 == 1 && "Error with factorial(1)");
}
int main() {
  testFactorial();
}
