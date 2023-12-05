/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuernal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:52:22 by ftuernal          #+#    #+#             */
/*   Updated: 2023/12/05 16:52:23 by ftuernal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

  while (1) {

    if (std::cin.eof()) {
      std::cout << "\033[031m" << "Exit CTRL D" << "\033[0m" << std::endl;
      std::exit(1);
    }
    if (_setFirstName() == ERROR) 
      std::cout << "\033[31m" << "Invalid First Name: field can't be empty" << "\033[0m" << std::endl;
    else
      break ;

  }

  while (1) {

    if (std::cin.eof()) {
      std::cout << "\033[031m" << "Exit CTRL D" << "\033[0m" << std::endl;
      std::exit(1);
    }
    if (_setLastName() == ERROR) { 
      std::cout << "\033[31m" << "Invalid Last Name: Field can't be empty" << "\033[0m" << std::endl;
    }
    else 
      break ;
  }

  while (1) {

    if (std::cin.eof()) {
      std::cout << "\033[031m" << "Exit CTRL D" << "\033[0m" << std::endl;
      std::exit(1);
    }
    if (_setNickName() == ERROR) { 
      std::cout << "\033[31m" << "Invalid NickName: field can't be empty" << "\033[0m" << std::endl;
    }
    else 
      break ;

  }

  while (1) {

    if (std::cin.eof()) {
      std::cout << "\033[031m" << "Exit CTRL D" << "\033[0m" << std::endl;
      std::exit(1);
    }
    if (_setPhoneNb() == ERROR) { 
      std::cout << "\033[31m" << "Invalid Phone number: Enter a 10 digits number" << "\033[0m" << std::endl;
    }
    else 
      break ;

  }

  while (1) {

    if (std::cin.eof()) {
      std::cout << "\033[031m" << "Exit CTRL D" << "\033[0m" << std::endl;
      std::exit(1);
    }
    if (_setDarkestSecret() == ERROR) { 
      std::cout << "\033[31m" << "Invalid Dark Secret: field needs to be dark, not empty!" << "\033[0m" << std::endl;
    }
    else 
      break ;

  }

  return (SUCCESS);

}

  void  Contact::getContact() const {

    std::cout << "\033[36m" << "First Name: " << "\033[0m" 
      << Contact::_FirstName << std::endl;
    std::cout << "\033[36m" << "Last Name: " << "\033[0m" 
      << Contact::_LastName << std::endl;
    std::cout << "\033[36m" << "Nick Name: " << "\033[0m" 
      << Contact::_NickName.substr(0, 9) << std::endl;
    std::cout << "\033[36m" << "Phone Number: " << "\033[0m";
    std::cout << std::setw(10) << std::setfill('0') 
      << _PhoneNb << std::setfill(' ') << std::endl;
    std::cout << "\033[36m" << "Darkest Secret: " << "\033[0m" 
      << Contact::_DarkestSecret << std::endl;

  }

  void  Contact::printTrimName(std::string name) const {

    if (name.length() > 9) {

      std::cout << "\033[36m" << std::setw(9) 
        << name.substr(0, 9)
        << "." << "\033[0m";

    }
    else {

      std::cout << "\033[36m" << std::setw(10) << std::right 
        << name << "\033[0m";
      
    }

  }

  void  Contact::getShortContact(int index) const {

    if (index == 0) {

    std::cout << "\033[36m"
      << std::setw(10) << std::right << "index" << "|" 
      << std::setw(10) << std::right << "First Name" << "|"
      << std::setw(10) << std::right << "Last Name" << "|"
      << std::setw(10) << std::right << "NickName" << std::endl;

    }
   
    std::cout << "\033[36m" << std::setw(10) << std::right << index; 
    std::cout << "\033[36m" << "|";
    printTrimName(Contact::_FirstName);
    std::cout << "\033[36m" << "|";
    printTrimName(Contact::_LastName);
    std::cout << "\033[36m" << "|";
    printTrimName(Contact::_NickName);
    std::cout << std::endl;
  }

  Contact::~Contact(void) {

  }
