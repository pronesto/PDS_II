#ifndef LOCALIZAVEL_H
#define LOCALIZAVEL_H

class Localizavel {
  public:
    Localizavel(std::string logr, unsigned short numero, unsigned int cep):
      _logradouro(logr), _numero(numero), _cep(cep) {
      std::cout << "Localizavel(" + _logradouro + ")\n";
    }

    ~Localizavel() {
      std::cout << "~Localizavel(" + _logradouro + ")\n";
    }

    std::string to_string() const {
      return _logradouro + ", " + std::to_string(_numero) + ", CEP: " +
        std::to_string(_cep);
    }

    bool eh_em_Minas_Gerais() const {
      return _cep >= 30000000 && _cep <= 39999999;
    }

    static const unsigned int MAIOR_CEP;
  private:
    std::string _logradouro;
    unsigned short _numero;
    unsigned int _cep;
};

const unsigned int Localizavel::MAIOR_CEP = 90000000;

#endif
