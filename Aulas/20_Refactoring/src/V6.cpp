#include <iostream>

class Transformer {
  public:
    virtual int transf(std::string& s) const = 0;
};

class Evaluator {
  public:
    virtual int eval(int num, int acc) const = 0;
};

class Accumulator {
  public:
    Accumulator(Transformer* t, Evaluator* e): _acc(0), _t(t), _e(e) {}

    ~Accumulator() {
      delete _t;
      delete _e;
    }

    void add(std::string s) {
      int num = _t->transf(s);
      _acc = _e->eval(num, _acc);
    }

    int get() const {
      return _acc;
    }

  private:
    int _acc;
    Transformer* _t;
    Evaluator* _e;
};

class LineNum: public Transformer {
  public:
    int transf(std::string& s) const {
      for (char c: s) {
        if (!isdigit(c)) {
          return 0;
        }
      }
      return std::stoi(s);
    }
};

class LineLen: public Transformer {
  public:
    int transf(std::string& s) const {
      return s.size();
    }
};

class Add: public Evaluator {
  public:
    int eval(int num, int acc) const {
      return num + acc;
    }
};

class Max: public Evaluator {
  public:
    int eval(int num, int acc) const {
      return num > acc ? num : acc;
    }
};

void test00(Accumulator* o) {
  o->add("2");
  assert(o->get() == 2);
  o->add("4");
  assert(o->get() == 6);
  o->add("four");
  assert(o->get() == 6);
  o->add("18");
  assert(o->get() == 24);
}

void test01(Accumulator* o) {
  o->add("aa");
  assert(o->get() == 2);
  o->add("abb");
  assert(o->get() == 3);
  o->add("a");
  assert(o->get() == 3);
  o->add("xx");
  assert(o->get() == 3);
}

void test02(Accumulator* o) {
  o->add("aa");
  assert(o->get() == 2);
  o->add("abb");
  assert(o->get() == 5);
  o->add("a");
  assert(o->get() == 6);
  o->add("xx");
  assert(o->get() == 8);
}

void test03(Accumulator* o) {
  o->add("2");
  assert(o->get() == 2);
  o->add("40");
  assert(o->get() == 40);
  o->add("four");
  assert(o->get() == 40);
  o->add("18");
  assert(o->get() == 40);
}

int main() {
  Accumulator a0(new LineNum(), new Add());
  test00(&a0);

  Accumulator a1(new LineLen(), new Max());
  test01(&a1);

  Accumulator a2(new LineLen(), new Add());
  test02(&a2);

  Accumulator a3(new LineNum(), new Max());
  test03(&a3);
}
