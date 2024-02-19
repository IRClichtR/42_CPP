#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

class Bureaucrat {

public:

  Bureaucrat();
  Bureaucrat(const Bureaucrat &) = default;
  Bureaucrat &operator=(const Bureaucrat &) = default;
  ~Bureaucrat();

  std::string&  getName() const;
  std::string&  getGrade() const;
  
  const void  GradeTooHighException() const;
  const void  GradeTooLowException() const;

private:
  
  const std::string         _name;
  unsigned int              _level;

};

#endif // !BUREAUCRAT_HPP
