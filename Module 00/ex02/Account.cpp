/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 10:09:24 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/10 16:10:38 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


int	Account::getNbAccounts()
{
	return(_nbAccounts);
}

int	Account::getTotalAmount()
{
	return(_totalAmount);
}

int	Account::getNbDeposits()
{

	return(_totalNbDeposits);
}

int	Account::getNbWithdrawals()
{
	return(_totalNbWithdrawals);
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "Accounts:" << _nbAccounts << ';' << "total:" << _totalAmount << ';' << "deposits:"
				<< _totalNbDeposits << ';' << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	_totalAmount = _totalAmount + deposit;
	_nbDeposits = 1;
	_totalNbDeposits++;
	std::cout << "index:" << _accountIndex << ';' << "p_amount:" << _amount << ';' << "deposits:"
				<< deposit << ';' << "amount" << _totalAmount << ';' << "nb_Deposits:" << _nbDeposits <<std::endl;
	return;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	if (withdrawal < _totalAmount)
	{
		_totalAmount = _totalAmount - withdrawal;
		_nbWithdrawals = 1;
		_totalNbWithdrawals++;
		std::cout << "index:" << _accountIndex << ';' << "p_amount:" << _amount << ';' << "withdrawal:"
				<< withdrawal << ';' << "amount:" << _totalAmount << ';' << "nb_nbWithdrawals:" << _nbWithdrawals <<std::endl;
		return (true);
	}
	else
	{
		std::cout << "index:" << _accountIndex << ';' << "p_amount:" << _amount << "withdrawal:" << "refused" <<std::endl;
	return (false);

}

int		Account::checkAmount() const
{
	return(_amount);
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';' << "amount:" << _totalAmount << ';' << "deposits:" << _totalNbDeposits << ';' << "withdrawals:" << _totalNbWithdrawals << std::endl;
	return;
}

void	Account::_displayTimestamp()
{
	std::time_t now = std::time(NULL);
	std::tm* localTime = std::localtime(&now);

	char timestamp[15];
	std::strftime(timestamp, sizeof(timestamp), "%Y%m%d_%H%M%S", localTime);
	std::cout << "[" << timestamp << "]";
}

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbWithdrawals = 0;
	_nbDeposits = 0;
	_totalAmount = _totalAmount + _amount;
	_nbAccounts++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';' << "amount:" << _amount << ';' << "created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';' << "amount:" << _amount << ';' << "closed" << std::endl;
}
