#include <iostream>
class X {
  public:
  void print() { std::cout << "X\n"; }
};
class Y: public X {
  public:
  void print() override { std::cout << "Y\n"; }
};
int main() {
  X *x = new X();
  X *y = new Y();
  x->print();
  y->print();
}
