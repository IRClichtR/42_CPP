#include "define.hpp"

int main() {

  Brain* soloBrain = new Brain;
  Brain* newBrain = soloBrain;

  std::cout << "soloBrain adress = " << soloBrain << std::endl;
  std::cout << "newBrain adress = " << soloBrain << std::endl;
  delete soloBrain;
  delete newBrain;
  return (0);
}
