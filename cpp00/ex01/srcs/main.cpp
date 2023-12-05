#include "../inc/define.hpp"
#include "../inc/ContactClass.hpp"
#include "../inc/PhonebookClass.hpp"

int main(void) {

  Phonebook   AwPhonebook;
  std::string Input;
  int         i = 0;
  int         search_idx;

  AwPhonebook.status = -1;
  AwPhonebook.DisplayInstructions();

  while (1) {

    std::cout << "\033[034m" << "Enter Command [ADD] [SEARCH] [EXIT]:" << "\033[0m";

    std::getline(std::cin,Input);

    if (std::cin.eof()){
      std::cout << "\033[031m" << "Exit CTRL D" << "\033[0m" << std::endl;
      break ;
    }

    if (Input.compare("ADD") == 0) {

      std::cout << "\033[32m" << "New contact" << "\033[0m" << std::endl;
      AwPhonebook.AddContact(i);

      if (i == PB_SIZE - 1) {
        std::cout << "\033[31m" << "Phonebook is full, next contact adding will erase index 0" << "\033[0m" << std::endl;
        i = 0;
      }
      else { 
        i++;
      }
      if (AwPhonebook.status < 7)
        AwPhonebook.status++;

    }
    else if (Input.compare("SEARCH") == 0) {

      AwPhonebook.DisplayAllContacts();
      std::cout << "\033[36m" << "Enter Contact Index <0-7>: " << "\033[0m";
      std::getline(std::cin,Input);

      search_idx = atoi(Input.c_str());

      if (Input.length() > 1 || isdigit(Input[0]) == 0 || search_idx > 7 
          || search_idx > AwPhonebook.status || AwPhonebook.status == -1)
        std::cout << "\033[31m" << "Oops: " << Input << " is not a valid index" << "\033[0m" << std::endl;
      else {
        AwPhonebook.DisplayContact(atoi(Input.c_str()));
      }

    }
    else if (Input.compare("EXIT") == 0) {
      std::cout << "\033[031m" << "Exit program" << "\033[0m" << std::endl;
      break ;
    }
    else {
      std::cout << "\033[31m" << "Oops: " << Input << " is not a valid entry" << "\033[0m" << std::endl;
    }

  }
  return (0);
}
