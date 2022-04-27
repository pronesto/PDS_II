#include <vector>
#include <iostream>

struct Tokenizer {
  private:
    std::vector<std::string> tokens;
    unsigned token_atual;
  public:
    Tokenizer(): token_atual(0) {}
    void insira_mais_um_token(std::string token) {
      tokens.push_back(token);
    }
    bool ha_mais_tokens() const {
      return token_atual < tokens.size();
    }
    std::string proximo_token() const {
      return tokens[token_atual];
    }
    void avance_mais_um_token() {
      token_atual++;
    }
    void imprima_os_tokens_restantes() const {
      for (unsigned i = token_atual; i < tokens.size(); i++) {
        std::cout << i << ": " << tokens[i] << std::endl;
      }
    }
};

double exp(Tokenizer& tk);
double mul_exp(Tokenizer& tk);
double num_exp(Tokenizer& tk);
/**
<exp> ::= <mulexp> + <exp> 
       | <mulexp> - <exp> 
       | <mulexp>
<mulexp> ::= <numexp> / <mulexp>
          | <numexp> * <mulexp>
          | <numexp>
  */

double exp(Tokenizer& tk) {
  double m = mul_exp(tk);
  if (tk.ha_mais_tokens()) {
    std::string operador = tk.proximo_token();
    if (operador == "+") {
      tk.avance_mais_um_token();
      m += exp(tk);
    } else if (operador == "-") {
      tk.avance_mais_um_token();
      m -= exp(tk);
    }
  }
  return m;
}

double mul_exp(Tokenizer& tk) {
  double n = num_exp(tk);
  if (tk.ha_mais_tokens()) {
    std::string operador = tk.proximo_token();
    if (operador == "/") {
      tk.avance_mais_um_token();
      n /= mul_exp(tk);
    } else if (operador == "*") {
      tk.avance_mais_um_token();
      n *= mul_exp(tk);
    }
  }
  return n;
}

double num_exp(Tokenizer& tk) {
  std::string token = tk.proximo_token();
  tk.avance_mais_um_token();
  return std::stod(token);
}

int main() {
  Tokenizer tk;
  std::string token;
  while (std::cin >> token) {
    tk.insira_mais_um_token(token);
  }
  std::cout << exp(tk) << std::endl;
}
