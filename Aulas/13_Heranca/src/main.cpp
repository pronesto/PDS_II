#include <iostream>

#include "Localizavel.hpp"
#include "Pessoa.hpp"

void test0() {
  Pessoa p("Fernando", 356372);
  Assalariado a("Princas", 823746, 4543.03);
  std::cout << p.to_string() << std::endl;
  std::cout << a.to_string() << std::endl;
}

void test1() {
  Assalariado a("Princas", 823746, 4543.03);
  a.set_idade(42);
  std::cout << a.get_salario() << std::endl;
  std::cout << a.to_string() << std::endl;
}

void test2() {
  Localizavel l0("Rua dos Bobos", 0, 33418021);
  std::cout << l0.to_string() << std::endl;
}

void test3() {
  std::cout << std::to_string(Localizavel::MAIOR_CEP) << std::endl;
}

void test4() {
  Empregado e("Gualberto", 24443736000, 2300, "Rua dos bobos", 130, 31240901);
  std::cout << e.to_string() << std::endl;
}

int main() {
  int option = 0;
  std::cin >> option;
  switch (option) {
    case 0:
      test0();
      break;
    case 1:
      test1();
      break;
    case 2:
      test2();
      break;
    case 3:
      test3();
      break;
    case 4:
      test4();
      break;
    default:
      std::cerr << "Opcao invalida: " << option << std::endl;
  }
  return 0;
}
