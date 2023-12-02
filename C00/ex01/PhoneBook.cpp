/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <rdolzi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:32:48 by rdolzi            #+#    #+#             */
/*   Updated: 2023/12/02 01:52:53 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>


PhoneBook::PhoneBook(void){
   this->index = 0;
}

void PhoneBook::addContact(void){
    std::string text;
    
    if (this->index == 7)
        this->index = 0;
    std::cout << "-----Adding contact-----" << '\n';
    this->contacts[index].setFirstName().setLastName().setNickname().setPhoneNumber().setDarkestSecret().setIndex(this->index).setNotEmpty();
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
    for(int i = 0; i < SIZE ; i++){
        c = this->contacts[i];
        if (!this->contacts[i].isEmpty())
            std::cout << '|' << printColumn(std::to_string(c.getIndex())) << '|' << printColumn(c.getFirstName()) << '|' << printColumn(c.getLastName()) << '|' << printColumn(c.getNickname()) << "|\n";
        }
    printLine();
}

void PhoneBook::displayContact(std::string index){
    (void) index;
}

void PhoneBook::search(void){
    std::string index;
    
    this->displayAllContacts();
    while (true)
    {
        std::cout << "Enter Index > ";
        std::getline(std::cin, index);
        std::cin >> index;
        if (index.size())
            return(this->displayContact(index));
    }
}

