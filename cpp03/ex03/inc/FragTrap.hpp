#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "define.hpp"

class FragTrap : public ClapTrap {

public:

  // Default Constructors and destructor
  FragTrap(void);
  FragTrap(const FragTrap&);
  FragTrap &operator=(const FragTrap &);
  ~FragTrap(void);

  // other constructors
  FragTrap(std::string name);

  //Specific functions
  void  highFivesGuys(void);
   
private:

};

#endif // !FRAGTRAP_HPP
