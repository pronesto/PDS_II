#ifndef PESSOA_H
#define PESSOA_H

#include <string>

class Pessoa {
  public:
    Pessoa(): _nome(""), _cpf(0), _idade(0) {}

    Pessoa(std::string nome, unsigned long cpf, unsigned short idade):
      _nome(nome), _cpf(cpf), _idade(idade) {}

    std::string to_string() const;

    void faz_aniversario();

    bool mesma_pessoa(Pessoa &pessoa) const;

    unsigned long get_cpf() const {
      return _cpf;
    }

  private:
    std::string _nome;
    unsigned long _cpf;
    unsigned short _idade;
};

#endif
