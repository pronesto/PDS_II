#include <iostream>
#include <exception>

class MyException: public std::exception {
  public:
    const char* what() const throw() {
      return "My exception happened";
    }
};

int main () {
  try {
    throw new MyException();
  } catch (MyException* e) {
    std::cout << e->what() << std::endl;
  } catch (std::exception* e) {
    std::cout << e->what() << std::endl;
  }
  return 0;
}
