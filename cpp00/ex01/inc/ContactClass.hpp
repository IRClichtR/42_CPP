#ifndef CONTACTCLASS_HPP
# define CONTACTCLASS_HPP

# include "define.hpp"

class Contact {

public:

  Contact(void);
  ~Contact(void);

  int id;
  int ContactStatus;

  int setContact(void);
  int getContact(int id) const;

private:

  std::basic_string _FirstName;
  std::basic_string _LastName;
  std::basic_string _NickName;
  std::basic_string _DarkestSecret;
  unsigned int      _PhoneNb;

  int               _setFirstName();
  int               _setLastName();
  int               _setNickName();
  int               _setPhoneNb();
  
};

#endif // !CONTACTCLASS_HPP
