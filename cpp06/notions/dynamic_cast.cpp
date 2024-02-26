// le cast a lieu pendant le run time et non pendant la compilation
// le dynamique cast peut echouer
// une des fonction membre devra etre virtuelle
//
class Parent {public : ~Parent(void) {} };
class Child1 : public Parent {};
class Child2 : public Parent {};
class unrelated {};

int main() {

  Child a;
  Parent *b = &a;

  //dynamic cast eturns adress of cast or NULL if cast is not possible
  // exemple : try a dynamic cast between a Child1 and Child2 doesnt work
  // since a reference cannot be null use the structure try / catch
  //
  try {
    Child2 & d = dynamic_cast<Child2 &>(*b);
    std::cout <<"OK!" << std::endl;
  }
  catch (std::bad_cast &bc) {
    std::cout << "conversion not ok: " << bc.what() << std::endl;
    return 0;
  }
  return 0;
}
