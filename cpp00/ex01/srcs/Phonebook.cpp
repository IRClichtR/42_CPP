# include "../inc/PhonebookClass.hpp"

Phonebook::Phonebook(void) {

  std::cout << "Phonebook created" << std::endl;
  return ;

}

void  Phonebook::DisplayInstructions(void) const {
  
  std::cout << "Welcome to my Awsome Phonebook" << std::endl;
  std::cout << "Instructions:" << std::endl;
  std::cout << "<ADD> add a contact" << std::endl;
  std::cout << "<SEARCH> <INDEX> look for a specific index in the Phonebook" << std::endl;
  std::cout << "Have fun!" << std::endl;
  
}

int Phonebook::AddContact(int index) {

  if (index < PB_SIZE) {  
    if (Phonebook::_Contact[index].setContact() == ERROR)
      return (ERROR);
  }
  else {
    std::cout << W_OVER_CONTACT << std::endl;
    if (Phonebook::_Contact[0].setContact() == ERROR)
      return (ERROR);
  }
  return (SUCCESS);
}

void Phonebook::DisplayContact(int index) const {

  Phonebook::_Contact[index].getContact();

}

Phonebook::~Phonebook(void) { 

}
