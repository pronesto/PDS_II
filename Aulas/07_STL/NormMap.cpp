#include <iostream>
#include <fstream>
#include <cmath>
#include <map>

struct Point { 
  Point(const double xx, const double yy): x(xx), y(yy) {}
  const double x;
  const double y;
  const double norm() const {
    return sqrt(x*x + y*y);
  }
  std::string to_string() const {
    return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
  }
};

int main(int argc, char** argv) {
  if (argc != 2) {
    std::cerr << "Syntax: cmd <file_name>\n";
    return 1;
  } else {
    std::ifstream infile(argv[1]);
    if (!infile.is_open()) {
      std::cerr << "Failed to open file\n";
      return 2;
    } else {
      std::map<double, size_t> norms = {};
      double x, y;
      while (infile >> x >> y) {
        Point point(x, y);
        norms[point.norm()]++;
      }
      for (auto const& [norm, point]: norms) {
        std::cout << norm << ": " << point << std::endl;
      } 
    }
  }
  return 0;
}
