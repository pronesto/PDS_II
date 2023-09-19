#include <vector>
#include <chrono>
#include <iostream>

unsigned find_least_div(std::vector<unsigned>& primes, const unsigned N) {
  for (unsigned prime: primes) {
    if (prime * prime > N) {
      break;
    }
    if (N % prime == 0) {
      return prime;
    }
  }
  return 1;
}

void gen_primes(std::vector<unsigned>& primes, const unsigned N) {
  primes.push_back(2);
  for (unsigned candidate = 3; candidate < N; candidate += 2) {
    if (find_least_div(primes, candidate) == 1) {
      primes.push_back(candidate);
    }
  }
}

void measure_time(std::vector<unsigned>& primes, const unsigned N) {
  std::chrono::steady_clock::time_point begin, end;
  begin = std::chrono::steady_clock::now();
  gen_primes(primes, N);
  end = std::chrono::steady_clock::now();
  std::cerr << "Tempo: " <<
    std::chrono::duration_cast<std::chrono::microseconds>
    (end - begin).count() << "usec" << std::endl;
}

int main(int argc, char** argv) {
  if (argc != 2) {
    std::cerr << "Sintaxe: ./a.out N\n";
    return 1;
  } else {
    const unsigned N = std::stol(argv[1]);
    std::vector<unsigned> primes;
    measure_time(primes, N);
    for (unsigned c: primes) {
      std::cout << c << std::endl;
    }
  }
}
