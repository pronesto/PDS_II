#ifndef PESSOA_H
#define PESSOA_H

#include <string>
#include <cassert>

class Pessoa {
  public:
    Pessoa(std::string n, unsigned long c, unsigned short i):
      _nome(n), _cpf(c), _idade(i) {
        assert(idade_valida());
        assert(cpf_valido());
    }

    std::string to_string() const;

    std::string getNome() const {
      return _nome;
    }

    unsigned long getCPF() const {
      return _cpf;
    }

    unsigned short getIdade() const {
      return _idade;
    }

    void faz_aniversario() {
      _idade++;
      assert(idade_valida());
    }

    void set_CPF(unsigned long cpf) {
      _cpf = cpf;
      assert(cpf_valido());
    }

  private:
    std::string _nome;
    unsigned long _cpf;
    unsigned short _idade;

    bool idade_valida() const {
      return _idade <= 120;
    }

    bool cpf_valido() const;
};

#endif
