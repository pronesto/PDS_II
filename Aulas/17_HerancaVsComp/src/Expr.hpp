#ifndef EXPR_H
#define EXPR_H

#include <vector>
#include <algorithm>

class Expr {
  public:
    virtual double value() const = 0;
    virtual ~Expr() {}
};

class UnOp: public Expr {
  public:
    UnOp(Expr* expr): _expr(expr) {}
    virtual ~UnOp() {
      delete _expr;
    }
  protected:
    Expr* _expr;
};

class BinOp: public Expr {
  public:
    BinOp(Expr* esq, Expr* dir): _esq(esq), _dir(dir) {}
    virtual ~BinOp() {
      delete _esq;
      delete _dir;
    }
  protected:
    Expr* _esq;
    Expr* _dir;
};

class TerOp: public Expr {
  public:
    TerOp(Expr* esq, Expr* mid, Expr* dir): _esq(esq), _mid(mid), _dir(dir) {}
    virtual ~TerOp() {
      delete _esq;
      delete _mid;
      delete _dir;
    }
  protected:
    Expr* _esq;
    Expr* _mid;
    Expr* _dir;
};

class Num: public Expr {
    double _num;
  public:
    Num(double num): _num(num) {}
    double value() const {
      return _num;
    }
};

class Neg: public UnOp {
  public:
    Neg(Expr* expr): UnOp(expr) {}
    double value() const {
      return -1.0 * _expr->value();
    }
};

class Square: public UnOp {
  public:
    Square(Expr* expr): UnOp(expr) {}
    double value() const {
      return _expr->value() * _expr->value();
    }
};

class Add: public BinOp {
  public:
    Add(Expr* esq, Expr* dir): BinOp(esq, dir) {}
    double value() const {
      return _esq->value() + _dir->value();
    }
};

class Mul: public BinOp {
  public:
    Mul(Expr* esq, Expr* dir): BinOp(esq, dir) {}
    double value() const {
      return _esq->value() * _dir->value();
    }
};

class Median: public TerOp {
  double median;
  public:
    Median(Expr* esq, Expr* mid, Expr* dir): TerOp(esq, mid, dir), median(0.0) {
      double e_value = esq->value();
      double m_value = mid->value();
      double d_value = dir->value();
      std::vector<double> vec{e_value, m_value, d_value};
      std::sort(vec.begin(), vec.end());
      median = vec[1];
    }
    double value() const {
      return median;
    }
};

#endif
