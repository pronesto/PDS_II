#include <iostream>

class C {
  public:
    C(const C &c): x(c.x) {
      std::cout << "Criando [Copy Ctor] objeto C com valor " << x << std::endl;
    }
    C(int xx): x(xx) {
      std::cout << "Criando objeto C com valor " << x << std::endl;
    }
    ~C() {
      std::cout << "Destruindo objeto C com valor " << x << std::endl;
    }
    int x;
};

void goo(C *c) {
  std::cout << "Dentro de goo\n";
}

int main() {
  C c6(6);
  goo(&c6);
  std::cout << "Depois que goo retorna\n";
  return 0;
}
