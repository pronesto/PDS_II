#include <iostream>

class Accumulator {
  public:
    Accumulator(): _acc(0) {}

    virtual ~Accumulator() {}

    virtual void add(std::string s) = 0;

    int get() const {
      return _acc;
    }

  protected:
    int _acc;
};

class LineAdder: public Accumulator {
  public:
    void add(std::string s) {
      bool eh_num = true;
      for (char c: s) {
        if (!isdigit(c)) {
          eh_num = false;
          break;
        }
      }
      int num = eh_num ? std::stoi(s): 0;
      _acc += num;
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

class LineMax: public Accumulator {
  public:
    void add(std::string s) {
      int num = s.size();
      _acc = num > _acc ? num: _acc;
    }
};

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

class LineLenAdder: public Accumulator {
  public:
    void add(std::string s) {
      int num = s.size();
      _acc += num;
    }
};

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

class LineNumMax: public Accumulator {
  public:
    void add(std::string s) {
      bool eh_num = true;
      for (char c: s) {
        if (!isdigit(c)) {
          eh_num = false;
          break;
        }
      }
      int num = eh_num ? std::stoi(s): 0;
      _acc = num > _acc ? num: _acc;
    }
};

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
  Accumulator* a = new LineAdder();
  test00(a);
  delete a;

  a = new LineMax();
  test01(a);
  delete a;

  a = new LineLenAdder();
  test02(a);
  delete a;

  a = new LineNumMax();
  test03(a);
  delete a;
}
