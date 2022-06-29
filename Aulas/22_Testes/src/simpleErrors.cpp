#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

int simpleSum() {
  int a[1] = {17};
  int b[1] = {19};
  b[1] = 3;
  return a[0] + b[0];
}

// Example solution:
TEST_CASE("testing simpleSum") {
    CHECK(simpleSum() == 36);
}

int prec(int n, int m) {
  return 2 + n > m ? n : m;
}

// Example solution:
TEST_CASE("testing prec") {
    CHECK(prec(10, 11) == 13);
}

struct Data {
  int x;
};

Data* getData(int value) {
  Data d;
  d.x = value;
  return &d;
}

int simpleSum2() {
  Data *d0 = getData(1);
  Data *d1 = getData(2);
  return d0->x + d1->x;
}

// Example solution:
TEST_CASE("testing simpleSum2") {
    CHECK(simpleSum2() == 3);
}

// Finds if to_find exists in to_search. If not, return 0:
int searchArray(int to_search[], int len, int to_find) {
  int i;
  for( i = 0; i < len; ++i) {
    if ( to_search[i] == to_find) {
      return i;
    }
  }
}

// Example solution:
TEST_CASE("testing searchArray") {
  const int N = 6;
  int x[N] = {2, 3, 5, 7, 11, 13};
  CHECK(searchArray(x, N, 8) == 0);
}
