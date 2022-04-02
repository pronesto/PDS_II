#include <iostream>

int main() {
  std::string word;
  std::cin >> word;
  unsigned num_numbers = 0;
  for (const char c: word) {
    if (std::isdigit(c)) {
      num_numbers++;
    }
  }
  std::cout << num_numbers << std::endl;
}
