#include "define.hpp"

class subInFile {

public:

  subInFile();
  subInFile(std::ifstream fdPath, std::string toSub, std::string subStr);
  ~subInFile();


private:

  std::ifstream _fdPath;
  std::string   _toSub;
  std::string   _subStr;
  
};
