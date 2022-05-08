#include <iostream>

#include "Pessoa.hpp"

int main() {
  // CPFs validos:
  //
  Pessoa p0("Fernando", 24548079041, 12);
  Pessoa p1("Miocolis", 26350524098, 12);
  Pessoa p2("Piomolho", 62497041083, 12);
  // CPF invalido:
  //
  p1.set_CPF(24548079041);
  p2.set_CPF(26350524098);
  p0.set_CPF(62497041083);
}
