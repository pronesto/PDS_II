#include <vector>
#include <iostream>
#include <algorithm>    // std::sort

int factR(int n) { return n < 1 ? 1 : n * factR(n-1); }

void read_vec(std::vector<unsigned>& v) {
  unsigned input = 0;
  while (std::cin >> input) {
    v.push_back(input);
  }
}

void print_vec(std::vector<unsigned>& v) {
  for (unsigned u: v) {
    std::cout << factR(u) << std::endl;
  }
}

void print_vecI(std::vector<unsigned>& v) {
  for (std::vector<unsigned>::iterator p = v.begin(); p != v.end(); p++) {
    std::cout << factR(*p) << std::endl;
  }
}

void print_vecA(std::vector<unsigned>& v) {
  for (auto p = v.begin(); p != v.end(); p++) {
    std::cout << factR(*p) << std::endl;
  }
}

void print_vecRI(std::vector<unsigned>& v) {
  std::vector<unsigned>::reverse_iterator p;
  for (p = v.rbegin(); p != v.rend(); p++) {
    std::cout << factR(*p) << std::endl;
  }
}

void print_vecRA(std::vector<unsigned>& v) {
  for (auto p = v.rbegin(); p != v.rend(); p++) {
    std::cout << factR(*p) << std::endl;
  }
}

int main() {
  std::vector<unsigned> v;
  read_vec(v);
  std::sort(v.begin(), v.end());
  print_vecRA(v);
}
