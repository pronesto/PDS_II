#include <climits>
#include <stdio.h>

#include "set.hpp"

Set::Set(unsigned capacity) : _capacity(capacity) {
  _data = new bool[_capacity];
  for (int i = 0; i < _capacity; i++) {
    _data[i] = false;
  } 
  printf("Size in bits = %lu\n", CHAR_BIT * _capacity * sizeof(_data[0]));
} 

bool Set::contains(unsigned element) {
  return _data[element];
} 

void Set::insert(unsigned element) {
  _data[element] = true;
}

void Set::remove(unsigned element) {
  _data[element] = false;
}
