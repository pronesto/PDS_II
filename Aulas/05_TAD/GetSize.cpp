#include <iostream>

unsigned get_size(char* s) {
  int size = 0;
  while (s[size] != 0) {
    size++;
  }
  return size;
}

int main(int argc, char** argv) {
  int i = 0;
  while (i < argc) { 
    std::cout << get_size(argv[i]) << std::endl;
    i++;
  }
  return 0;
}
