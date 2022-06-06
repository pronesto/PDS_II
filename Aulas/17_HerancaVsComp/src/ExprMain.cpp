#include <iostream>

#include "Expr.hpp"

void test00() {
  Expr* expr = new Add(new Num(3.14), new Neg(new Num(2.61)));
  std::cout << expr->value() << std::endl;
}

void test01() {
  Expr* expr = new Mul(new Num(3.14), new Square(new Num(2.61)));
  std::cout << expr->value() << std::endl;
}

void test02() {
  Expr* expr0 = new Mul(new Num(3.14), new Square(new Num(2.61)));
  Expr* expr1 = new Add(new Num(3.14), new Neg(new Num(2.61)));
  Expr* expr2 = new Num(0.0);
  std::cout << (new Median(expr0, expr1, expr2))->value() << std::endl;
}

int main() {
  test00();
  test01();
  test02();
}
