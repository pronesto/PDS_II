#ifndef EQUIPE_H
#define EQUIPE_H

#include <map>
#include "Pessoa.hpp"

class Equipe {
  public:
    void mostra_membros() const;

    void insere_membro(Pessoa pessoa);

    bool contem_membro(unsigned long cpf) const;

    void remove_membro(unsigned long cpf);

  private:
    std::map<unsigned long, Pessoa> _pessoas;
};

#endif
