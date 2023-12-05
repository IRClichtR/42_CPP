/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuernal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:52:46 by ftuernal          #+#    #+#             */
/*   Updated: 2023/12/05 16:52:47 by ftuernal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/PhonebookClass.hpp"

Phonebook::Phonebook(void) {

  std::cout << "Phonebook created" << std::endl;
  return ;

}

void  Phonebook::DisplayInstructions(void) const {
  
  std::cout << "\033[34m" << "Welcome to my Awsome Phonebook" << std::endl;
  std::cout << "Instructions:" << std::endl;
  std::cout << "[ADD] add a contact" << std::endl;
  std::cout << "[SEARCH] display all contacts and look for specific contact" << std::endl;
  std::cout << "[EXIT] exit Awsome Phonebook :'(" << std::endl;
  std::cout << "Have fun!" << "\033[0m" << std::endl;
  
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

void  Phonebook::DisplayAllContacts(void) const {

  for (int index = 0; index < 8; index++)
    Phonebook::_Contact[index].getShortContact(index);

}

Phonebook::~Phonebook(void) { 

}
