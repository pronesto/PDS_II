#ifndef POINT
#define POINT

// The header file point.h:
//
struct Point {
  Point (double xx, double yy) : x(xx), y(yy) {}
  double getX();
  double getY();
  std::string toString();
  private:
  double x;
  double y;
};

#endif
