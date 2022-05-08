#include "Pessoa.hpp"

std::string Pessoa::to_string() const {
  return "Nome: " + _nome
    + ", CPF: " + std::to_string(_cpf)
    + ", Idade: " + std::to_string(_idade);
}

bool Pessoa::cpf_valido() const {
  if (_cpf > 99999999999) {
    return false;
  }
  std::string digits = std::to_string(_cpf);
  unsigned int sum = 0;
  for (char dig: digits) {
    sum += (dig - '0');
  }
  if (sum / 10 != sum % 10) {
    return false;
  }
  return true;
}
