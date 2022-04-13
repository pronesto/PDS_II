#include <iostream>

#include "Lista.hpp"

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
    std::cout << "Tentativa de remover elemento de lista vazia\n";
    return 0;
  } else {
    return head->data;
  }
}

void Lista::remove(int data) {
  if (vazia()) {
    std::cout << "Tentativa de remover elemento de lista vazia\n";
  }
  Celula *current = head;
  Celula *previous = nullptr;
  while (current != nullptr) {
    if (current->data == data) {
      if (previous == nullptr) { // HEAD
        head = current->next;
      } else if (current->next == nullptr) { //TAIL
        previous->next = nullptr;
        tail = previous;
      } else {
        previous->next = current->next;
      }
      delete current;
      return;
    }
    previous = current;
    current = current->next;
  }
}

void Lista::mostra() const {
  Celula *aux = head;
  while (aux != nullptr) {
    std::cout << aux->data << "\t";
    aux = aux->next;
  }
  std::cout << std::endl;
}
