#ifndef INTERN_HPP
# define INTERN_HPP

#include "define.hpp"

class Intern {

public:

  Intern();
  Intern(const Intern &);
  Intern &operator=(const Intern &);
  ~Intern();

  Form*  makeForm(std::string& name, std::string& target);

private:
  
};

#endif // !INTERN_HPP
