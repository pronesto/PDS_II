#include <iostream>
#include "Fraction.hpp"

std::istream& operator >> (std::istream& is, Fraction& dt) {
  is >> dt.num >> dt.den;
  return is;
}

std::ostream& operator << (std::ostream& os, Fraction& dt) {
  os << dt.num << "/" << dt.den;
  return os;
}

bool Fraction::operator < (const Fraction& f) const {
  const double commonDen = den * f.den;
  return (num * f.den)/commonDen < (f.num * den)/commonDen;
}

Fraction& Fraction::operator += (const Fraction& f) {
  int newDen = den * f.den;
  int newNum = num * f.den + f.num * den;
  den = newDen;
  num = newNum;
  return *this;
}

Fraction::Fraction(int x, int y) {
  int div = gcd(x, y);
  num = x/div;
  den = y/div;
}

int Fraction::gcd(int x, int y) {
  if (y == 0) {
    return x;
  } else {
    if (y > x) {
      return gcd(y, x);
    } else {
      int r = x / y;
      return gcd(y, x - r * y);
    } 
  } 
}
