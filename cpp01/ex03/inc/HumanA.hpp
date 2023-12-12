#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "define.hpp"

class HumanA {

public:

  HumanA();
  ~HumanA();

  HumanA(std::string input_name, Weapon defaultWeapon) : _name(input_name), _personalWeapon(defaultWeapon);

  void        attack(void);

private:

  Weapon      _personalWeapon;
  std::string _name;

};

#endif // !HUMANA_HPP
