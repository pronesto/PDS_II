#include "Pessoa.hpp"

void init(Pessoa *p, std::string n, unsigned long cpf, unsigned short i) {
  p->nome = n;
  p->cpf = cpf;
  p->idade = i;
}

std::string to_string(Pessoa p) {
  return "Nome: " + p.nome + ", CPF: " + std::to_string(p.cpf) + ", Idade: " +
    std::to_string(p.idade);
}

void faz_aniversario(Pessoa* p) {
  p->idade++;
}

bool mesma_pessoa(Pessoa *p0, Pessoa *p1) {
  return p0->cpf == p1->cpf;
}
