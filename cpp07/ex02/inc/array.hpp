#ifndef ARRAY_HPP
# define ARRAY_HPP 

#include "define.hpp"

template <typename T>
class Array {

public:

  Array() : _array(new T[0]), _size(0) {}
  Array(unsigned int n) : _array(new T[n]), _size(n) {}

  Array(const Array &other) : _array(new T[other._size]),_size(other._size) {
    for (unsigned int i = 0 ; i < this->_size ; i++)
      this->_array[i] = other._array[i];
  }

  Array & operator=(const Array &other) {

    if (this != &other) {
      delete [] this->_array;

      this->_array = new T[other._size];
      for (unsigned int i = 0 ; i <other._size ; i++)
        this->_array[i] = other._array[i];
    }
    this->_size = other._size;

    return (*this);
  }
  ~Array() {delete [] this->_array;};

  unsigned int    size() {return (this->_size);}

  T & operator[](unsigned int index) {

    if (index < _size)
      return (_array[index]);
    else
      throw std::exception();
    return (0);
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
