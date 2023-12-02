/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <rdolzi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:32:44 by rdolzi            #+#    #+#             */
/*   Updated: 2023/12/01 21:12:32 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(){
    this->index = 0;
    this->is_empty = true;
}

int Contact::getIndex(void){
    return (this->index);
}
Contact &Contact::setIndex(int index){
    this->index = index;
    return (*this);
}

bool Contact::isEmpty(void){
    return (this->is_empty);
}
void Contact::setNotEmpty(void){
    this->is_empty = false;
}

std::string Contact::getFirstName(void){
    return (this->firstName);
}
Contact &Contact::setFirstName(void){
    std::string text;
    
    while (true)
    {
        // std::cin.clear();
        std::cout << "Enter First Name> ";
        // std::cout.flush();
        std::getline(std::cin, text);
        // std::cin.ignore(INT_MAX, '\n');
        std::cin >> text;
        if (text.size())
        {
            this->firstName = text;
            return (*this);
        }
    }
}

std::string Contact::getLastName(void){
    return (this->lastName);
}
Contact &Contact::setLastName(void){
    std::string text;

    while (true)
    {
        std::cout << "Enter Last Name> ";
        std::cin >> text;
        if (text.size())
        {
            this->lastName = text;
            return (*this);
        }
    }
}

std::string Contact::getNickname(void){
    return (this->nickname);
}
Contact &Contact::setNickname(void){
    std::string text;

    while (true)
    {
        std::cout << "Enter Nickname> ";
        std::cin >> text;
        if (text.size())
        {
            this->nickname = text;
            return (*this);
        }
    }
}

std::string Contact::getPhoneNumber(void){
    return (this->phoneNumber);
}
Contact &Contact::setPhoneNumber(void){
    std::string text;

    while (true)
    {
        std::cout << "Enter Phone Number> ";
        std::cin >> text;
        if (text.size())
        {
            this->phoneNumber = text;
            return (*this);
        }
    }
}

std::string Contact::getDarkestSecret(void){
    return (this->darkestSecret);
}
Contact &Contact::setDarkestSecret(void){
    std::string text;

    while (true)
    {
        std::cout << "Enter Darkest Secret> ";
        std::cin >> text;
        if (text.size())
        {
            this->darkestSecret = text;
            return (*this);
        }
    }
}