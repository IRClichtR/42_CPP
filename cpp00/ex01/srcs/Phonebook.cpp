# include "../inc/PhonebookClass.hpp"

Phonebook::Phonebook(void) {

  std::cout << "Phonebook created" << std::endl;
  return ;

}

Phonebook::AddContact(int index) {

  if (index < PB_SIZE) {  
    Phonebook::Contact[index]::setContact(void);
  }
  else {
    std::cout << "Phonebook is full... writting over older contact" << std::endl;
    Phonebook::Contact[0]::SetContact(void);
  }
}

Phonebook::~Phonebook(void) { 

}
