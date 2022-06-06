#ifndef DATA_PROCESSOR_H
#define DATA_PROCESSOR_H

#include <vector>

template <class T> class DataProcessor {
  public:
    void process(std::vector<T>& data) {
      start(data);
      for (T& e: data) {
        eval(e);
      }
      stop(data);
    }

  private:
    virtual void start(std::vector<T>& data) {};
    virtual void stop(std::vector<T>& data) {};
    virtual void eval(T& e) = 0;
};

#endif
