#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cmath>

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

bool comparePoints(Point *p1, Point *p2) {
  return p1->norm() < p2->norm();
}

bool hasEqualPoints(std::vector<Point*>& points) {
  if (points.size() <= 1) {
    return false;
  } else {
    std::sort(points.begin(), points.end(), comparePoints);
    for (int i = 0, j = 1; j < points.size(); i++, j++) {
      if (points[i]->x == points[j]->x && points[i]->y == points[j]->y) {
        return true;
      }
    }
    return false;
  }
}

int main(int argc, char** argv) {
  if (argc != 2) {
    std::cerr << "Syntax: cmd <file_name>\n";
    return 1;
  } else {
    std::vector<Point*> vec;
    std::ifstream infile(argv[1]);
    if (!infile.is_open()) {
      std::cerr << "Failed to open file\n";
      return 2;
    }
    double x, y;
    while (infile >> x >> y) {
      vec.push_back(new Point(x, y));
    }
    std::cout << "Has two equal points? " << hasEqualPoints(vec) << std::endl;
    vec.clear();
  }
  return 0;
}
