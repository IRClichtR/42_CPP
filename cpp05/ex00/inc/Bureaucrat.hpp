#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

class Bureaucrat {

public:

  Bureaucrat(std:: string name, unsigned int level);
  Bureaucrat(const Bureaucrat &);
  Bureaucrat &operator=(const Bureaucrat &);
  ~Bureaucrat();

  const std::string&        getName() const;
  unsigned int        getGrade() const;
  
  void                GradeTooHighException() const;
  void                GradeTooLowException() const;
  void                incGrade();
  void                decGrade();

private:
  
  std::string         _name;
  unsigned int        _level;

};

std::ostream& operator<<(std::ostream&, const Bureaucrat&);

#endif // !BUREAUCRAT_HPP
