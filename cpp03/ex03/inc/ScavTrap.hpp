#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "define.hpp"

class ScavTrap : public ClapTrap {

public:

  // Default Constructors and destructor
  ScavTrap(void);
  ScavTrap(const ScavTrap&);
  ScavTrap &operator=(const ScavTrap &);
  ~ScavTrap(void);

  // other constructors
  ScavTrap(std::string name);

  //Specific functions
  void  guardGate(void);
   
private:

};

#endif // !SCAVTRAP_HPP
