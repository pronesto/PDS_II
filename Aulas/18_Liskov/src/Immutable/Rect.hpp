#include "assert.h"

class Rectangle {
  public:
    Rectangle(double width, double height): _width(width), _height(height) {}
    double getWidth() const {
      return _width;
    }
    double getHeight() const {
      return _height;
    }
    double getArea() const {
      return _width * _height;
    }
  private:
    const double _width;
    const double _height;
};

class Square: public Rectangle {
  public:
    Square(double side): Rectangle(side, side) {}
};
