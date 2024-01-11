#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include "define.hpp"

class ClapTrap {

public:

  // Canonical form
  ClapTrap(void);
  ClapTrap(const ClapTrap &);
  ClapTrap &operator=(const ClapTrap &);
  virtual ~ClapTrap(void);

  // other constructors
  ClapTrap(std::string name);

  // Getters and Setters
  std::string               getName(void) const;    
  unsigned int              getHitPoints(void) const;
  unsigned int              getEnergyPoints(void) const;
  unsigned int              getDamages(void) const;

  void                      setName(const std::string name);
  void                      setHitPoints(const unsigned int amount);
  void                      setEnergyPoints(const unsigned int amount);
  void                      setAttackDamage(const unsigned int amount);

  // Public functions
  void                      attack(const std::string& target);
  void                      takeDamage(unsigned int amount);
  void                      beRepaired(unsigned int amount);

  void                      doAction(std::string input, unsigned int intArg);

protected:
  
  std::string               _name;
  unsigned int              _hitPoints;
  unsigned int              _energyPoints;
  unsigned int              _attackDamage;
  static const unsigned int _maxHealth = 100;

};

#endif // !CLAPTRAP_HPP
