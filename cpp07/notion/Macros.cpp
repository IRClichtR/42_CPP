
// definir du code dans lequel je vais introduire du code a trous. Pourra etre utilise par le compilateur pour instancier les types souhaites. 

#include <iostream>

int max(int a, int b) {

  return (a >= b ? a : y);
}

template <typename T>

T maxTemp(T const &a, T const &b) {
// en C ca ne compile pas mais avec la declaration de Template il y a possibilite d'instancier.
  // on peut utiliser tous les type. dans la fonction passer par reference permet de ne pas faire de multiples copies
  return (a >= b ? a : y);
}

int main() {

int a = 21;
int b = 42;
// instantiation explicite ou implicite
// explicite
  std::cout << "Max of" << a << " and " << b << " is";
  std::cout <<  max<int>(a, b) << std::endl;

// implicite 
  std::cout << "Max of" << a << " and " << b << " is";
  std::cout <<  max(a, b) << std::endl;
  
  int ret = max<int>(foo(a), foo(b));
  
  // structure de donnees
  
  return 0;
}
