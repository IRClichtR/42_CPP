int main() {
  
  float a = 420.42f;

  void * b = &a;
  int * c = reinterpret_cast<int *>(b);
  int & d = reinterpret_cast<int &>(b);

  return 0;

}
// le compilateur vous fait confiance. tu peux reinterpreter en n'importe quoi. Donc il faut savoir quel est le type qu'on vuet
// exemple flux d'octet dans un buffer void * ensuite on peut reinterpreter en char * pour utiliser la suite d'octets en char *;
