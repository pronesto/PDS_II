#include <vector>
#include <iostream>
#include <algorithm>

template <class T>
void readNSort() {
  std::vector<T> data;
  T val;
  while (std::cin >> val) {
    data.push_back(val);
  }
  std::sort(data.begin(), data.end());
  for (T elem: data) {
    std::cout << elem << " ";
  }
  std::cout << std::endl;
}

int main() {
  int option = 0;
  std::cin >> option;
  switch (option) {
    case 0:
      readNSort<int>();
      break;
    case 1:
      readNSort<std::string>();
      break;
    default:
      std::cout << "Opcao invalida\n";
  }
}
