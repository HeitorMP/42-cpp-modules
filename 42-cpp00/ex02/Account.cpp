/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 12:05:29 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/06/18 20:28:07 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalNbWithdrawals = 0;
int Account::_totalNbDeposits = 0;
int	Account::_totalAmount = 0;

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts += 1;
	Account::_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << std::flush;
	std::cout << "amount:" << this->_amount << ";" << std::flush;
	std::cout << "created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << std::flush;
	std::cout << "amount:" << this->_amount << ";" << std::flush;
	std::cout << "closed" << std::endl;
}

void Account::_displayTimestamp( void ) {
    //output format: [YYYYMMDD_HHMMSS]
	time_t t = time(NULL);
	tm *ltm = localtime(&t);

	std::cout << "[" << std::flush;
	std::cout << 1900 + ltm->tm_year<<std::flush;
	if (ltm->tm_mon < 10) {std::cout << "0" << std::flush;}
	std::cout << 1 + ltm->tm_mon<< std::flush;
	if (ltm->tm_mday < 10) {std::cout << "0" << std::flush;}
	std::cout << ltm->tm_mday << std::flush;
	std::cout << "_" << std::flush;
	if (ltm->tm_hour < 10) {std::cout << "0" << std::flush;}
	std::cout << ltm->tm_hour << std::flush;
	if (ltm->tm_min < 10) {std::cout << "0" << std::flush;}
	std::cout << ltm->tm_min << std::flush;
	if (ltm->tm_sec < 10) {std::cout << "0" << std::flush;}
	std::cout << ltm->tm_sec << std::flush;
	std::cout << "] " << std::flush;
}

int	Account::getNbAccounts( void ) {
    return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void ) {
    return (Account::_totalAmount);
}

int	Account::getNbDeposits( void ) {
    return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {
    return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";" << std::flush;
	std::cout << "total:" << Account::_totalAmount << ";" << std::flush;
	std::cout << "deposits:" << Account::_totalNbDeposits << ";" << std::flush;
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	if (deposit > 0) {
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";" << std::flush;
		std::cout << "p_amount:" << this->_amount << ";" << std::flush;
		std::cout << "deposit:" << deposit << ";" << std::flush;
		this->_nbDeposits += 1;
		this->_amount += deposit;
		std::cout << "amount:" << this->_amount << ";" << std::flush;
		std::cout << "nb_deposits:" << this->_nbDeposits <<  std::endl;
		Account::_totalNbDeposits += 1;
		Account::_totalAmount += deposit;
	}
}

bool	Account::makeWithdrawal( int withdrawal ) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << std::flush;
	std::cout << "p_amount:" << this->_amount << ";" << std::flush;
 	if (_amount > withdrawal) {
		this->_amount -= withdrawal;
		this->_nbWithdrawals += 1;
		Account::_totalNbWithdrawals += 1;
		Account::_totalAmount -= withdrawal;
		std::cout << "withdrawal:" << withdrawal << ";" << std::flush;
		std::cout << "amount:" << this->_amount << ";" << std::flush;
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
	std::cout << "withdrawal:" << "refused" << std::endl;
	return (false);
}

int		Account::checkAmount( void ) const {
	return (this->_amount);
}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << std::flush;
	std::cout << "amount:" << this->_amount << ";" << std::flush;
	std::cout << "deposits:" << this->_nbDeposits << ";" << std::flush;
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}