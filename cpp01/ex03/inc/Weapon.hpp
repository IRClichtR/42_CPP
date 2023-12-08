
#ifndef WEAPON_HPP
# define WEAPON_HPP

# include "define.hpp"

class Weapon {

public:

  Weapon();
  ~Weapon();

  std::string&  getType(void);
  void          setType(std::string newType);

private:
  
  std::string   _type;

};

#endif // !WEAPON_HPP
