#include <iostream>
#include <limits>
#include <vector>

int find_min(std::vector<int> xs, std::size_t begin) {
  int min = std::numeric_limits<int>::max();
  for (std::size_t i = begin; i < xs.size(); i++) {
    int x = xs.at(i); // Verifica limites!
    if (x < min) {
      min = x;
    }
  }
  return min;
}

int main() {
  std::vector<int> xs = {60, 17, 21, 44, 2};
  std::cout << find_min(xs, 0) << std::endl;
  return 0;
}
