#include <vector>
#include <chrono>
#include <iostream>

long sum_copy(std::vector<int> v) {
  long sum = 0;
  for (int i: v) {
    sum += i;
  }
  return sum;
}

long sum_ref(std::vector<int>& v) {
  long sum = 0;
  for (int i: v) {
    sum += i;
  }
  return sum;
}

int main() {
  std::chrono::steady_clock::time_point begin, end;
  unsigned vec_size;
  std::cin >> vec_size;

  std::vector<int> v;
  for (int i = 0; i < vec_size; i++) {
    v.push_back(i);
  }
  begin = std::chrono::steady_clock::now();

  std::cout << sum_copy(v) << std::endl;

  end = std::chrono::steady_clock::now();
  std::cout << "Tempo sum_copy = " <<
    std::chrono::duration_cast<std::chrono::microseconds>
    (end - begin).count() << "[us]" << std::endl;

  begin = std::chrono::steady_clock::now();

  std::cout << sum_ref(v) << std::endl;

  end = std::chrono::steady_clock::now();
  std::cout << "Tempo sum_ref = " <<
    std::chrono::duration_cast<std::chrono::microseconds>
    (end - begin).count() << "[us]" << std::endl;
}
