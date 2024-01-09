/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <rdolzi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:51:48 by rdolzi            #+#    #+#             */
/*   Updated: 2024/01/09 16:45:04 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() 
{
    std::cout << "FragTrap " << this->getName() << ": Default constructor called" << std::endl;
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap " << this->getName() << ": String constructor called" << std::endl;
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
}
FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->getName() << ": Destructor called " << std::endl;
}
void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->getName() << ": give me high five!" << std::endl;
}
FragTrap &FragTrap::operator=(const FragTrap &scav)
{
    if (this != &scav)
    {
        // Call the base class assignment operator
        ClapTrap::operator=(scav);
        // Add additional assignment for FragTrap-specific attributes if needed
        std::cout << "FragTrap " << this->getName() << ": Assignment operator called" << std::endl;
    }
    return *this;
}