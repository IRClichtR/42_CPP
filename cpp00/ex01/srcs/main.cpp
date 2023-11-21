#include "../inc/define.hpp"
#include "../inc/ContactClass.hpp"
#include "../inc/PhonebookClass.hpp"

void  displayInstructions(void) {
  
  std::cout << "Welcome to my Awsome Phonebook" << std::endl;
  std::cout << "Instructions:" << std::endl;
  std::cout << "<ADD> add a contact" << std::endl;
  std::cout << "<SEARCH> <INDEX> look for a specific index in the Phonebook" << std::endl;
  std::cout << "Have fun!" << std::endl;
  
}

int main(void) {
  
  Phonebook   AwPhonebook;
  std::string Input;
  int         i = 0;

  while (1) {

    displayInstructions();
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
      std::cout << "Oops: " << Input << " is not a valid entry" << std::endl;
      displayInstructions(void);
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
