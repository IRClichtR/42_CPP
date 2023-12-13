
#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "define.hpp"

class HumanB {

public:

  HumanB();
  ~HumanB();

  HumanB(std::string input_name);

  void        attack(void);
  void        setWeapon(Weapon newWeapon);

private:

  Weapon      _personalWeapon;
  std::string _name;

};

#endif // !HUMANB_HPP
