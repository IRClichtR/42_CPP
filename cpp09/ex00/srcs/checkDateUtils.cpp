#include "define.hpp"

bool  checkDateDigits(const std::string &date) {

  for (size_t i = 0 ; i != date.length() ; i++) {

    if (i == 4 || i == 7)
      i += 1;
    if (!isdigit(date[i]))
      return (false);
  }
  return (true);
}

bool  isBisextile(int year) {
  std::cout << year << std::endl; 
    if (year % 4 == 0 && year % 100 != 0 && year % 400 != 0)
    return (true);
  return (false);
}

bool is31Month(int month) {

  if ((month < 7 && month % 2) 
      || month == 7 || month == 8
      || (month > 8 && month % 2 == 0))
    return (true);
  return (false);
}

bool  checkMonths(const std::string &date) {

  std::string yearStr = date.substr(0, 4);
  std::string monthStr = date.substr(5, 6);
  std::string dayStr = date.substr(8, 9);

  int year = atoi(yearStr.c_str());
  int month = atoi(monthStr.c_str());
  int day = atoi(dayStr.c_str());

  if (month == 0 || month > 12 || day == 0 || day > 31)
    return (false);

  if ((is31Month(month) && day > 31) || (!is31Month(month) && day > 30))
    return (false);
  else if ((month == 2 && isBisextile(year) && day > 29) 
      || (month == 2 && !isBisextile(year) && day > 28))
    return (false);

  return (true);
}

void  checkDate(const std::string &date) {

  if (date.length() != 10 || date[4] != '-' || date[7] != '-')
    throw InvalidDate();

  if (!checkDateDigits(date) || !checkMonths(date))
    throw InvalidDate();
}

int dateDiff(const std::string& chart, const std::string& target) {

  struct tm chartTm = {0};
  struct tm targetTm = {0};

  std::strptime(chart.c_str(), "%Y-%m-%d", &chartTm);
  std::strptime(target.c_str(), "%Y-%m-%d", &targetTm);

  time_t chartTime = mktime(&chartTm);
  time_t targetTime = mktime(&targetTm);

  double diff = std::difftime(chartTime, targetTime);

  return static_cat<int>(std::round(difference / (60 * 60 * 24)));
}

/*
int main(int ac, char **av) {

  if (ac != 2) {
    std::cout << "Not enough arguments" << RESET << std::endl;
    return (0);
  }

  std::string date = av[1];
  if (checkDate(date) == true)
    std::cout << GREEN << date << "is Valid" << RESET << std::endl;
  else {
    std::cerr << RED << date << "is not valid" << RESET << std::endl;
  }
  return (0);
}

*/
