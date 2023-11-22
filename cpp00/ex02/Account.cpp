#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

//__________________________________________________________________Contructor

Account::Account (int initial_deposit) : _amount(initial_deposit), _NbDeposits(0), _NbWithdrawals(0) {

  _accountIndex = _nbAccounts;
  _nbAccounts++;
  _totalAmount += initial_deposit;
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ":amount" << _amount << ";created" << std::endl;
}

//__________________________________________________________________Accessors

int Account::getNbAccounts(void) const {

  return (_nbAccounts);
}

int Account::getTotalAmount(void) const {

  return (_totalAmount);
}

int Account::getNbDeposits(void) const {

  return (_NbDeposits);
}

int Account::getNbWithdrawals(void) const {

  return (_NbWithdrawals);
}

int checkAmount( void) const {

  return (_amount);
}

//__________________________________________________________________Display functions

void  Account::displayAccountInfos(void) const {

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
    << ";deposits:" << _NbDeposits \
    << ";withdrawals:" <<_NbWithdrawals << std::endl;

}

//__________________________________________________________________Destructor

void  Account::makeDeposit( int deposit) {

  if (deposit > 0) {

    _amount += deposit;
    _NbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex \
      << ";p_amount:" << _amount - deposit \
      << ";deposit:" << deposit \
      << ";amount:" << _amount \
      << ";nb_deposits:" << _NbDeposits << std::endl;

  }

}

bool  Account::makeWithdrawal(int withdrawal) {

  if (withdrawal <= checkAmount() && withdrawal > 0) {

    _amount -= withdrawal;
    _NbWithdrawals++;
    _totalNbWithdrawal++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex \
      << ";p_amount:" << _amount - deposit \
      << ";withdrawal:" << withdrawal \
      << ";amount:" << _amount \
      << ";nb_withdrawals:" << _NbWithdrawals << std::endl;
    return (true) ;

  }
  _displayTimestamp();
  std::cout << "index:" << _accountIndex \
    << ";p_amount:" << _amount \
    << ";withdrawal:refused" <<std:endl;
}
//__________________________________________________________________Destructor

Account::~Account(void) {

  _nbAccount--;
  _totalAmount -= _amount;
  _displayTimestamp();
  std::cout "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;

}
