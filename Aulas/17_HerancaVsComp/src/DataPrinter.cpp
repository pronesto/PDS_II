#include <iostream>

#include "DataProcessor.hpp"

class DataPrinter: public DataProcessor<std::string> {
  private:
    void start(std::vector<std::string>& data) {
      std::cout << "Tamanho da sequencia: " << data.size() << std::endl;
    }

    void eval(std::string& s) {
      std::cout << " " << s;
    }

    void stop(std::vector<std::string>& data) {
      std::cout << ".\n";
    }
};

class DataAdder: public DataProcessor<int> {
  private:
    void start(std::vector<int>& data) {
      _sum = 0;
    }

    void eval(int& s) {
      _sum += s;
    }

    void stop(std::vector<int>& data) {
      std::cout << "Soma: " << _sum << std::endl;
    }

    int _sum;
};

class DataPower: public DataProcessor<int> {
  public:
    DataPower(unsigned int pw): _power(pw) {}
  private:
    void eval(int& s) {
      int aux = s;
      s = 1;
      for (int i = 0; i < _power; i++) {
        s *= aux;
      }
    }

    int _power;
};

void test00() {
  std::vector<std::string> vec;
  vec.push_back("oi");
  vec.push_back("pessoal");
  DataProcessor<std::string> *dp = new DataPrinter();
  dp->process(vec);
}

void test01() {
  std::vector<int> vec;
  vec.push_back(1);
  vec.push_back(2);
  DataProcessor<int> *dp = new DataAdder();
  dp->process(vec);
}

void test02() {
  std::vector<int> vec;
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(5);
  DataProcessor<int> *dp = new DataPower(3);
  dp->process(vec);
  for (int i: vec) {
    std::cout << i << std::endl;
  }
}

int main() {
  test02();
}
