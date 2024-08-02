/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:33:48 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/02 13:33:57 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// std::cout << std::endl;
Account::Account( int initial_deposit ): _amount(initial_deposit) {

  _accountIndex = _nbAccounts;
  _nbAccounts++;
  _totalAmount += initial_deposit;
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;

 }

int   Account::checkAmount( void ) const { return (_amount); }

void  Account::makeDeposit( int deposit ) {
    
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits += 1;
    _totalNbDeposits += 1;
    std::cout << ";deposits:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

void  Account::displayStatus( void ) const {

  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";amount:" << _amount;
  std::cout << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

bool  Account::makeWithdrawal( int withdrawal ) {

  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
  if (checkAmount() < withdrawal) {

    std::cout << ";refused:" << std::endl;
    return (false);
    
  }
  _amount -= withdrawal;
  _totalAmount -= withdrawal;
  _nbWithdrawals++;
  _totalNbWithdrawals++;
  std::cout << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals;
  std::cout << std::endl;
  return (true);
}



int  Account::getNbAccounts( void ) { return (_nbAccounts); }

int  Account::getTotalAmount( void ) { return(_totalAmount); }

int  Account::getNbDeposits( void ) { return(_totalNbDeposits); }

int  Account::getNbWithdrawals( void ) { return(_totalNbWithdrawals); }


void Account::displayAccountsInfos( void ) {

  _displayTimestamp();
  std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:";
  std::cout << _totalNbDeposits  << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}


void Account::_displayTimestamp( void ) {

  //return the current time as a time_t object
  //converts the time_t object to a tm struct 
  //that has tm_year, tm_mon, tm_mday, tm_hour, tm_min, tm_sec.

  time_t now = std::time(0);
  tm *local_time = std::localtime(&now);

  // Buffer to hold the formatted date/time string
  // Format the time as YYYYMMDD_HHMMSS
  char buffer[20];
  std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", local_time);
  std::cout << buffer;
}

Account::~Account( void ) {

  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}
