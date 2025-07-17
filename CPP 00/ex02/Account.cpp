/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 11:09:59 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/05 16:14:39 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int index = 0;
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account()
{
	_displayTimestamp();
	_totalNbWithdrawals = 0;
	_totalNbDeposits = 0;
	_nbAccounts++;
	this->_accountIndex = index;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << "index:" << index << ";amount:" << this->_amount << ";created";
	std::cout << "\n";
	index++;
}

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	_totalNbWithdrawals = 0;
	_totalNbDeposits = 0;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	this->_accountIndex = index;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << "index:" << index << ";amount:" << this->_amount << ";created";
	std::cout << "\n";
	index++;
}

Account::~Account()
{
	if (index > 7)
		index = 0;
	_displayTimestamp();
	std::cout << "index:" << index << ";amount:" << this->_amount << ";closed";
	std::cout << "\n";
	_nbAccounts--;
	index++;
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::makeDeposit( int deposit )
{
	if (index > 7)
		index = 0;
	_displayTimestamp();
	std::cout << "index:" << index << ";p_amount:" << this->_amount << ";deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	std::cout << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits;
	std::cout << "\n";
	index++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (index > 7)
		index = 0;
	_displayTimestamp();
	if (withdrawal > this->_amount)
	{
		std::cout << "index:" << index << ";p_amount:" << this->_amount << ";withdrawal:refused";
		std::cout << "\n";
		index++;
		return (false);
	}
	std::cout << "index:" << index << ";p_amount:" << this->_amount;
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	std::cout<< ";withdrawal:" << withdrawal;
	std::cout << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals;
	std::cout << "\n";
	index++;
	return (true);
}


int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::_displayTimestamp( void )
{
	time_t timestamp = time(NULL);
	
	struct tm datetime = *localtime(&timestamp);
	
	char output[50];
	strftime(output, 50, "[%Y%m%d_%H%M%S] ", &datetime);
	std::cout << output;
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts;
	std::cout << ";total:" << _totalAmount;
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals();
	std::cout << "\n";
}

void	Account::displayStatus( void ) const
{
	if (index > 7)
		index = 0;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount  << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals;
	std::cout << "\n";
	index++;
}
