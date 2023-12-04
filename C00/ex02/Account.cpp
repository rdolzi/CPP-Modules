/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <rdolzi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:57:22 by rdolzi            #+#    #+#             */
/*   Updated: 2023/12/05 00:28:34 by rdolzi           ###   ########.fr       */
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
    std::string timestamp(30, '\0');

    std::strftime((char *)timestamp.data(), timestamp.size(), "%Y%m%d_%H%M%S", std::localtime(&currentTime));
    std::cout << '[' << timestamp << "] ";
}

Account::Account(int deposit)
{
    (void)deposit;
    displayTimestamp();
    std::cout << "CREATO" << std::endl;
}

Account::~Account(void)
{
    displayTimestamp();
    std::cout << "DISTRUTTO" << std::endl;
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
    std::cout << "ACCOUNT INFO" << std::endl;
}

void Account::makeDeposit(int deposit)
{
    (void)deposit;
    displayTimestamp();
    std::cout << "FATTO DEPOSITO" << std::endl;
}
bool Account::makeWithdrawal(int withdrawal)
{
    (void)withdrawal;
    displayTimestamp();
    std::cout << "FATTO RITIRO" << std::endl;
    return (true);
}
int Account::checkAmount(void) const
{
    displayTimestamp();
    std::cout << "CHECK AMOUNT" << std::endl;
    return (1);
}
void Account::displayStatus(void) const
{
    displayTimestamp();
    std::cout << "DISPLAY STATUS" << std::endl;
}