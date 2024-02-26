class Parent {};
class Child1 : public Parent {};
class Child2 : public Parent {};



int main() {
//upcast et downcast 
//
// Hierarchie de type liee aux classes en CPP
// Vu aue les childs heritent du parent, il y a compatibilite des pointeurs
// je peux initialialiser quelque chose comme ca :

  Child1 a;
  Parent *b = &a;
  Parent * c = (Parent *) &a;
  //Ici reinterpretation d'un type plus precis par un type plus generique

  //downcast 
  Parent * d = &a;
  Child1 * e = d; //cette ligne est problematique : dans la mesure ou on ne peut pas faire de downcast implicite ca donne une erreur compilate
  
  Child2 * f = (Child2 *)d; // attention cette version compile meme si ca n'est pas le bon child !!!
}
