#include <iostream>

using namespace std;

class Base { 
  public:
    Base() {
      cout << "Base Constructor Called\n";
    }
    virtual ~Base() {
      cout << "Base Destructor called\n";
    }
};

class Derived1: public Base {
  public:
    Derived1() {
      cout << "Derived constructor called\n";
    }
    ~Derived1() {
      cout << "Derived destructor called\n";
    }
};

int main() {
  Base *b = new Derived1();
  delete b;
}
