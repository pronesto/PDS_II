#include <iostream>

#include "Equipe.hpp"

void Equipe::mostra_membros() const {
  for (const auto& [_, pessoa]: _pessoas) {
    std::cout << pessoa.to_string() << std::endl;
  }
}

void Equipe::insere_membro(Pessoa pessoa) {
  _pessoas[pessoa.get_cpf()] = pessoa;
}

bool Equipe::contem_membro(unsigned long cpf) const {
  return _pessoas.find(cpf) != _pessoas.end();
}

void Equipe::remove_membro(unsigned long cpf) {
  if (contem_membro(cpf)) {
    _pessoas.erase(cpf);
  } else {
    std::cerr << "Chave nao presente: " << cpf << std::endl;
  }
}
