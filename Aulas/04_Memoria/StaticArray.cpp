#include <iostream>
int main() {
  int x[] = {2, 3, 5, 7, 11, 13, 17, 19};
  for (int i : x) {
    std::cout << i << std::endl;
  } 
  return 0;
}
