#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

class Bureaucrat {

public:

  Bureaucrat(std:: string name, unsigned int level);
  Bureaucrat(const Bureaucrat &);
  Bureaucrat &operator=(const Bureaucrat &);
  ~Bureaucrat();

  void                checkGrade() const;
  const std::string&  getName() const;
  unsigned int        getGrade() const;
  void                setGrade(unsigned int newGrade);
  void                incGrade(unsigned int amount);
  void                decGrade(unsigned int amount);

  class GradeTooHighException : public std::exception {
  public:
    const char* what() const throw() {
      return ("Grade is too High ( < 1)");
    }
  };

  class GradeTooLowException : public std::exception {
  public:
    const char* what() const throw() {
      return ("Grade is too Low ( > 150)");
    }
  };

private:
  
  const std::string   _name;
  unsigned int        _level;

};

std::ostream& operator<<(std::ostream&, const Bureaucrat&);

#endif // !BUREAUCRAT_HPP
