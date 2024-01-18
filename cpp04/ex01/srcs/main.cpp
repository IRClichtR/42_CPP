#include "define.hpp"

int main(int ac, char **av) {

  if (!checkArgs(ac, av))
    return (1);

  Animal  **Maisounette = new Animal*[10];
  for (int i = 0 ; i < 5 ; i++) {

    Maisounette[i] = new Dog();
  }
    std::cout << GREEN << "All dogs have been created" << RESET << std::endl;

  for (int i = 5 ; i < 10 ; i++) {

    Maisounette[i] = new Cat();
  }
    std::cout << GREEN << "All cats have been created" << RESET << std::endl;

  for (int i = 0 ; i < 10 ; i++) {

    delete  Maisounette[i];
  }

  std::cout << GREEN << "All animals have been destroyed" << RESET << std::endl;
  delete [] Maisounette;

  return (0);
}
