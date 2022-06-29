#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

long longRun(const unsigned N) {
  long l = 0;
  for (unsigned i = 0; i < N; i++) {
    for (unsigned j = 0; j < N; j++) {
      l++;
    }
  } 
  return l;
}

TEST_CASE("Naive multiplication 0") {
  CHECK(longRun(0) == 0);
  CHECK(longRun(1) == 1);
  CHECK(longRun(2) == 4);
  CHECK(longRun(3) == 9);
}

TEST_CASE("Naive multiplication 1") {
  CHECK(longRun(10000) == 100000000);
}

TEST_CASE("Naive multiplication 2") {
  CHECK(longRun(50000) == 2500000000);
}

TEST_CASE("Naive multiplication with timeout" * doctest::timeout(0.1)) {
  CHECK(longRun(50000) == 2500000000);
}
