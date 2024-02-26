int main() 
{
  // the conversion doesn't not change the bits in this case
  //
  float a = 420,042f;

  void* b = &a; // reinterpretation implicite 
  // permet de contenir une addresse sur tous les types. c4est l4dresse la plus generale
  //
  void *c = (void *) &a;

  // que se passe t il si je veux ne pas aller vers un type plus general ? si je veux reinterpreter en int*
  // demotion 
  void * d = &a;
  int * e = d;
  int *f = (int *)d;

}
