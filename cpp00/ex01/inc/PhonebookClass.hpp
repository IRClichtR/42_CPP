#ifndef PHONEBOOKCLASS_HPP
# define PHONEBOOKCLASS_HPP

# include "define.hpp"
# include "ContactClass.hpp"

using namespace std;

class Phonebook {

  public:

    Phonebook(void);
    ~Phonebook(void);

    int     status;

    void    DisplayInstructions(void) const;
    int     AddContact(int index);
    void    DisplayAllContacts(void) const;
    void    DisplayContact(int index) const;
    int     searchContact(int index);


  private:

    Contact _Contact[PB_SIZE];

};

#endif
