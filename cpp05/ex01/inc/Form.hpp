#ifndef FORM_HPP
# define FORM_HPP

# include "define.hpp"
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
  
public:

  Form(std::string& name, unsigned int gToSign, unsigned int gToExec);
  Form(const Form &);
  Form &operator=(const Form &);
  ~Form();

  const std::string&  getName() const;
  unsigned int  getGradeToSign() const;
  unsigned int  getGradeToExec() const;
  bool                getSignStatus() const;

  void                checkGrade() const;
  void                beSigned(const Bureaucrat&);
  
  class GradeTooHighException : public std::exception {
  public:
    virtual const char * what() const throw() {
      return ("Grade Too High!");
    }
  };

  class GradeTooLowException : public std::exception {
  public:
    virtual const char * what() const throw() {
      return ("Grade Too Low!");
    }
  };

private:

  const std::string&  _name;
  const unsigned int  _gToSign;
  const unsigned int  _gToExec;
  bool                _signStatus;
  
  Form();
};

std::ostream& operator<<(std::ostream&, const Form&);

#endif // !FORM_HPP
