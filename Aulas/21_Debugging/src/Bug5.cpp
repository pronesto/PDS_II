#include <vector>
#include <iostream>

int max(std::vector<int>& v) {
  int ans = v[0];
  for (int i = 0; i < v.size(); i++) {
    if (v[i] > ans) {
      ans = v[i];
    }
  }
  return ans;
}

int main() {
  std::vector<int> v;
  int num;
  while (std::cin >> num) {
    v.push_back(num);
  }
  std::cout << max(v) << std::endl;
}
