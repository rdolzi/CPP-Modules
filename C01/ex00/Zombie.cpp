/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <rdolzi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:07:09 by rdolzi            #+#    #+#             */
/*   Updated: 2023/12/05 23:48:41 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {}

Zombie::Zombie(std::string name){
    this->name = name;
}

Zombie::~Zombie(void){
    std::cout << this->name <<": is zombie is dead again!(Destructor called)\n";
}

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

std::string Zombie::getName(void){
    return(this->name);
}

void Zombie::setName(std::string name){
    this->name = name;
}
