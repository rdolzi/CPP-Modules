/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <rdolzi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:32:48 by rdolzi            #+#    #+#             */
/*   Updated: 2023/12/05 17:39:53 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>

PhoneBook::PhoneBook(void){
   this->index = 0;
}

void PhoneBook::addContact(void){
    std::string text;
    
    if (this->index == 8)
        this->index = 0;
    std::cout << "-----Adding contact-----" << '\n';
    this->contacts[index].setFirstName().setLastName().setNickname().setPhoneNumber().setDarkestSecret().setIndex(this->index).setNotEmpty();
    std::cout << "------------------------" << '\n';
    this->index++;
}
/*
1)Display the saved contacts as a list of 4 columns: 
    - index
    - first name
    - last name 
    - nickname
2)Each column must be 10 characters wide.
3)A pipe character (’|’) separates them.
4)The text must be right-aligned.
    If the text is longer than the column, it must be truncated and the last displayable character must be replaced by a dot (’.’).
*/

// prende stringa come input e ritorna una nuova stringa
std::string PhoneBook::printColumn(std::string text){
    int i = 0;
    std::string res(PAD, ' ');
    int idx = ((PAD - (int)text.length()) < 0) ? 0 : (PAD - (int)text.length());
    
    for (; idx < PAD; idx++)
        res[idx] = text[i++]; 
    if ((int)text.length() > PAD)
        res[9] = '.';
    return (res);
}

void PhoneBook::printLine(void)
{
    std::cout << "|-------------------------------------------|" << '\n';
}

void PhoneBook::printHeader(void)
{
    std::cout << '|' << printColumn("Index") << '|' << printColumn("First Name") << '|' << printColumn("Last Name") << '|' << printColumn("Nickame") << "|\n";
}

void PhoneBook::displayAllContacts(void){
    Contact c;

    printLine();
    printHeader();
    printLine();
    //printRows
    for(int i = 0; i < 8 ; i++)
    {
        c = this->contacts[i];
         std::ostringstream ss;
        ss << c.getIndex();
        if (!this->contacts[i].isEmpty())
            std::cout << '|' << printColumn(ss.str()) << '|' << printColumn(c.getFirstName()) << '|' << printColumn(c.getLastName()) << '|' << printColumn(c.getNickname()) <<  "|\n";
    }
    printLine();
}

bool PhoneBook::displayContact(int idx)
{
    Contact c;
    for (int i = 0; i < SIZE; i++)
    {
        if (idx >= 0 && idx < 8 && !this->contacts[idx].isEmpty())
        {
            c = this->contacts[idx];
            std::cout << '\n';
            std::cout << "-----Full Contact Information-----" << '\n';
            std::cout << "Index:          " << c.getIndex() << '\n';
            std::cout << "First Name:     " << c.getFirstName() << '\n';
            std::cout << "Last Name:      " << c.getLastName() << '\n';
            std::cout << "Nickname:       " << c.getNickname() << '\n';
            std::cout << "Phone Number:   " << c.getPhoneNumber() << '\n';
            std::cout << "Darkest Secret: " << c.getDarkestSecret() << '\n';
            std::cout << "----------------------------------" << '\n';
            break ;
        }
        else
            return (false);
    }
    return (true);
}

bool stringToInt(int &i, std::string index)
{
    std::stringstream ss(index);
    
    ss >> i;
    if (ss.fail())
    {
        // not an integer
        return false;
    }
    return true;
}

void PhoneBook::search(void){
    std::string index;
    int i = 0;
    this->displayAllContacts();
    
    while (true)
    {
        std::cout << "Enter Index > ";
        std::getline(std::cin, index);
        std::cin >> index;
        if (index.size() && stringToInt(i, index))
            if(this->displayContact(i))
                return ;
    }
}

