#ifndef LISTA_H
#define LISTA_H

#include <vector>

struct Lista {
  private:
    std::vector<int> _buffer;

  public:
  bool vazia() const;
  void insere(int data);
  int primeiro() const;
  void remove(int data);
  void mostra() const;

};

#endif
