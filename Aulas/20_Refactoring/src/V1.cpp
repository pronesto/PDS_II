#include <iostream>

class LineAdder {
  public:
    LineAdder(): _acc(0) {}
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

    int get() const {
      return _acc;
    }
  private:
    int _acc;
};

void test00(LineAdder* o) {
  o->add("2");
  assert(o->get() == 2);
  o->add("4");
  assert(o->get() == 6);
  o->add("four");
  assert(o->get() == 6);
  o->add("18");
  assert(o->get() == 24);
}

class LineMax {
  public:
    LineMax(): _acc(0) {}
    void add(std::string s) {
      int num = s.size();
      _acc = num > _acc ? num: _acc;
    }

    int get() const {
      return _acc;
    }
  private:
    int _acc;
};

void test01(LineMax* o) {
  o->add("aa");
  assert(o->get() == 2);
  o->add("abb");
  assert(o->get() == 3);
  o->add("a");
  assert(o->get() == 3);
  o->add("xx");
  assert(o->get() == 3);
}

int main() {
  LineAdder* la = new LineAdder();
  test00(la);
  delete la;

  LineMax* lm = new LineMax();
  test01(lm);
  delete lm;
}
