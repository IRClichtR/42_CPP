#include "../inc/ContactClass.hpp"
#include "../inc/PhonebookClass.hpp"
#include  "../inc/define.hpp"

Contact::Contact(void) {
  
}

int Contact::_setFirstName(void) {

  std::cout << "\033[32m" << "First Name: " << "\033[0m";
  std::getline(std::cin,_FirstName); 
  if (_FirstName == "")
    return (ERROR);
  return (SUCCESS);

}

int Contact::_setLastName(void) {

  std::cout << "\033[32m" << "Last Name: " << "\033[0m";
  std::getline(std::cin,_LastName); 
  if (_LastName == "")
    return (ERROR);
  return (SUCCESS);

}

int Contact::_setNickName(void)  {

  std::cout << "\033[32m" << "NickName: " << "\033[0m";
  std::getline(std::cin,_NickName); 
  if (_NickName == "")
    return (ERROR);
  return (SUCCESS);

}

int Contact::_setPhoneNb(void) {

  std::string   string_nb;
  int           i = -1;
  int           len;

  std::cout << "\033[32m" << "Phone Number (10 digits): " << "\033[0m";
  std::getline(std::cin,string_nb); 
  len = string_nb.length();
  _PhoneNb = 0;

  if (len != 10)
    return (ERROR);

  while (string_nb[++i]) {
    if (isdigit(string_nb[i]) == 0)
      return (ERROR);
  }

  _PhoneNb = std::strtoul(string_nb.c_str(),nullptr,10);
  return (SUCCESS);

}

int Contact::_setDarkestSecret(void) {

  std::cout << "\033[32m" << "Darkest Secret: " << "\033[0m";
  std::getline(std::cin,_DarkestSecret);
  if (_DarkestSecret == "")
    return (ERROR);
  return (SUCCESS);
}

int Contact::setContact(void) {

  if (_setFirstName() == ERROR) { 
    std::cout << "\033[31m" << "Invalid First Name: field can't be empty" << "\033[0m" << std::endl;
    return (ERROR);
  }
  if (_setLastName() == ERROR) { 
    std::cout << "\033[31m" << "Invalid Last Name: Field can't be empty" << "\033[0m" << std::endl;
    return (ERROR);
  }
  if (_setNickName() == ERROR) { 
    std::cout << "\033[31m" << "Invalid NickName: field can't be empty" << "\033[0m" << std::endl;
    return (ERROR);
  }
  if (_setPhoneNb() == ERROR) { 
    std::cout << "\033[31m" << "Invalid Phone number: Enter a 10 digits number" << "\033[0m" << std::endl;
    return (ERROR);
  }
  if (_setDarkestSecret() == ERROR) { 
    std::cout << "\033[31m" << "Invalid Dark Secret: field needs to be dark, not empty!" << "\033[0m" << std::endl;
    return (ERROR);
  }
  return (SUCCESS);
}

void  Contact::getContact() const {

  std::cout << "\033[36m" << "First Name: " << "\033[0m" << Contact::_FirstName.substr(0, 9) << std::endl;
  std::cout << "\033[36m" << "Last Name: " << "\033[0m" << Contact::_LastName.substr(0, 9) << std::endl;
  std::cout << "\033[36m" << "Nick Name: " << "\033[0m" << Contact::_NickName.substr(0, 9) << std::endl;
  std::cout << "\033[36m" << "Phone Number: " << "\033[0m";
  std::cout << std::setfill('0') << std::setw(10) << _PhoneNb << std::endl;
  std::cout << "\033[36m" << "Darkest Secret: " << "\033[0m" << Contact::_DarkestSecret.substr(0, 9) << std::endl;

}

Contact::~Contact(void) {

}
