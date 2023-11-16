#ifndef PHONEBOOKCLASS_HPP
# define PHONEBOOKCLASS_HPP

# include "define.hpp"
# include "ContactClass.hpp"

using namespace std;

class Phonebook {

  public:

    Phonebook(void);
    ~Phonebook(void);


    int   AddContact();
    int   getPBStatus(void) const;
    int   setPBStatus(void);
    int   getAllContacts(void) const;
    int   getContact(void) const;
    int   searchContact(int index);


  private:

    int   _PhonebookStatus;
    class _Contact[PB_SIZE];
};

#endif
