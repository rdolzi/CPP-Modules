/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <rdolzi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:50:01 by rdolzi            #+#    #+#             */
/*   Updated: 2023/12/10 02:55:05 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name):Human(_name), weapon(NULL){}

void HumanB::attack(void)
{
    std::cout << this->getName() << " attacks with their ";
    if (!this->weapon)
        std::cout << "hands!!\n";
    else
        std::cout << this->weapon->getType() << "!!\n";
}

void HumanB::setWeapon(Weapon &weapon){
    this->weapon = &weapon;
}   