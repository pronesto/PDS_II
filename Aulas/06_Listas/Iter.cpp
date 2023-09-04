#include <set>
#include <string>
#include <vector>
#include <iostream>
int main() {
  std::string sr = "abcd";
  std::set<char> st{'a', 'b', 'c', 'd'};
  std::vector<char> vc{'a', 'b', 'c', 'd'};
  std::cout << "String\n";
  for (char c: sr) {
    std::cout << c << std::endl;
  }
  std::cout << "Set\n";
  for (char c: st) {
    std::cout << c << std::endl;
  }
  std::cout << "Vector\n";
  for (char c: vc) {
    std::cout << c << std::endl;
  }
}
