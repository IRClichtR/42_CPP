# include <iostream>
# include <string>

# define BLUE   "\033[0;34m"
# define RESET   "\033[0m"

int  main(void) {

  std::string   myString = "HI THIS IS BRAIN";
  std::string*  stringPTR = &myString;
  std::string&  stringREF = myString;


  //display address of string;
  std::cout << BLUE << "address of the string: " << RESET << &myString << std::endl;
  //display address stored in stringPTR
  std::cout << BLUE << "address stored in stringPTR: " << RESET << stringPTR << std::endl;
  //display address stored in stringREF;
  std::cout << BLUE << "address stored in stringREF: " << RESET << &stringREF << std::endl;
  
  std::cout << std::endl;
  std::cout << std::endl;

  //display value of string
  std::cout << BLUE << "value of string: " << RESET << myString << std::endl;
  //display value of string through stringPTR
  std::cout << BLUE << "value of string through stringPTR: " << RESET << *stringPTR << std::endl;
  //display value pointed by stringREF
  std::cout << BLUE << "value pointed by stringREF: " << RESET << stringREF << std::endl;

  return (0);
}
