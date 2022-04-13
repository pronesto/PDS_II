#include <iostream>
#include <cassert>

#include "ListaEncadeada.hpp"

int main() {
  Lista lista;

  // Propriedade 1: toda lista eh criada vazia:
  //
  assert(lista.vazia());

  // Propriedade 2: o primeiro elemento inserido eh o primeiro elemento da
  // lista:
  //
  lista.insere(111);
  assert(lista.primeiro() == 111);
  lista.insere(222);
  assert(lista.primeiro() == 111);
  lista.mostra();

  // Teste 3: remover o primeiro elemento:
  //
  lista.remove(111);
  assert(lista.primeiro() == 222);

  // Propriedade 3: ao remover um elemento que nao estah na lista, a lista
  // permanece inalterada:
  //
  lista.remove(333);
  assert(lista.primeiro() == 222);
  assert(!lista.vazia());

  // Propriedade 4: ao remover todos os elementos da lista, ela estah vazia:
  //
  lista.remove(222);
  assert(lista.vazia());

  return 0;
}
