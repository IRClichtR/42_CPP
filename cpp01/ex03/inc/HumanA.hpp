#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "define.hpp"

class HumanA {

public:

  HumanA();
  ~HumanA();

  HumanA(std::string input_name, Weapon &defaultWeapon);

  void        attack(void);
  void        setWeapon(Weapon &newWeapon);

private:

  Weapon      *_personalWeapon;
  std::string _name;

};

#endif // !HUMANA_HPP
