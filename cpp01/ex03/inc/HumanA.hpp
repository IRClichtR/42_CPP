#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "define.hpp"

class HumanA {

public:

  HumanA();
  ~HumanA();

  HumanA(std::string input_name, std::string weaponType) : _name(input_name);

  void        attack(void);

private:

  Weapon      _personalWeapon;
  std::string _name;

  void        _setWeapon(std::string weaponName);

};

#endif // !HUMANA_HPP
