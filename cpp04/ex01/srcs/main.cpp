#include "define.hpp"

int main(int ac, char **av) {

  if (!checkArgs(ac, av))
    return (1);

  Cat         john("Jean-Papaye");
  Dog         jack("Ponyo");
  WrongCat    franketienne("Franketienne");

  while (1) {

    std::string usrInput = getUsrInput();

    if (!usrInput.compare("Cat"))
      john.makesound();
    else if (!usrInput.compare("Dog"))
      jack.makesound();
    else if (!usrInput.compare("WrongCat"))
      franketienne.makesound();
    else if (!usrInput.compare("exit"))
      break ;

  }

  return (0);
}
