// bad_alloc standard exception
#include <iostream>
#include <exception>

int main () {
  try {
    int* buf = new int[1000000000000000];
  } catch (std::exception& e) {
    std::cout << "Standard exception: " << e.what() << std::endl;
  }
  return 0;
}
