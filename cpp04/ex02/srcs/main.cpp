#include "define.hpp"

int main()
{
  const Animal* meta = new Animal();
  const Animal* j = new Dog();
  const Animal* i = new Cat();

  std::cout << meta->getType() << " " << std::endl;
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;

  meta->makeSound();
  j->makeSound();
  i->makeSound(); //will output the cat sound!
  // ...
  delete meta;
  delete j;
  delete i;
  return 0;
}
