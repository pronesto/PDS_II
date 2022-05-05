#ifndef POINT_H
#define POINT_H

#include <cmath>
#include <string>

class Point {
  public:
    Point(double xx, double yy): x(xx), y(yy) {
      num_points++;
    }
    Point(const Point& p): Point(p.x, p.y) {}
    Point(): Point(0.0, 0.0) {}
    void clone(const Point& p) {
      x = p.x;
      y = p.y;
    }
    ~Point() {
      std::cout << "Destrutor\n";
      num_points--;
    }
    void setX(double x) {
      this->x = x;
    }
    void setY(double y) {
      this->y = y;
    }
    std::string to_string() const {
      return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
    }
    static unsigned get_num_points() {
      return num_points;
    }
    static double distance(Point *p1, Point *p2) {
      double x = p1->x - p2->x;
      double y = p1->y - p2->y;
      return sqrt(x*x + y*y);
    }
  private:
    static unsigned num_points;
    double x, y;
};

unsigned Point::num_points = 0;

#endif
