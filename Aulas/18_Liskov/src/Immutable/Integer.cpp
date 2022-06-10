#include <vector>
#include <iostream>

#include "Integer.hpp"

void neg(std::vector<Integer*>& src, std::vector<Integer*>& dst) {
  dst.clear();
  for (Integer* i: src) {
    dst.push_back(i->inv());
  }
}

void test00() {
  const int TEST_SIZE = 10;
  std::vector<Integer*> ints;
  for (int i = 0; i < TEST_SIZE; i++) {
    ints.push_back(new Integer(i, true));
  }
  std::vector<Integer*> negs;
  neg(ints, negs);
  for (int i = 0; i < TEST_SIZE; i++) {
    assert(*ints[i]->inv() == *negs[i]);
  }
  for (int i = 0; i < TEST_SIZE; i++) {
    delete ints[i];
    delete negs[i];
  }
}

void test01() {
  const int TEST_SIZE = 10;
  std::vector<Integer*> ints;
  for (int i = 0; i < TEST_SIZE; i++) {
    ints.push_back(new Natural(i));
  }
  std::vector<Integer*> negs;
  neg(ints, negs);
  for (int i = 0; i < TEST_SIZE; i++) {
    assert(*ints[i]->inv() == *negs[i]);
  }
  for (int i = 0; i < TEST_SIZE; i++) {
    delete ints[i];
    delete negs[i];
  }
}

int main() {
  test00();
  test01();
}
