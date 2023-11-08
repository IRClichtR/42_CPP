#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <cctype>

using namespace std;

class PhoneBook {

  public:
    PhoneBook(void);
    ~PhoneBook(void);
    int   GetContact();
    void  SetContact();

  private:
    class Contact {

      public:
        Contact(void);
        ~Contact(void);

      private:
        string   FirstName;
        string   LastName;
        string   NickName;
        unsigned int  PhoneNumber;
        string   DarkestSecret;
    };

};

#endif // !PHONEBOOK_HPP

