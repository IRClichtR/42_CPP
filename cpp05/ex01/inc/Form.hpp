#ifndef FORM_HPP
# define FORM_HPP

# include "define.hpp"

class Form {

public:

  Form(std::string name, unsigned int signGrade, unsigned int execGrade, bool signStatus);
  Form(const Form &);
  Form &operator=(const Form &);
  ~Form();

  void                beSigned(bool value);

  bool                getIsSigned() const;
  const std::string&  getName() const;
  const unsigned int  getGradeToSign() const;
  const unsigned int  getGradeToExec() const;

  class GradeTooHighException : public std::exception {

    public:
      const char* what() const throw() {
        return ("Grade too High to Handle Form!")
      }
  };

  class GradeTooLowException : public std::exception {

    public:
      const char* what() const throw() {
        return ("Grade too Low to Handle Form!")
      }
  };

private:
  
  const std::string   _name;
  const unsigned int  _gradeToSign;
  const unsigned int  _gradeToExec;
  bool                _isSigned;

  Form();
};

#endif // !FORM_HPP
