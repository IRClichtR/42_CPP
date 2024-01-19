#include "define.hpp"

int main(int ac, char **av) {

  if (!checkArgs(ac, av))
    return (1);

  Animal  **test = new Animal*[6];

  for (int i = 0 ; i < 3 ; i++)
    test[i] = new Dog();

  std::cout << GREEN << "All dogs have been created" << RESET << std::endl;

  for (int i = 3 ; i < 6 ; i++)
    test[i] = new Cat();

  std::cout << GREEN << "All cats have been created" << RESET << std::endl;

  Animal *random = test[2];
  Animal *random2 = test[4];

  std::cout << "Adress of the index [2] "<< &test[2] << std::endl;
  std::cout << "Adress of the index [4] "<< &test[4] << std::endl;
  for (int i = 0 ; i < 6 ; i++)
    delete  test[i];
  delete [] test;

  std::cout << GREEN << "All animals have been destroyed" << RESET << std::endl;
  std::cout << GREEN << "TEST COPY OF AN ELEMENT OF THE TAB AFTER TAB DELETION" << RESET << std::endl;
  std::cout << "Adress of the copy of [2] " << &random << std::endl;
  std::cout << "Adress of the copy of [4]" << &random2 << std::endl;

  return (0);
}
