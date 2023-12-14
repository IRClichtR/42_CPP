#include "define.hpp"

// Public functions___________/

Harl::Harl(void) {}
Harl::~Harl(void) {}

void  Harl::actionPtr(std::string choice) {

  void  (Harl::*funcPtrArray[4])() = {

    &Harl::_debug;
    &Harl::_info;
    &Harl::_warning;
    &Harl::_error;
  }

}

// Private functions__________/

void  Harl::_debug(void) {

  std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;

  return ;
}

void  Harl::_info(void) {

  std::cout << YELLOW << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << RESET << std::endl;
  
  return ;
}

void  Harl::_warning(void) {

  std::cout << RED << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << RESET << std::endl;

  return ;
}

void  Harl::_error(void) {

  std::cout << PURPLE << "This is unacceptable ! I want to speak to the manager now!!!" << RESET << std::endl;

  return ;
}
