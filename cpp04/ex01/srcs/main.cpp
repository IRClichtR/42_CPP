#include "define.hpp"

int main(int ac, char **av) {

  if (!checkArgs(ac, av))
    return (1);

  Animal  **test = new Animal*[6];

  for (int i = 0 ; i < 3 ; i++) {
    
    test[i] = new Dog();
    std::cout << "[" << i << "] ";
    test[i]->makesound(); 
    std::cout << std::endl; 
  }

  std::cout << GREEN << "All dogs have been created" << RESET << std::endl;

  for (int i = 3 ; i < 6 ; i++) {
    test[i] = new Cat();
    std::cout << "[" << i << "] ";
    test[i]->makesound(); 
    std::cout << std::endl; 
  } 

  std::cout << GREEN << "All cats have been created" << RESET << std::endl;

  Dog *random (dynamic_cast<Dog*>(test[2]));
  // Cat *random2 = dynamic_cast<Cat*>(test[4]);

  std::cout << "Adress of the index [2] "<< &test[2] << std::endl;
  std::cout << "Adress of the copy of [2] " << &random << std::endl;
  random->setAnIdea("Say no to the Weaponization of Modesty!");
  std::cout << "Original Brain Idea" << std::endl; 
  dynamic_cast<Dog*>(test[2])->displayBrain();
  std::cout << "Deep Copy Brain Idea" << std::endl; 
  random->displayBrain();

  for (int i = 0 ; i < 6 ; i++)
    delete  test[i];
  delete [] test;

  // std::cout << GREEN << "All animals have been destroyed" << RESET << std::endl;
  // std::cout << GREEN << "TEST COPY OF AN ELEMENT OF THE TAB AFTER TAB DELETION" << RESET << std::endl;
  std::cout << "Adress of the Brain of index [4] " << &test->_brain << std::endl;
  // std::cout << "Adress of the copy of [4]" << &random2 << std::endl;
  // std::cout << "Adress of the Brain of index [4] " << &test2->_brain << std::endl;
  //
  return (0);
}
