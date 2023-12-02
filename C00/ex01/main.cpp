/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <rdolzi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:01:48 by rdolzi            #+#    #+#             */
/*   Updated: 2023/12/02 17:08:07 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>


int main()
{
    PhoneBook phoneBook;
    std::string command;
    
    std::cout << "********************************************" << '\n';
    std::cout << "          Welcome on your PhoneBook!        " << '\n';
    std::cout << "********************************************" << '\n';
    while (true){
        std::cout << "Enter the command>";
        std::cin >> command;
        std::cout << '\n';
        if (command == "ADD")
            phoneBook.addContact();
        else if (command == "SEARCH")
            phoneBook.search();
        else if (command == "EXIT")
            return(0);
        else
            std::cout << "Please insert a valid command: ADD, SEARCH, EXIT" << '\n';
    }
    return (0);
}