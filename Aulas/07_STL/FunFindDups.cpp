#include <iostream>
#include <fstream>
#include <vector>
#include <set>

void print_dups(std::vector<int>& v) {
  std::set<int> elements;
  std::set<int> dups;
  for (int n: v) {
    if (elements.find(n) != elements.end()) {
      dups.insert(n);
    } else {
      elements.insert(n);
    }
  }
  for (int n: dups) {
    std::cout << n << std::endl;
  }
}

int main(int argc, char** argv) {
  if (argc != 2) {
    std::cerr << "Syntax: cmd <file_name>\n";
    return 1;
  } else {
    std::ifstream infile(argv[1]);
    if (!infile.is_open()) {
      std::cerr << "Failed to open file\n";
      return 2;
    } else {
      int n;
      std::vector<int> numbers;
      while (infile >> n) {
        numbers.push_back(n);
      }
      print_dups(numbers);
    }
  }
  return 0;
}
