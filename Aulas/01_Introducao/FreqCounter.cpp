#include <map>
#include <iostream>

int main() {
  std::string word;
  std::map<std::string, unsigned int> words;
  while (std::cin >> word) {
    words[word]++;
  }
  for (const auto& [word, qtd]: words) {
    std::cout << word << ": " << qtd << std::endl;
  }
}
