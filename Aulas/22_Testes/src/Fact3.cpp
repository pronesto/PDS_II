#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
int whlFact(int number) {
  int fact = 1;
  while (number > 0) {
    fact *= number--;
  }
  return fact;
}
int recFact(int number) {
  return number > 1 ? recFact(number - 1) * number : 1;
}
TEST_CASE("Comparing the two factorial functions.") {
  for (int i = 0; i < 5; i++) {
    WARN(whlFact(i) == recFact(i+1));
  }
}
