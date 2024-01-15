#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "define.hpp"

class FragTrap : virtual public ClapTrap {

public:

  // Canonical form
  FragTrap(void);
  FragTrap(const FragTrap &);
  FragTrap &operator=(const FragTrap &);
  ~FragTrap(void);

  // other constructors
  FragTrap(std::string name);

  // Actions
  void  attack(const std::string& target);
  void  highFivesGuys(void);

private:
  
};

#endif // !FRAGTRAP_HPP
