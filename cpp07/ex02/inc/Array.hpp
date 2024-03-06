#ifndef ARRAY_HPP
# define ARRAY_HPP 

#include "define.hpp"

template <typename T>
class Array {

public:

  Array() : _array(new T[0]), _size(0) {std::cout << PURPLE << "Empty constructor called" << RESET << std::endl;}
  Array(unsigned int n) : _array(new T[n]), _size(n) {std::cout << PURPLE << "n values constructor called" << RESET << std::endl;}

  Array(const Array &other) : _array(new T[other._size]),_size(other._size) {
    for (unsigned int i = 0 ; i < this->_size ; i++)
      this->_array[i] = other._array[i];
    std::cout << PURPLE << "Copy constructor called" << RESET << std::endl;
  }

  Array & operator=(const Array &other) {

    if (this != &other) {
      delete [] this->_array;

      this->_array = new T[other._size];
      for (unsigned int i = 0 ; i <other._size ; i++)
        this->_array[i] = other._array[i];
    }
    this->_size = other._size;

    std::cout << PURPLE << "Assignment operator called" << RESET << std::endl;
    return (*this);
  }
  ~Array() {
    delete [] this->_array;
    std::cout << PURPLE << "Destructor called" << RESET << std::endl;
  };

  unsigned int    size() {return (this->_size);}

  T & operator[](unsigned int index) {

    if (index < _size)
      return (_array[index]);
    else
      throw std::exception();
    // return ();
  }

  class outOfRangeException {
  public:
    virtual const char * what() const throw() {return "Index not in Tab!";}
  };

private:
  
  T *           _array;
  unsigned int  _size;
};

#endif // !ARRAY_HPP
