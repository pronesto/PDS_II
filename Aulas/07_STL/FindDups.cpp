#include <iostream>
#include <fstream>
#include <vector>
#include <set>

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
      std::set<int> numbers;
      std::vector<int> duplicates;
      while (infile >> n) {
        if (numbers.find(n) == numbers.end()) {
          numbers.insert(n);
        } else {
          duplicates.push_back(n);
        }
      }
      for (int n: duplicates) {
        std::cout << n << " ";
      }
      std::cout << std::endl;
      duplicates.clear();
      numbers.clear();
    }
  }
  return 0;
}
