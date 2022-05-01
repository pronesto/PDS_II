#ifndef PESSOA_H
#define PESSOA_H

#include <string>

struct Pessoa {
  std::string nome;
  unsigned long cpf;
  unsigned char idade;
};

void init(Pessoa *p, std::string n, unsigned long cpf, unsigned short i);

std::string to_string(Pessoa p);

void faz_aniversario(Pessoa* p);

bool mesma_pessoa(Pessoa *p0, Pessoa *p1);

#endif
