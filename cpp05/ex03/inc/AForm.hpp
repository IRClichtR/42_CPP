#ifndef AFORM_HPP
# define AFORM_HPP

# include "define.hpp"
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
  
public:

  AForm(std::string name, unsigned int gToSign, unsigned int gToExec);
  AForm(const AForm &);
  AForm &operator=(const AForm &);
  virtual ~AForm();

  virtual const std::string&  getName() const;
  virtual unsigned int        getGradeToSign() const;
  virtual unsigned int        getGradeToExec() const;
  virtual bool                getSignStatus() const;

  virtual void                checkGrade() const;
  virtual void                beSigned(const Bureaucrat&);
  virtual void                execute(Bureaucrat const &) const = 0;
  virtual void                setTarget(std::string const & target);
  
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

  class NotSignedException : public std::exception {
  public:
    virtual const char * what() const throw() {
      return ("Form is not signed!");
    }
  };

  class InvalidException : public std::exception {
  public:
    virtual const char * what() const throw() {
      return ("Invalid form!");
    }
  };

private:

  const std::string   _name;
  const unsigned int  _gToSign;
  const unsigned int  _gToExec;
  bool                _signStatus;
  
  AForm();
};

std::ostream& operator<<(std::ostream&, const AForm&);

#endif // !AFORM_HPP
