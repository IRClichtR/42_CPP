#include "../inc/define.hpp"
#include "../inc/ContactClass.hpp"
#include "../inc/PhonebookClass.hpp"


int main(void) {
  
  Phonebook   AwPhonebook;
  std::string Input;
  int         i = 0;

  while (1) {

    std::cin >> Input;
    if (Input.compare("ADD") == 0) {
      // std::cout << "Adding contact" << std::endl;
      Phonebook::AddContact(i);
      Phonebook::DisplayContact(i);
    }
    else if (Input.compare("EXIT") == 0) {
      break ;
    }
    else {
      std::cout << "Oops: " << Input << std::endl;
    }
    if (i == PB_SIZE - 1) {
      i == 1;
    }
    else { 
      i++;
    }

  }
  return (0);
}
