#include "define.hpp"

int main() {

  Animal** test = new Animal*[6];

  for (int i = 0; i < 6/2; i++) {
    test[i] = new Cat();
    std::cout << "[" << i << "] ";
    test[i]->makeSound();
    std::cout << std::endl;
  }

  for (int i = 3; i < 6; i++) {
    test[i] = new Dog();
    std::cout << "[" << i << "] ";
    test[i]->makeSound();
    std::cout << std::endl;
  }

  std::cout << RED << " ___ TEST1: Erase all Animal tab ___ " << RESET << std::endl;
  for (int i = 0 ; i < 6 ; i++)
    delete test[i];
  delete [] test;
  std::cout << RED << " ___ TEST1: Done! ___ " << RESET << std::endl;

  std::cout << std::endl;

  std::cout << RED << " ___ TEST2: persistence of copies __ " << RESET << std::endl;

  Cat* C = new Cat;
  std::cout << "Cat adress = " << C << std::endl;

  std::cout << RED << " ___ add additional idea in Cat Brain ___ " << RESET << std::endl;
  std::string idea = "Cat Supremacy";
  C->newIdea(idea);
  std::cout << "Cat Brain" << std::endl;
  C->displayBrain();
  Cat* copyCat = new Cat(*C);
  std::cout << "copyCat adress = " << copyCat << std::endl;
  std::cout << "copyCat Brain" << std::endl;
  copyCat->displayBrain();

  std::cout << RED << "add another idea in copyCat Brain" << std::endl;
  std::string idea2 = "I Despise you all you peasants!";
  copyCat->newIdea(idea2);
  std::cout << "copyCat Brain" << std::endl;
  copyCat->displayBrain();
  std::cout << "Cat Brain" << std::endl;
  C->displayBrain();



  std::cout << RED << " ___ Delete Cat ___ " << RESET << std::endl;
  delete C;

  std::cout << RED << " ___ Done! ___ " << RESET << std::endl;

  std::cout << "copyCat adress = " << copyCat << std::endl;
  std::cout << RED << " ___ Delete copyCat ___ " << RESET << std::endl;
  delete copyCat;
  std::cout << RED << " ___ Done! ___ " << RESET << std::endl;


  Dog* D = new Dog;
  std::cout << "Dog adress = " << D << std::endl;

  Dog* copyDog = new Dog(*D);
  std::cout << "copyDog adress = " << copyDog << std::endl;

  std::cout << RED << " ___ Delete Dog ___ " << RESET << std::endl;
  delete D;
  std::cout << RED << " ___ Done! ___ " << RESET << std::endl;

  std::cout << "copyDog adress = " << copyDog << std::endl;

  std::cout << RED << " ___ Delete copyDog ___ " << RESET << std::endl;
  delete copyDog;

  std::cout << RED << " ___ Done! ___ " << RESET << std::endl;
  std::cout << RED << " ___ TEST2: Done! ___ " << RESET << std::endl;



  
  return (0);
}

// int main() {
//
//   Brain* soloBrain = new Brain;
//   Brain* newBrain = new Brain(*soloBrain);
//
//   std::cout << "soloBrain adress = " << soloBrain << std::endl;
//   std::cout << "newBrain adress = " << newBrain << std::endl;
//   delete soloBrain;
//   delete newBrain;
//   return (0);
// }

