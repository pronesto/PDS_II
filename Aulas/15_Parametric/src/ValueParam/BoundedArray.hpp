#ifndef BOUNDED_ARRAY_H
#define BOUNDED_ARRAY_H
template <class T, int N> class BoundedArray {
    T memblock [N];
  public:
    void set (int x, T value);
    T get (int x);
};
#endif
