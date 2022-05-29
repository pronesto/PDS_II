#include <iostream>
#include <assert.h>
#include "BoundedArray.hpp"
template <class T, int N> void BoundedArray<T,N>::set (int x, T value) {
  assert(x >= 0 && x < N);
  memblock[x]=value;
}
template <class T, int N> T BoundedArray<T,N>::get (int x) {
  assert(x >= 0 && x < N);
  return memblock[x];
}
using namespace std;
int main () {
  BoundedArray <int,5> myints;
  BoundedArray <double,5> myfloats;
  myints.set (0,100);
  myfloats.set (3,3.1416);
  cout << myints.get(0) << '\n';
  cout << myfloats.get(6) << '\n';
  return 0;
}
