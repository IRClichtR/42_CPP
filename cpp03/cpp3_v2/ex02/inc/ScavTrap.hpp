#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "define.hpp"

class ScavTrap : public ClapTrap {

public:

  // Canonical form
  ScavTrap(void);
  ScavTrap(const ScavTrap &);
  ScavTrap &operator=(const ScavTrap &);
  ~ScavTrap(void);

  // other constructors
  ScavTrap(std::string name);

  // Actions
  void  attack(const std::string& target);
  void  guardGate(void);

private:
  
};

#endif // !SCAVTRAP_HPP
