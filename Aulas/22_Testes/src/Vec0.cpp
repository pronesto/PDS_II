#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <vector>

TEST_CASE("vectors can be sized and resized") {
  std::vector<int> v(5);
  REQUIRE(v.size() == 5);
  REQUIRE(v.capacity() >= 5);
  SUBCASE("adding to the vector increases it's size") { // Subcase 1
    v.push_back(1);
    CHECK(v.size() == 6);
    CHECK(v.capacity() >= 6);
  }
  SUBCASE("reserving increases just the capacity") { // Subcase 2
    v.reserve(6);
    CHECK(v.size() == 5);
    CHECK(v.capacity() >= 6);
  }
}
