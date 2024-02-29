#include "define.hpp"

int main() {

  Base * ptr = Base::generate();
  Base::identify(*ptr);
  Base::identify(ptr);
  return (0);
}
