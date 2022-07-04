#include <iostream>

//#define NDEBUG // Should turn assert off
#include <assert.h>

#include "Stack.hpp"

template<class E, unsigned N>
void Stack<E, N>::push(E e) {
  assert(!isFull() && "The stack is full.");
  buf[_top] = e;
  _top++;
}

template<class E, unsigned N>
E Stack<E, N>::pop() {
  assert(!isEmpty() && "The stack is empty.");
  _top--;
  return buf[_top];
}

template<class E, unsigned N>
bool Stack<E, N>::isEmpty() const {
  return !_top;
}

template<class E, unsigned N>
bool Stack<E, N>::isFull() const {
  return _top == N;
}

int main() {
  const int N = 10;
  Stack<int, N> s;
  for(int i = 0; i <= N; i++) {
    s.push(i*i);
  }
  while (!s.isEmpty()) {
    std::cout << s.pop() << std::endl;
  }
}
