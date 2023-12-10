/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <rdolzi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:05:44 by rdolzi            #+#    #+#             */
/*   Updated: 2023/12/06 20:46:40 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(){
    std::string str;
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    str = "HI THIS IS BRAIN";
    
    std::cout << "\n----- Addresses -----" << '\n';
    std::cout << "The memory address of str:            " << &str << '\n';
    std::cout << "The memory address held by stringPTR: " << &stringPTR << '\n';
    std::cout << "The memory address held by stringREF: " << &stringREF << '\n';

    std::cout << "\n------- Values -------" << '\n';
    std::cout << "The value of str:                     " << str << '\n';
    std::cout << "The value pointed to by stringPTR:    " << *stringPTR << '\n';
    std::cout << "The value pointed to by stringREF:    " << stringREF << '\n';
}

