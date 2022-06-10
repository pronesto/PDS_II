#ifndef INTEGER_H
#define INTEGER_H

class Integer {
  public:
    Integer(unsigned long i, bool positive=true): _i(i), _positive(positive) {}

    virtual Integer* inv() const {
      return new Integer(_i, !_positive);
    }

    bool operator == (const Integer& i) const {
      return i._i == _i && i._positive == _positive;
    }

    std::string toString () const {
      return (_positive ? "+" : "-") + std::to_string(_i);
    }
  private:
    const unsigned long _i;
    const bool _positive;
};

class Natural: public Integer {
  public:
    Natural(unsigned long i): Integer(i) {}
    Integer* inv() const {
      std::cout << "Natural numbers don't have inverses.\n";
      exit(1);
    }
};

#endif
