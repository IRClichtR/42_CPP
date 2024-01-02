#include "define.hpp"

// Public functions___________/

Harl::Harl(void) {

  Harl::funcMap["DEBUG"] = 0;
  Harl::funcMap["INFO"] = 1;
  Harl::funcMap["WARNING"] = 2;
  Harl::funcMap["ERROR"] = 3;

  Harl::funcPtrArray[0] = &Harl::_debug;
  Harl::funcPtrArray[1] = &Harl::_info;
  Harl::funcPtrArray[2] = &Harl::_warning;
  Harl::funcPtrArray[3] = &Harl::_error;

  std::cout << BLUE << "Brace for the new Karen..." << RESET << std::endl;
}

Harl::~Harl(void) {

    std::cout << BLUE << "A Karen has been destroyed, the World is finally at peace" << RESET << std::endl;

}

void  Harl::actionPtr(std::string choice) {

  std::map<std::string, int>::iterator it = funcMap.find(choice);
  if (it != funcMap.end()) {
    (this->*funcPtrArray[it->second])();
  }
  else {
    std::cerr << RED << "invalid cmd! I'm very irritated!" << RESET << std::endl;
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
