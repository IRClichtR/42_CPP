#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

class WrongCat : public WrongAnimal {

public:

//____________________ Coplian form //

  WrongCat();
  WrongCat(const WrongCat &);
  WrongCat &operator=(const WrongCat &);
  ~WrongCat();

  // void  makeSound();

private:
  
};


#endif // !WRONGCAT_HPP
