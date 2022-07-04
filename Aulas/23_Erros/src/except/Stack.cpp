#include <iostream>

#define NDEBUG // Should turn assert off
#include <assert.h>

#include "Stack.h"

class StackException: public std::exception {
  public:
    StackException(const char* msg): _msg(msg) {}
    const char* what() const throw() {
      return _msg;
    }
  private:
    const char* _msg;
};

template<class E, unsigned N>
void Stack<E, N>::push(E e) {
  if (this->isFull()) {
    throw new StackException("The stack is full.");
  } else {
    buf[_top] = e;
    _top++;
  }
}

template<class E, unsigned N>
E Stack<E, N>::pop() {
  if (this->isEmpty()) {
    throw new StackException("The stack is empty.");
  } else {
    _top--;
    return buf[_top];
  }
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
  try {
    for(int i = 0; i <= N; i++) {
      s.push(i*i);
    }
    while (!s.isEmpty()) {
      std::cout << s.pop() << std::endl;
    }
  } catch(StackException* e) {
    std::cout << e->what() << std::endl;
  }
}
