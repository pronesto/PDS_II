#include <iostream>
#include <fstream>
bool contains_str(std::ifstream *file, std::string query) {
  std::string line;
  if (file && file->is_open()) {
    while (std::getline(*file, line)) {
      if (line.find(query) != -1) {
        std::cout << line << std::endl;
        return true;
      }
    }
  }
  return false;
}
int main() {
  std::ifstream infile("file.txt");
  std::cout << contains_str(&infile, "important") << std::endl;
}
