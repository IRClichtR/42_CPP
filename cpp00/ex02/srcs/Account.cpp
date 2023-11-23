#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

//__________________________________________________________________Redeclaring

int Account::_nbAccounts;
int Account::_totalAmount; 
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

//__________________________________________________________________Contructor

Account::Account (int initial_deposit) : _accountIndex(getNbAccounts()), _amount(initial_deposit) {

  _nbDeposits = 0;
  _nbWithdrawals = 0;
  _nbAccounts++;
  _totalAmount += initial_deposit;
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ":amount" << _amount << ";created" << std::endl;
}

//__________________________________________________________________Accessors

int Account::getNbAccounts(void) {

  return (_nbAccounts);

}

int Account::getTotalAmount(void) {

  return (_totalAmount);

}

int Account::getNbDeposits(void) {

  return (_nbDeposits);

}

int Account::getNbWithdrawals(void) {

  return (_nbWithdrawals);

}

int Account::checkAmount(void) const{

  return (_amount);

}

void  _displayTimestamp(void) {

    std::time_t t = std::time(0);
    std::tm *now = std::localtime(&t);

    std::cout << "[" << (now->tm_year + 1900);

    if (now->tm_mon + 1 < 10)
        std::cout << '0';
    std::cout << (now->tm_mon + 1);

    if (now->tm_mday + 1 < 10)
        std::cout << '0';
    std::cout << (now->tm_mday + 1);

    if (now->tm_mon + 1 < 10)
        std::cout << '0';
    std::cout << (now->tm_mon + 1) << '_';

    if (now->tm_hour + 1 < 10)
        std::cout << '0';
    std::cout << (now->tm_hour + 1);

    if (now->tm_min + 1 < 10)
        std::cout << '0';
    std::cout << (now->tm_min + 1);

    if (now->tm_sec + 1 < 10)
        std::cout << '0';
    std::cout << (now->tm_sec + 1) << "] ";
  //
  // std::time_t time = std::time(NULL);
  // struct timeHMS*timeful = std::localtime(&time);
  //
  // std::cout << std::setfill('0') << "[" << 1900 + timefull->tm_year \
  //   << std::setw(2) << 1 + timefull->tm_mon \
  //   << std::setw(2) << timefull->tm_mday << "_" \
  //   << std::setw(2) << timefull->tm_hour << \
  //   << std::setw(2) << timefull->tm_min << \
  //   << std::setw(2) << timefull->tm_sec << "]";
  //
}

//__________________________________________________________________Display functions

void  Account::displayAccountsInfos(void) {

  _displayTimestamp();
  std::cout << "accounts:" << getNbAccounts() << ";" \
    << "total:" << getTotalAmount() << ";" \
    << "deposits:" << getNbDeposits() << ";" \
    << "withdrawals:" << getNbWithdrawals() << std::endl;

}

void  Account::displayStatus (void) const {

  _displayTimestamp();
  std::cout << "index:" << _accountIndex \
    << ";amount:" << _amount \
    << ";deposits:" << _nbDeposits \
    << ";withdrawals:" <<_nbWithdrawals << std::endl;

}

//__________________________________________________________________value_manipulation

void  Account::makeDeposit( int deposit) {

  if (deposit > 0) {

    _amount += deposit;
    _nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex \
      << ";p_amount:" << _amount - deposit \
      << ";deposit:" << deposit \
      << ";amount:" << _amount \
      << ";nb_deposits:" << _nbDeposits << std::endl;

  }

}

bool  Account::makeWithdrawal(int withdrawal) {

  if (withdrawal <= checkAmount() && withdrawal > 0) {

    _amount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex \
      << ";p_amount:" << _amount - withdrawal \
      << ";withdrawal:" << withdrawal \
      << ";amount:" << _amount \
      << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return (true) ;

  }
  _displayTimestamp();
  std::cout << "index:" << _accountIndex \
    << ";p_amount:" << _amount \
    << ";withdrawal:refused" <<std::endl;
}

//__________________________________________________________________Destructor

Account::~Account(void) {

  _nbAccounts--;
  _totalAmount -= _amount;
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;

}
