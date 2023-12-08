
#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "define.hpp"

class HumanB {

public:

  HumanB();
  ~HumanB();

  HumanB(std::string input_name) : _name(input_name);

  void        attack(void);

private:

  Weapon      _personalWeapon;
  std::string _name;

  void        _setWeapon(std::string weaponName);

};

#endif // !HUMANB_HPP
