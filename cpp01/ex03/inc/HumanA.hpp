#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "define.hpp"

class HumanA {

public:

  HumanA();
  ~HumanA();

  HumanA(std::string input_name, Weapon& defaultWeapon);

  void        attack(void);
  void        setWeapon(Weapon& weaponRef);

private:

  std::string _name;
  Weapon      *_personalWeapon;

};

#endif // !HUMANA_HPP
