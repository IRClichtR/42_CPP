#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP


# include "define.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

public:

  DiamondTrap(void);
  DiamondTrap(const DiamondTrap &);
  DiamondTrap &operator=(const DiamondTrap &);

  DiamondTrap(std::string name);

  using       ScavTrap::attack;

  void        whoAmI(void);

private:

  std::string _name;

};

#endif // !DIAMONDTRAP_HPP
