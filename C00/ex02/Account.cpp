/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <rdolzi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:57:22 by rdolzi            #+#    #+#             */
/*   Updated: 2023/12/05 17:40:22 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
 
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void displayTimestamp(void)
{
    std::time_t currentTime = std::time(nullptr);
    std::string timestamp(16, 'r');

    std::strftime((char *)timestamp.data(), timestamp.size(), "%Y%m%d_%H%M%S", std::localtime(&currentTime));
    std::cout << '[' << timestamp << "] ";
}

Account::Account(int deposit)
{
    this->_accountIndex = Account::_nbAccounts;
    this->_amount = deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    Account::_nbAccounts += 1;
    displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";created";
    std::cout << '\n';
    Account::_totalAmount += this->_amount;
}

Account::~Account(void)
{
    displayTimestamp();
    Account::_nbAccounts -= 1;
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";closed";
    std::cout << '\n';
    Account::_totalAmount -= this->_amount;
}

int Account::getNbAccounts(void)
{
    return(Account::_nbAccounts);
}
int Account::getTotalAmount(void)
{
    return(Account::_totalAmount);
}
int Account::getNbDeposits(void)
{
    return(Account::_totalNbDeposits);
}
int Account::getNbWithdrawals(void)
{
    return(Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
    displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts;
    std::cout << ";total:" << Account::_totalAmount;
    std::cout << ";deposits:" << Account::_totalNbDeposits;
    std::cout << ";withdrawals:" << Account::_totalNbWithdrawals;
    std::cout << '\n';
}

void Account::makeDeposit(int deposit)
{
    this->_amount += deposit;
    this->_nbDeposits += 1;
    displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";p_amount:" << this->_amount - deposit;
    std::cout<< ";deposit:" << deposit;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";nb_deposits:" << this->_nbDeposits;
    std::cout << '\n';
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits += 1;
}
bool Account::makeWithdrawal(int withdrawal)
{
    displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";p_amount:" << this->_amount;
    std::cout << ";withdrawal:";
    if (withdrawal > this->_amount)
    {
        std::cout << "refused" << std::endl;
        return (false);
    }
    this->_amount -= withdrawal;
    this->_nbWithdrawals += 1;
    std::cout << withdrawal;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";nb_withdrawals:" << this->_nbWithdrawals;
    std::cout << '\n';
    Account::_totalAmount -= withdrawal;
    Account::_totalNbWithdrawals += 1;
    return (true);
}
int Account::checkAmount(void) const
{
    return (this->_amount);
}
void Account::displayStatus(void) const
{
    displayTimestamp();
    std::cout << "index:"   << this->_accountIndex;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";deposits:" << this->_nbDeposits;
    std::cout << ";withdrawals:" << this->_nbWithdrawals;
    std::cout << '\n';
}