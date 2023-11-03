#include <iostream>
#include <string>

int main(){
  char buf[512];
  //use of ::std::endl to abstract the line return problem
  std::cout << "Hello World !" << std::endl;
   std::cout << "Enter a sentence: " << std::endl;
   std::cin >> buf; 
   std::cout << "You entered: ["<< buf <<"]"<< std::endl;
  while (buf.compare("STOP") != 0){
    std::cout << "Enter a sentence: " << std::endl;
    std::cin >> buf; 
    std::cout << "You entered: ["<< buf <<"]"<< std::endl;
  }
  return (0);
}
