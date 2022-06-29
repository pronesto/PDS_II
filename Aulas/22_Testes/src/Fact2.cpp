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

TEST_CASE("Comparing the two factorial functions with INFO.") {
  for (int i = 0; i < 5; i++) {
    INFO("Value of variable: " << i);
    CHECK(whlFact(i) == recFact(i));
  }
}

TEST_CASE("Comparing the two factorial functions with CAPTURE.") {
  for (int i = 0; i < 5; i++) {
    CAPTURE(i);
    CHECK(whlFact(i) == recFact(i));
  }
}
