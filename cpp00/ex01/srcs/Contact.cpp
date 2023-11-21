#include "../inc/ContactClass.hpp"
#include "../inc/PhonebookClass.hpp"
#include  "../inc/define.hpp"

Contact::Contact(void) {
  
}

int Contact::_setFirstName(void) {

  std::cout << "First Name: ";
  std::getline(std::cin,_FirstName); 
  if (_FirstName == "")
    return (ERROR);
  return (SUCCESS);

}

int Contact::_setLastName(void) {

  std::cout << "Last Name: ";
  std::getline(std::cin,_LastName); 
  if (_LastName == "")
    return (ERROR);
  return (SUCCESS);

}

int Contact::_setNickName(void)  {

  std::cout << "NickName: ";
  std::getline(std::cin,_NickName); 
  if (_NickName == "")
    return (ERROR);
  return (SUCCESS);

}

int Contact::_setPhoneNb(void) {

  std::string   string_nb;
  int           i = -1;
  int           len;

  std::cout << "Phone Number: ";
  std::getline(std::cin,string_nb); 
  len = string_nb.length();

  if (len > 10)
    return (ERROR);

  while (string_nb[++i]) {
    if (isdigit(string_nb[i]) == 0)
      return (ERROR);
  }

  _PhoneNb = std::stoul (string_nb,nullptr,0);
  return (SUCCESS);

}

int Contact::_setDarkestSecret(void) {

  std::cout << "Darkest Secret: ";
  std::getline(std::cin,_DarkestSecret);
  if (_DarkestSecret == "")
    return (ERROR);
  return (SUCCESS);
}

int Contact::setContact(void) {

  if (_setFirstName() == ERROR)
    return (FIRSTNAME_ERR, ERROR);
  if (_setLastName() == ERROR)
    return (LASTNAME_ERR, ERROR);
  if (_setNickName() == ERROR)
    return (NICKNAME_ERR, ERROR);
  if (_setPhoneNb() == ERROR)
    return (PHONENB_ERR, ERROR);
  if (_setDarkestSecret() == ERROR)
    return (DARK_ERR, ERROR);
  return (SUCCESS);
}

void  Contact::getContact() const {

  std::cout << "First Name: " << Contact::_FirstName << std::endl;
  std::cout << "Last Name: " << Contact::_LastName << std::endl;
  std::cout << "Nick Name: " << Contact::_NickName << std::endl;
  std::cout << "Phone Number: " << Contact::_PhoneNb << std::endl;
  std::cout << "Darkest Secret: " << Contact::_DarkestSecret << std::endl;

}

Contact::~Contact(void) {

}
