#include <iostream>

#include "ListaVetor.hpp"

bool Lista::vazia() const {
  return _buffer.empty();
}

void Lista::insere(int data) {
  _buffer.push_back(data);
}

int Lista::primeiro() const {
  if (vazia()) {
    std::cout << "Tentativa de remover elemento de lista vazia\n";
    return 0;
  } else {
    return _buffer[0];
  }
}

void Lista::remove(int data) {
  if (vazia()) {
    std::cout << "Tentativa de remover elemento de lista vazia\n";
  } else {
    std::vector<int>::iterator it =
      std::find(_buffer.begin(), _buffer.end(), data);
    if (it != _buffer.end()) {
      _buffer.erase(it);
    }
  }
}

void Lista::mostra() const {
  for (int i = 0; i < _buffer.size(); i++) {
    std::cout << _buffer[i] << std::endl;
  }
}
