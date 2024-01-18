#include "define.hpp"

int main(int ac, char **av) {

  if (!checkArgs(ac, av))
    return (1);

  const Animal       *Jean = new Cat();
  const Animal       *Ponyo = new Dog();
  const Animal       *Franketienne = new Animal();
  const WrongAnimal  *Bisounours = new WrongAnimal();
  const WrongAnimal  *Zoulounours = new WrongCat();

  // while (1) {
  //
  //   std::string usrInput = getUsrInput();
  //
  //   if (!usrInput.compare("Cat"))
  //     Jean->makesound();
  //   else if (!usrInput.compare("Dog"))
  //     Ponyo->makesound();
  //   else if (!usrInput.compare("Animal"))
  //     Franketienne->makesound();
  //   else if (!usrInput.compare("WrongCat"))
  //     Zoulounours->makesound();
  //   else if (!usrInput.compare("WrongAnimal"))
  //     Bisounours->makesound();
  //   else if (!usrInput.compare("exit"))
  //     break ;
  //
  // }
  //
  // delete Jean;
  // delete Ponyo;
  // delete Franketienne;
  // delete Bisounours;
  // delete Zoulounours;

  return (0);
}
