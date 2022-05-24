#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {
  const std::string _nome;
  public:
    Animal(std::string nome): _nome(nome) {}

    virtual void come() const = 0;

    std::string get_nome() const {
      return _nome;
    }
};

class Mamifero: public Animal {
  public:
    Mamifero(std::string nome): Animal(nome) {}

    void come() const override {
      std::cout << "O mamifero " << get_nome() << " come mamando\n";
    }

    void mama() const {
      std::cout << "O mamifero " << get_nome() << " estah mamando\n";
    }
};

class Cachorro: public Mamifero {
  public:
    Cachorro(std::string nome): Mamifero(nome) {}

    void come() const override {
      std::cout << "O cachorro " << get_nome() << " come latindo\n";
    }
};

#endif
