#ifndef HARL_HPP
# define HARL_HPP

#include "define.hpp"

class Harl {

  public:

    Harl();
    ~Harl();

    void    switchStatements(std::string level);

  private:

    void    _debug(void);
    void    _info(void);
    void    _warning(void);
    void    _error(void);
};

#endif // !HARL_HPP
