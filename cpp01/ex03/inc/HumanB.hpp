
#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "define.hpp"

class HumanB {

public:

  HumanB();
  ~HumanB();

  HumanB(std::string input_name);

  void        attack(void);
  void        setWeapon(Weapon& weaponRef);

private:

  std::string _name;
  Weapon      *_personalWeapon;

};

#endif // !HUMANB_HPP
