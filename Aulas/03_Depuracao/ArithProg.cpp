#include <iostream>
void arithProg(int* limit, int* sum) {
  *sum = 0;
  for (int i = 0; i < *limit; i++) {
    *sum += i;
  } 
}
int main() {
  int N = 10;
  arithProg(&N, &N);
  std::cout << N << std::endl;
}
