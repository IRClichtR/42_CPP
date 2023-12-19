#include "define.hpp"

bool  checkInput(std::string usrInput) {

  if (!usrInput.compare("DEBUG") ||
      !usrInput.compare("INFO") ||
      !usrInput.compare("WARNING") ||
      !usrInput.compare("ERROR"))
    return (true);

  return (false);
}
