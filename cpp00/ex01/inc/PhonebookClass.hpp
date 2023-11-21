#ifndef PHONEBOOKCLASS_HPP
# define PHONEBOOKCLASS_HPP

# include "define.hpp"
# include "ContactClass.hpp"

using namespace std;

class Phonebook {

  public:

    Phonebook(void);
    ~Phonebook(void);


    int     AddContact(void);
    int     DisplayAllContacts(void) const;
    int     DisplayContact(void) const;
    int     searchContact(int index);


  private:

    Contact _Contact[PB_SIZE];

};

#endif
