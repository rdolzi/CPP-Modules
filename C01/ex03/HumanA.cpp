/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <rdolzi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 18:17:33 by rdolzi            #+#    #+#             */
/*   Updated: 2023/12/10 00:11:28 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wea): Human(name),weapon(wea){}

void HumanA::attack(void)
{
    std::cout << this->getName() << " attacks with their " << this->weapon.getType();
    std::cout << "\n";
}
