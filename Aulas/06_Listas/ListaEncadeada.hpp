#ifndef LISTA_H
#define LISTA_H

struct Celula {
  public:
  int data;
  Celula* next;

};

struct Lista {
  private:
  Celula* head;
  Celula* tail;

  public:
  Lista(): head(nullptr), tail(nullptr) {}
  bool vazia() const;
  void insere(int data);
  int primeiro() const;
  void remove(int data);
  void mostra() const;

};

#endif
