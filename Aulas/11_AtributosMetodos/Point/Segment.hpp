#ifndef SEGMENT_H
#define SEGMENT_H

#include "Point.hpp"

class Segment {
  public:
    Segment(double x0, double y0, double x1, double y1) {
      _p0 = new Point(x0, y0);
      _p1 = new Point(x1, y1);
    }
    ~Segment() {
      delete _p0;
      delete _p1;
    }
    std::string to_string() const {
      return _p0->to_string() + " -> " + _p1->to_string();
    }
    double length() const {
      return Point::distance(_p0, _p1);
    }
  private:
    Point *_p0, *_p1;
};

#endif
