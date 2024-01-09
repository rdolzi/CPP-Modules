/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <rdolzi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:51:48 by rdolzi            #+#    #+#             */
/*   Updated: 2024/01/09 16:17:08 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() 
{
    std::cout << "ScavTrap " << this->getName() << ": Default constructor called" << std::endl;
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap " << this->getName() << ": String constructor called" << std::endl;
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
}
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->getName() << ": Destructor called " << std::endl;
}
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->getName() << "is now in Gate keeper mode." << std::endl;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &scav)
{
    if (this != &scav)
    {
        // Call the base class assignment operator
        ClapTrap::operator=(scav);
        // Add additional assignment for ScavTrap-specific attributes if needed
        std::cout << "ScavTrap " << this->getName() << ": Assignment operator called" << std::endl;
    }
    return *this;
}