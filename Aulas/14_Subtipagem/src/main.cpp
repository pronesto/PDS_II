#include "Animal.hpp"

#include <vector>

void alimenta_os_animais(std::vector<Animal*> &vec) {
  for (Animal* a: vec) {
    a->come();
  }
}

void alimenta_o_animal(Animal* a) {
  a->come();
}

void alimenta_o_mamifero(Mamifero* m) {
  m->come();
}

void alimenta_o_cachorro(Cachorro* c) {
  c->come();
}

int main() {
  Animal * m0 = new Mamifero("Tigrinho");
}
