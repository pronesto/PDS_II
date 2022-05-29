#include <vector>
#include <iostream>
#include <algorithm>

int sort_int() {
  std::vector<int> data;
  int val = 0;
  while (std::cin >> val) {
    data.push_back(val);
  }
  std::sort(data.begin(), data.end());
  for (int elem: data) {
    std::cout << elem << " ";
  }
  std::cout << std::endl;
}

int sort_str() {
  std::vector<std::string> data;
  std::string val;
  while (std::cin >> val) {
    data.push_back(val);
  }
  std::sort(data.begin(), data.end());
  for (std::string elem: data) {
    std::cout << elem << " ";
  }
  std::cout << std::endl;
}

int main() {
  int option = 0;
  std::cin >> option;
  switch (option) {
    case 0:
      sort_int();
      break;
    case 1:
      sort_str();
      break;
    default:
      std::cout << "Opcao invalida\n";
  }
}
