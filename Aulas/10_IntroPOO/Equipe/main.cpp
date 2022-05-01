#include <map>
#include <iostream>

#include "Pessoa.hpp"
#include "Equipe.hpp"

int main() {
  Equipe equipe;
  unsigned long cpf1 = 1000000;
  unsigned long cpf2 = 1010101;
  Pessoa p1("Fernando", cpf1, 20);
  Pessoa p2("Fernando Quintao", cpf1, 20);
  Pessoa p3("Giovanie", cpf2, 20);

  // Testa insere e mostra:
  //
  equipe.insere_membro(p1);
  equipe.insere_membro(p2);
  equipe.insere_membro(p3);
  equipe.mostra_membros();

  // Testa contem:
  //
  if (equipe.contem_membro(cpf1)) {
    std::cout << "A equipe contem o CPF " << cpf1 << std::endl;
  }
  if (!equipe.contem_membro(cpf1 + 1)) {
    std::cout << "A equipe nao contem o CPF " << (cpf1 + 1) << std::endl;
  }

  // Testa remove:
  //
  equipe.remove_membro(cpf1);
  equipe.remove_membro(cpf1);
  equipe.mostra_membros();
  return 0;
}
