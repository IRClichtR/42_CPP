#include "define.hpp"

int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;//should not create a leak
delete i;

return 0;
}



// int main(int ac, char **av) {
//
//   if (!checkArgs(ac, av))
//     return (1);
//
//   Animal  **Maisounette = new Animal*[10];
//   for (int i = 0 ; i < 5 ; i++) {
//
//     Maisounette[i] = new Dog();
//   }
//     std::cout << GREEN << "All dogs have been created" << RESET << std::endl;
//
//   for (int i = 5 ; i < 10 ; i++) {
//
//   }
//   Maisounette[6] = Maisounette[7];
//     std::cout << GREEN << "All cats have been created" << RESET << std::endl;
//
//   for (int i = 0 ; i < 10 ; i++) {
//
//     delete  Maisounette[i];
//   }
//
//   // Animal random = *Maisounette[4];
//   Animal *random2 = new Cat();
//   random2 = Maisounette[6];
//
//   std::cout << GREEN << "All animals have been destroyed" << RESET << std::endl;
//
//   // std::cout << "Address of the stack copy " << &random << std::endl;
//   std::cout << GREEN << "TEST TWO DIFFERENT COPIES OF AN ELEMENT OF THE TAB AFTER TAB DELETION" << RESET << std::endl;
//   std::cout << "Adress of the index [4] "<< &Maisounette[4] << std::endl;
//
//   delete [] Maisounette;
//
//   // std::cout << std::endl;
//   // std::cout << "Address of the stack copy " << &random << std::endl;
//   std::cout << "Adress of the heap copy " << &random2 << std::endl;
//   delete random2;
//   return (0);
// }
