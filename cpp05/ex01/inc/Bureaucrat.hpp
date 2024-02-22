#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "define.hpp"
// # include "Form.hpp"

class Form;

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
  void  signForm(Form&);

  class   GradeTooHighException : public std::exception {
    public:
      virtual const char * what() const throw() {
        return ("Grade too High!");
      }
  };

  class GradeTooLowException : public std::exception {
  public:
    virtual const char * what() const throw() {
      return ("Grade Too Low!");
    }
  };
  // class   GradeTooLowException : public std::exception {
  //   public:
  //     GradeTooLowException() throw() {}
  //     GradeTooLowException(const std::string& error_msg) throw() : _message(error_msg) {}
  //
  //     virtual const char * what() const throw() {
  //       return (_message.empty() ? "Grade too Low!" : _message.c_str());
  //     }
  //
  //   private:
  //     std::string _message;
  // };
  //
private:

  const std::string&  _name;
  unsigned int        _grade;

  Bureaucrat();
};

std::ostream&  operator<<(std::ostream&, const Bureaucrat&);

#endif // !BUREAUCRAT_HPP
