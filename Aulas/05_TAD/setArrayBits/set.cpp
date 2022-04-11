#include <climits>
#include <stdio.h>

#include "set.hpp"

Set::Set(unsigned capacity) : _capacity(capacity) {
  const unsigned size = _capacity/CHAR_BIT + 1;
  _data = new char[size];
  for (int i = 0; i < size; i++) {
    _data[i] = 0;
  }
  printf("Size in bits = %lu\n", CHAR_BIT * size * sizeof(_data[0]));
}

bool Set::contains(unsigned element) {
  unsigned index = element / CHAR_BIT;
  char offset = element % CHAR_BIT;
  char bit = 1 << offset;
  return _data[index] & bit;
}

void Set::insert(unsigned element) {
  unsigned index = element / CHAR_BIT;
  char offset = element % CHAR_BIT;
  char bit = 1 << offset;
  char mask = _data[index] | bit;
  _data[index] = mask;
} 
 
void Set::remove(unsigned element) {
  unsigned index = element / CHAR_BIT;
  char offset = element % CHAR_BIT;
  char bit = 1 << offset;
  char mask = ~bit;
  _data[index] &= mask;
}
