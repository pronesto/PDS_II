#ifndef PESSOA_H
#define PESSOA_H

#include <string>
#include <cassert>

class Pessoa {
  public:
    Pessoa(std::string nome, unsigned long cpf, unsigned char idade):
      _nome(nome), _cpf(cpf), _idade(idade) {
        assert(_cpf > 0);
        assert(_idade > 0);
    }

    std::string to_string() const;

    void faz_aniversario();

    bool mesma_pessoa(Pessoa &pessoa) const;

  private:
    std::string _nome;
    unsigned long _cpf;
    unsigned char _idade;
};

#endif
