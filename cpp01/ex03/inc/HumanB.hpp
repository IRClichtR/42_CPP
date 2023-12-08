
#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "define.hpp"

class HumanA {

public:

  HumanA();
  ~HumanA();

  HumanA(std::string input_name) : _name(input_name);

  void        attack(void);

private:

  Weapon      _personalWeapon;
  std::string _name;

  void        _setWeapon(std::string weaponName);

};

#endif // !HUMANB_HPP
