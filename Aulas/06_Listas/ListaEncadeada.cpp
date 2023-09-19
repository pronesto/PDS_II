#include <iostream>

#include "ListaEncadeada.hpp"

bool Lista::vazia() const {
  return head == nullptr;
}

void Lista::insere(int data) {
  Celula* aux = new Celula;
  aux->data = data;
  aux->next = nullptr;
  if (vazia()) {
    head = aux;
    tail = aux;
  } else {
    tail->next = aux;
    tail = aux;
  }
}

int Lista::primeiro() const {
  if (vazia()) {
    std::cout << "Tentativa de ler primeiro elemento de lista vazia\n";
    return 0;
  } else {
    return head->data;
  }
}

void Lista::remove(int data) {
  if (vazia()) {
    std::cout << "Tentativa de remover elemento de lista vazia\n";
  }
  // Localizar o dado:
  Celula *current = head;
  Celula *previous = nullptr;
  while (current != nullptr && current->data != data) {
    previous = current;
    current = current->next;
  }
  // O dado estah presente na lista:
  if (current != nullptr) {
    if (previous == nullptr) {
      // Vamos apagar a cabeca da lista
      head = current->next;
    } else if (current->next == nullptr) {
      // Vamos apagar o ultimo elemento
      previous->next = nullptr;
      tail = previous;
    } else {
      // Vamos apagar um elemento do meio.
      previous->next = current->next;
    }
    delete current;
  }
}

void Lista::mostra() const {
  Celula *aux = head;
  while (aux != nullptr) {
    std::cout << aux->data << std::endl;
    aux = aux->next;
  }
}
