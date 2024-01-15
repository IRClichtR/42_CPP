#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "define.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

public:

  // Canonical form
  DiamondTrap(void);
  DiamondTrap(const DiamondTrap &);
  DiamondTrap &operator=(const DiamondTrap &);
  ~DiamondTrap(void);

  // other constructors
  DiamondTrap(std::string name);

  //Actions

  void  whoAmI();
  // void  ScavTrap::attack(const std::string& target);
  using ScavTrap::attack;

private:
 
  std::string _name;
};

#endif // !DIAMONDTRAP_HPP
