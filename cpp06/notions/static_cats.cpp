#include <iostream>
#include <string>

class Parent {};
class Child1 : public Parent {};
class Child2 : public Parent {};
class unrelated {};
// 5 types de casts
// Conversions
// Reinterpretation
//      qualifieur de type
// Downcast
// Upcast

int main() {

 // int a = 42;
 //
 // double b = a; //promotion implicite
 // int c = b;
 // int d = static_cast<int>(b); // a la meme utilisation qu'un cast en c

 // dans le contexte d'upcast et de Downcast

 Child1 a;
 Parent * b = &a;
 Child1 * c = b; // Don't
 Child2 * d = static_cast<Child2 *>(b); //downcast explicit
 Child2 * d = static_cast<unrelated *>(&a); // NoK
 
 return 0;
}
