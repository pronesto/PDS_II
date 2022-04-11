#ifndef SET_H
#define SET_H

struct Set {
  Set (unsigned);
  bool contains(unsigned);
  void insert(unsigned);
  void remove(unsigned);
  private:
  bool *_data;
  unsigned _capacity;
};

#endif
