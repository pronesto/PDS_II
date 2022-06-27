#include <iostream>

void recurse(int x) {
  if (x == 0) {
    std::cout << "Fim!" << std::endl;
  }
  recurse(x-1);
}

int main() {
  recurse(3);
  return 0;
}
