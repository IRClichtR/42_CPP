#include "define.hpp"

// Public functions___________/

Harl::Harl(void) {

  std::cout << BLUE << "Brace for the new Karen..." << RESET << std::endl;
}

Harl::~Harl(void) {

    std::cout << BLUE << "A Karen has been destroyed, the World is finally at peace" << RESET << std::endl;
}

void  Harl::switchStatements(std::string level) {

  int id = 0;

  if (level == "DEBUG")
    id = 1;
  else if (level == "INFO")
    id = 2;
  else if (level == "WARNING")
    id = 3;
  else if (level == "ERROR")
    id = 4;

  switch (id) {

    case 1:
      std::cout << "[ DEBUG ]" << std::endl;
      Harl::_debug();
      // std::cout << "[ INFO ]" << std::endl;
      // Harl::_info();
      // std::cout << "[ WARNING ]" << std::endl;
      // Harl::_warning();
      // std::cout << "[ ERROR ]" << std::endl;
      // Harl::_error();
      //
    case 2:
      std::cout << "[ INFO ]" << std::endl;
      Harl::_info();
      // std::cout << "[ WARNING ]" << std::endl;
      // Harl::_warning();
      // std::cout << "[ ERROR ]" << std::endl;
      // Harl::_error();
      //
    case 3:
      std::cout << "[ WARNING ]" << std::endl;
      Harl::_warning();
      // std::cout << "[ ERROR ]" << std::endl;
      // Harl::_error();

    case 4:
      std::cout << "[ ERROR ]" << std::endl;
      Harl::_error();
      return ;

    default:
      std::cout << "[ Probably complaining about insignificant problem ]" << std::endl;
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
