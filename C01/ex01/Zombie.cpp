/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <rdolzi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:23:27 by rdolzi            #+#    #+#             */
/*   Updated: 2023/12/06 18:54:49 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){
    std::cout << "A new zombie is born!(Constructor called)\n";
}

Zombie::~Zombie(void) {
    std::cout << this->name << ": is dead again!(Destructor called)\n";
}

void Zombie::setName(std::string name){
    this->name = name;
}
std::string Zombie::getName(void)
{
    return (this->name);
}

void Zombie::announce(void){
    std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}