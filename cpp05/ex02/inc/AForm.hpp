#ifndef AFORM_HPP
# define AFORM_HPP

# include "define.hpp"
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
  
public:

  AForm(std::string& name, unsigned int gToSign, unsigned int gToExec);
  AForm(const AForm &);
  AForm &operator=(const AForm &);
  ~AForm() = 0;

  const std::string&  getName() const = 0;
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
  
  AForm();
};

std::ostream& operator<<(std::ostream&, const AForm&);

#endif // !AFORM_HPP
