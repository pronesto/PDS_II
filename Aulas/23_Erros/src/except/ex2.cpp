#include <iostream>

int sumChar(char a, char b) throw (char) {
  char sumC = a + b;
  long sumL = a + b;
  if (sumC != sumL) {
    throw sumC;
  }
  return sumC;
}

int main (int argc, char** argv) {
  if (argc != 3) {
    std::cout << "Sintaxe: sum [c1] [c2]\n";
    return 1;
  } else {
    try {
      char c = sumChar(atoi(argv[1]), atoi(argv[2]));
      std::cout << "Sum = " << (int)c << std::endl;
    } catch (char e) {
      std::cout << "An exception occurred: " << (int)e << std::endl;
      return e;
    }
  }
  return 0;
}
