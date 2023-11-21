#include "../inc/define.hpp"
#include "../inc/ContactClass.hpp"
#include "../inc/PhonebookClass.hpp"

int main(void) {

  Phonebook   AwPhonebook;
  std::string Input;
  int         i = 0;

  while (1) {

    AwPhonebook.DisplayInstructions();
    std::getline(std::cin,Input);
    std::cin >> Input;

    if (Input.compare("ADD") == 0) {
      
      std::cout << "Adding contact" << std::endl;
      AwPhonebook.AddContact(i);
      AwPhonebook.DisplayContact(i);

      if (i == PB_SIZE - 1) {
        i = 0;
      }
      else { 
        i++;
      }

    }
    else if (Input.compare("EXIT") == 0) {
      break ;
    }
    else {
      std::cout << "Oops: " << Input << " is not a valid entry" << std::endl;
      AwPhonebook.DisplayInstructions();
    }

  }
  return (0);
}
