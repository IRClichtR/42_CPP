#ifndef DOG_HPP
# define DOG_HPP

class Dog : public Animal {

public:

//____________________ Coplian form //

  Dog();
  Dog(const Dog &);
  Dog &operator=(const Dog &);
  ~Dog();

  void  makeSound() const;

private:
  
};


#endif // !DOG_HPP
