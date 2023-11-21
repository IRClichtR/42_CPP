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

  std::string _FirstName;
  std::string _LastName;
  std::string _NickName;
  std::string _DarkestSecret;
  unsigned int      _PhoneNb;

  int               _setFirstName();
  int               _setLastName();
  int               _setNickName();
  int               _setPhoneNb();
  
};

#endif // !CONTACTCLASS_HPP
