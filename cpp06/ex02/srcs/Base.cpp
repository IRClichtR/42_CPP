#include "define.hpp"

Base::Base() {}
Base::~Base() {}

Base * Base::generate(void) {

  int whatType = randomize();
  Base *ptr = NULL;

  switch (whatType) {
    default:
      break;
    case 1:
      ptr = new A();
      break ;
    case 2:
      ptr = new B();
      break ;
    case 3:
      ptr = new C();
      break ;
  }
  std::cout << GREEN << "Random generation done!" << RESET << std::endl;
  return ptr;
}

void  Base::identify(Base *p) {


  if (dynamic_cast<A*>(p))
    std::cout << "type is A" << std::endl;
  if (dynamic_cast<B*>(p))
    std::cout << "type is B" << std::endl;
  if (dynamic_cast<C*>(p))
    std::cout << "type is C" << std::endl;
  std::cout << GREEN << "Pointer identification done!" << RESET << std::endl;
}

void  Base::identify(Base& p) {

  try {

    A &typeA = dynamic_cast<A&>(p);
    static_cast<void>(typeA);
    std::cout << "type is A" << std::endl;
  }
  catch (std::exception &e) {};
  try {

    B &typeB = dynamic_cast<B&>(p);
    static_cast<void>(typeB);
    std::cout << "type is B" << std::endl;
  }
  catch (std::exception &e) {};
  try {

    C &typeC = dynamic_cast<C&>(p);
    static_cast<void>(typeC);
    std::cout << "type is C" << std::endl;
  }
  catch (std::exception &e) {};
  std::cout << GREEN << "Reference identification done!" << RESET << std::endl;
}

int randomize() {

  std::srand(std::time(0));
  int randNb = std::rand();

  return (randNb % 3 + 1);
}
