#ifndef DATA_H
#define DATA_H

class Fraction {
  int num, den;
  public:
  Fraction(): Fraction(0, 1) {}
  Fraction(int n): Fraction(0, n) {}
  Fraction(int n, int d);
  bool operator < (const Fraction& f) const;
  friend std::ostream& operator << (std::ostream& is, Fraction& f);
  friend std::istream& operator >> (std::istream& is, Fraction& f);
  bool operator > (const Fraction& rhs) const {
    return rhs < *this;
  }
  bool operator <= (const Fraction& rhs) const {
    return !(*this > rhs);
  }
  bool operator >= (const Fraction& rhs) const {
    return !(*this < rhs);
  }
  Fraction& operator += (const Fraction& f);
  Fraction operator + (const Fraction& f) {
    int newDen = den * f.den;
    int newNum = num * f.den + f.num * den;
    Fraction ans(newNum, newDen);
    return ans;
  }
  operator int() const { return num/den; }
  operator float() const { return num/(float)den; }
  operator double() const { return num/(double)den; }
  operator bool() const { return num != 0; }
  private:
    int gcd(int x, int y);
};

#endif
