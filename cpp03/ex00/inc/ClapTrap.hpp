#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include "define.hpp"

class ClapTrap {

public:

  // Canonical form
  ClapTrap(void);
  ClapTrap(const ClapTrap &);
  ClapTrap &operator=(const ClapTrap &);
  ~ClapTrap(void);

  // other constructors
  ClapTrap(std::string name);

  // Getters
  std::string               getName(void) const;
  unsigned int              getHitPoints(void) const;
  unsigned int              getEnergyPoints(void) const;
  unsigned int              getDamages(void) const;

  // Public functions
  void                      attack(const std::string& target);
  void                      takeDamage(unsigned int amount);
  void                      beRepaired(unsigned int amount);

  void                      doAction(std::string input, unsigned int intArg);

private:
  
  std::string               _name;
  unsigned int              _hitPoints;
  unsigned int              _energyPoints;
  unsigned int              _attackDamage;
  static const unsigned int _maxHealth = 10;

};

#endif // !CLAPTRAP_HPP
