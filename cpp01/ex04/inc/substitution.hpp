#include "define.hpp"

class streamEditor {

public:
  streamEditor(void);
  ~streamEditor(void);

  static bool          checkFileName(char *filename);
  static bool          getIfs(char *filename, std::string *toSed);
  static std::string   sedMaker(std::string *toSed, char *strToFind, char *strReplace);
  static void          saveInFile(char *filename, std::string save);
  
};
