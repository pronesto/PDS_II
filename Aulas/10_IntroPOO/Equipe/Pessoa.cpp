#include "Pessoa.hpp"

std::string Pessoa::to_string() const {
  return "Nome: " + _nome + ", CPF: " + std::to_string(_cpf) + ", Idade: " +
    std::to_string(_idade);
}

void Pessoa::faz_aniversario() {
  _idade++;
}

bool Pessoa::mesma_pessoa(Pessoa &pessoa) const {
  return this->_cpf == pessoa._cpf;
}
