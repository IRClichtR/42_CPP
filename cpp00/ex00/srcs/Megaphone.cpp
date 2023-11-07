#include <iostream>
#include <cctype>
#include <string>

int main(int ac, char **av){
  std::string voice;
  int         i, j;

  if (ac < 2){
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
  }
  else {
    for (j = 1; j < ac; j++){
      voice = av[j];
      for (i = 0; i < voice.size(); i++){
        voice[i] = toupper(voice[i]);
        std::cout << voice[i];
      }
      std::cout << std::endl;
    }
  }
  return (0);
}
