#ifndef PESSOA_H
#define PESSOA_H

#include "Localizavel.hpp"

class Pessoa {
  public:
    Pessoa(std::string nome, unsigned long cpf): _nome(nome), _cpf(cpf) {
      std::cout << "Pessoa(" << _cpf << ", cpf)\n";
    }
    ~Pessoa() {
      std::cout << "~Pessoa(" << _cpf << ")\n";
    }
    std::string to_string() const {
      return "Nome = " + _nome + ", CPF = " + std::to_string(_cpf);
    }
    unsigned long get_cpf() const {
      return _cpf;
    }
    void set_idade(unsigned long idade) {
      _idade = idade;
    }
  private:
    std::string _nome;
    const unsigned _cpf;
  protected:
    unsigned short _idade;
};

class Assalariado: public Pessoa {
  public:
    Assalariado(std::string nome, unsigned long cpf, double salario):
      Pessoa(nome, cpf), _salario(salario) {
        std::cout << "Assalariado(nome, " << get_cpf() << ", salario)\n";
      }
    ~Assalariado() {
      std::cout << "~Assalariado(" << get_cpf() << ")\n";
    }
    double get_salario() const {
      return _salario + _idade * 100.0;
    }
    void aumenta_salario(double factor) {
      _salario += _salario * factor;
    }
    std::string to_string() const {
      return Pessoa::to_string() + ", Salario = " +
        std::to_string(get_salario());
    }
  private:
    double _salario;
};

class Empregado: public Localizavel, Assalariado {
  public:
    Empregado(std::string nome, unsigned long cpf, double salario,
        std::string logr, unsigned short numero, unsigned int cep):
      Assalariado(nome, cpf, salario), Localizavel(logr, numero, cep) {}

    std::string to_string() const {
      return Assalariado::to_string() + ", Endereco: " +
        Localizavel::to_string();
    }
};

#endif
