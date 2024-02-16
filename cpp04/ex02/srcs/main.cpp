#include "define.hpp"

// int main(void) {
//
//   Animal      Foo;
//   Cat         Pookie;
//   Dog         Ponyo;
//   WrongAnimal Human;
//   WrongCat    SadCat;
//
//   std::cout << " ___ Test ___ " << std::endl;
//   std::cout << Foo.getType() << std::endl;
//   Foo.makeSound();
//   std::cout << Pookie.getType() << std::endl;
//   Pookie.makeSound();
//   std::cout << Ponyo.getType() << std::endl;
//   Ponyo.makeSound();
//   std::cout << Human.getType() << std::endl;
//   Human.makeSound();
//   std::cout << SadCat.getType() << std::endl;
//   SadCat.makeSound();
//   return (0);
// }
//
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
