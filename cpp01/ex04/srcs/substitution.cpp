#include "define.hpp"

subInFile::subInFile() {

}

subInFile::subInFile(const std::ifstream fdPath, const std::string toSub, const std::string subStr) : _fdPath(fdPath), _toSub(toSub), _subStr(subStr) {

  if (!fdPath.is_open()) {

    atexit(errOpen);
  }

}

subInFile::~subInFile() {

}
