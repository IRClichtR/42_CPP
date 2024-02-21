#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "define.hpp"

class Bureaucrat {

public:

  Bureaucrat(std::string& name, unsigned int grade);
  Bureaucrat(const Bureaucrat &);
  Bureaucrat &operator=(const Bureaucrat &);
  ~Bureaucrat();

  const std::string&  getName() const;
  unsigned int        getGrade() const;

  void  checkGrade() const;
  void  upGrade();
  void  downGrade();

  class   GradeTooHighException : public std::exception {
    public:
      virtual const char * what() const throw() {
        return ("Grade too High!");
      }
  };

  class   GradeTooLowException : public std::exception {
    public:
      virtual const char * what() const throw() {
        return ("Grade too Low!");
      }
  };

private:

  const std::string&  _name;
  unsigned int        _grade;

  Bureaucrat();
};

std::ostream&  operator<<(std::ostream&, const Bureaucrat&);

#endif // !BUREAUCRAT_HPP
