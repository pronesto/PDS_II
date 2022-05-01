#include <iostream>

#include "Pessoa.hpp"

int main() {
  Pessoa p1("Fernando Magno", 4567729921, 10);
  Pessoa p2("Fernando Quintao", 4567729921, 10);
  Pessoa p3("Juliano Paiva", 7376390211, 10);

  std::cout << "Testando o metodo to_string:\n";
  std::cout << p1.to_string() << std::endl;
  std::cout << p2.to_string() << std::endl;
  std::cout << p3.to_string() << std::endl;

  std::cout << "Testando a comparacao entre pessoas:\n";
  std::cout << p1.mesma_pessoa(p2) << std::endl;
  std::cout << p2.mesma_pessoa(p1) << std::endl;
  std::cout << p1.mesma_pessoa(p3) << std::endl;
  std::cout << p3.mesma_pessoa(p1) << std::endl;

  std::cout << "Testando o metodo que simula o aniversario:\n";
  std::cout << p1.to_string() << std::endl;
  p1.faz_aniversario();
  std::cout << p1.to_string() << std::endl;
}
