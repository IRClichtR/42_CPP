#ifndef HARL_HPP
# define HARL_HPP

#include "define.hpp"

typedef std::map<std::string, int>  mapType;

class Harl {

  public:

    Harl();
    ~Harl();

    void  complain(std::string choice);

  private:

    void     (Harl::*funcPtrArray[4])();
    mapType  funcMap;

    void    _debug(void);
    void    _info(void);
    void    _warning(void);
    void    _error(void);
};

#endif // !HARL_HPP
