#include "define.hpp"

int main(int ac, char **av) {

  if (!checkArgs(ac, av))
    return (1);

  Animal  **Maisounette = new Animal*[6];

  for (int i = 0 ; i < 3 ; i++)
    Maisounette[i] = new Dog();

  std::cout << GREEN << "All dogs have been created" << RESET << std::endl;

  for (int i = 3 ; i < 6 ; i++)
    Maisounette[i] = new Cat();

  std::cout << GREEN << "All cats have been created" << RESET << std::endl;

  Animal *random2 = Maisounette[4];

  std::cout << "Adress of the index [4] "<< &Maisounette[4] << std::endl;
  for (int i = 0 ; i < 6 ; i++)
    delete  Maisounette[i];
  delete [] Maisounette;

  std::cout << GREEN << "All animals have been destroyed" << RESET << std::endl;
  std::cout << GREEN << "TEST COPY OF AN ELEMENT OF THE TAB AFTER TAB DELETION" << RESET << std::endl;
  std::cout << "Adress of the copy " << &random2 << std::endl;
  delete random2;
  return (0);
}
