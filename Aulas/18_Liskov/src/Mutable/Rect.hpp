#include "assert.h"
class Rectangle {
  public:
    Rectangle(double width, double height) {
      setWidth(width);
      setHeight(height);
    }
    double getWidth() const {
      return _width;
    }
    double getHeight() const {
      return _height;
    }
    virtual void setWidth(double width) {
      assert(width >= 0.0 && "Width cannot be negative");
      _width = width;
    }
    virtual void setHeight(double height) {
      assert(height >= 0.0 && "Height cannot be negative");
      _height = height;
    }
    double getArea() const {
      return _width * _height;
    }
  private:
    double _width;
    double _height;
};

class Square: public Rectangle {
  public:
    Square(double side): Rectangle(side, side) {
    }
    void setWidth(double side) {
      assert(side >= 0.0 && "Width cannot be negative");
      Rectangle::setWidth(side);
      Rectangle::setHeight(side);
    }
    void setHeight(double side) {
      assert(side >= 0.0 && "Height cannot be negative");
      Rectangle::setWidth(side);
      Rectangle::setHeight(side);
    }
};
