#include <iostream>

int sumChar(char a, char b) throw (char) {
  char sumC = a + b;
  long sumL = a + b;
  if (sumC != sumL) {
    throw sumC;
  }
  return sumC;
}

void readAndSum() {
  int i0, i1;
  std::cout << "Enter two numbers: ";
  std::cin >> i0;
  std::cin >> i1;
  try {
    char c = sumChar(i0, i1);
    std::cout << "Sum = " << (int)c << std::endl;
  } catch(char e) {
    std::cout << "An exception occurred: " << (int)e << std::endl;
    readAndSum();
  }
}

int main (int argc, char** argv) {
  readAndSum();
  return 0;
}
