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

int main() {
  LineAdder* o = new LineAdder();
  test00(o);
  delete o;
}
