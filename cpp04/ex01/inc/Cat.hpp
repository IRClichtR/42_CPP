#ifndef CAT_HPP
# define CAT_HPP

class Cat : public Animal {

public:

//____________________ Coplian form //

  Cat();
  Cat(const Cat &);
  Cat &operator=(const Cat &);
  ~Cat();

  void  makeSound() const;

private:
  
};


#endif // !CAT_HPP
