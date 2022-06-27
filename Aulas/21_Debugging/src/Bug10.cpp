// Allocate a buffer to store 30 CPFs
//
#include <iostream>
int main() {
  const char NUM_CPFs = 20;
  const char SIZE_CPF = 12;
  char BUFFER_SIZE = NUM_CPFs * SIZE_CPF + 1;
  char buffer[BUFFER_SIZE];
  for (int i = 0; i < NUM_CPFs; i++) {
    for (int j = 0; j < SIZE_CPF - 1; j++) {
      buffer[i*SIZE_CPF + j] = '0';
    }
    buffer[(i+1)*SIZE_CPF - 1] = '.';
  }
  buffer[NUM_CPFs * SIZE_CPF] = '\0';
  std::cout << buffer << std::endl;
}
