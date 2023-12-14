#include "define.hpp"

//Constructors Destructors_______/

streamEditor::streamEditor(void) {}
streamEditor::~streamEditor(void) {}


//Public functions_______________/

bool streamEditor::checkFileName(char *filename) {

  std::ifstream ifs(filename);

  if (!ifs.good())
   return (false);

  return (true);
}

bool  streamEditor::getIfs(char *filename, std::string *toSed) {
  
  std::ifstream ifs(filename);

  std::getline(ifs, *toSed, '\0');

  if (toSed->empty())
    return (false);
  return (true);
}

std::string streamEditor::sedMaker(std::string *toSed, char *strToFind, char *strReplace) {

  std::string res;
  std::string needle(strToFind);

  for (size_t i = 0; i < toSed->length(); i++) {

    std::string match = toSed->substr(i, needle.length());

    if (needle.compare(match) == 0) {

      res += strReplace;
      i += needle.length() - 1;
    }
    else
      res += toSed->at(i);
  }

  return (res);
  
}

void  streamEditor::saveInFile(char *filename, std::string save) {

  std::string   out = std::string(filename).append(".replace");
  std::ofstream ofs(out.c_str());

  ofs.write(save.c_str(), save.length());
}
