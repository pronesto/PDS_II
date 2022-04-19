#include <iostream>
#include <vector>
int main(int argc, char** argv) {
  std::vector<int> vec;
  // Read the data in the file:
  int data;
  while (std::cin >> data) {
    vec.push_back(data);
  }
  // Print the results
  for (auto d: vec) {
    std::cout << d << " ";
  }
  std::cout << std::endl;
  return 0;
}
