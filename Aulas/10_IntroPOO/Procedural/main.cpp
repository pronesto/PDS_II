#include <iostream>

#include "Pessoa.hpp"

int main() {
  Pessoa p1, p2, p3;
  
  init(&p1, "Fernando Magno", 4567729921, 10);
  init(&p2, "Fernando Quintao", 4567729921, 10);
  init(&p3, "Juliano Paiva", 7376390211, 10);

  std::cout << "Testando o metodo to_string:\n";
  std::cout << to_string(p1) << std::endl;
  std::cout << to_string(p2) << std::endl;
  std::cout << to_string(p3) << std::endl;

  std::cout << "Testando a comparacao entre pessoas:\n";
  std::cout << mesma_pessoa(&p1, &p2) << std::endl;
  std::cout << mesma_pessoa(&p2, &p1) << std::endl;
  std::cout << mesma_pessoa(&p1, &p3) << std::endl;
  std::cout << mesma_pessoa(&p3, &p1) << std::endl;

  std::cout << "Testando o metodo que simula o aniversario:\n";
  std::cout << to_string(p1) << std::endl;
  faz_aniversario(&p1);
  std::cout << to_string(p1) << std::endl;
}
