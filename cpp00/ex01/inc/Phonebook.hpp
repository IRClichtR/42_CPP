#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <cctype>

class PhoneBook {

  private:
    class Contact {

      private:
        std::string   FirstName;
        std::string   LastName;
        std::string   NickName;
        unsigned int  PhoneNumber;
        std::string   DarkestSecret;
    };

};

#endif // !PHONEBOOK_HPP

