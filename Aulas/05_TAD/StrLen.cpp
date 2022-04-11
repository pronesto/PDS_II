#include <string.h>
#include <iostream>
  
int main(int argc, char** argv) {
  int i = 0;
  while (i < argc) {
    std::cout << strlen(argv[i]) << std::endl;
    i++;
  }
  return 0;
}
