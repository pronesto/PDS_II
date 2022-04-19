#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <set>

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
  bool operator < (const Point& otherPoint) const {
    return (norm() < otherPoint.norm());
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
      std::set<Point> points;
      double x, y;
      while (infile >> x >> y) {
        Point point(x, y);
        if (points.find(point) == points.end()) {
          points.insert(point);
        } else {
          std::cout << "Repeated point = " << point.to_string() << std::endl;
          points.clear();
          return 0;
        }
      }
      std::cout << "No repeated points were found.\n";
    }
  }
  return 0;
}
