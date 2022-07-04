#ifndef STACK_H
#define STACK_H

template<class E, unsigned N> class Stack {
  public:
    Stack(): _top(0) {}
    void push(E e);
    E pop();
    bool isEmpty() const;
    bool isFull() const;
  private:
    E buf[N];
    unsigned _top;
};

#endif
