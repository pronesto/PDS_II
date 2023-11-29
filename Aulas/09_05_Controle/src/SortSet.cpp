#include <set>
#include <iostream>

int factR(int n) { return n < 1 ? 1 : n * factR(n-1); }

void read_set(std::set<unsigned>& s) {
  unsigned input = 0;
  while (std::cin >> input) {
    s.insert(input);
  }
}

void print_set(std::set<unsigned>& s) {
  for (unsigned u: s) {
    std::cout << factR(u) << std::endl;
  }
}

void print_setI(std::set<unsigned>& s) {
  for (std::set<unsigned>::iterator p = s.begin(); p != s.end(); p++) {
    std::cout << factR(*p) << std::endl;
  }
}

void print_setR(std::set<unsigned>& s) {
  for (auto p = s.rbegin(); p != s.rend(); p++) {
    std::cout << factR(*p) << std::endl;
  }
}

int main() {
  std::set<unsigned> s;
  read_set(s);
  print_setR(s);
}
