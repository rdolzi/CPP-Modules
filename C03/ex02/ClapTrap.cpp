/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <rdolzi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 17:53:47 by rdolzi            #+#    #+#             */
/*   Updated: 2024/01/09 16:20:25 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap():name("Ciccio"), hitPoints(10), energyPoints(10) ,attackDamage(0)
{
    std::cout << "ClapTrap " << this->getName() << ": Default constructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap " << this->getName() << ": String constructor called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &clap) : hitPoints(clap.hitPoints), energyPoints(clap.energyPoints), attackDamage(clap.attackDamage)
{
    std::cout << "ClapTrap " << this->getName() << ": Copy constructor called" << std::endl;
}
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->getName() << ": Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clap)
{
    std::cout << "ClapTrap " << this->getName() << ": Copy assignment operator called" << std::endl;
    if (this != &clap)
    {
        this->hitPoints = clap.hitPoints;
        this->energyPoints = clap.energyPoints;
        this->attackDamage = clap.attackDamage;
    }
    return *this;
}
std::string ClapTrap::getName(void) const
{
    return (this->name);
}
int ClapTrap::getHitPoints(void) const
{
    return (this->hitPoints);
}
int ClapTrap::getEnergyPoints(void) const
{
    return (this->energyPoints);
}
int ClapTrap::getAttackDamage(void) const
{
    return (this->attackDamage);
}

void ClapTrap::setName(const std::string name)
{
    this->name = name;
}
void ClapTrap::setHitPoints(const int hitPoints)
{
    this->hitPoints = hitPoints;
}
void ClapTrap::setEnergyPoints(const int energyPoints)
{
    this->energyPoints = energyPoints;
}
void ClapTrap::setAttackDamage(const int attackDamage)
{
    this->attackDamage = attackDamage;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->energyPoints <= 0 || this->hitPoints <= 0)
    {
        std::cout << this->getName() << " can't do anything. Energy points or hitpoint  <= 0\n";
        return ;
    }
    std::cout << "ClapTrap " << this->getName() << " attacks " 
    << target << " , causing " << this->getAttackDamage()<< " points of damage!\n";
    this->energyPoints--;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->energyPoints <= 0 || this->hitPoints <= 0)
    {
        std::cout << this->getName() << " can't do anything. Energy points or hitpoint  <= 0\n";
        return ;
    }
    std::cout << "ClapTrap " << this->getName() 
    << " take " << amount << " points of damage!\n";
    this->energyPoints--;
    this->hitPoints -= amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energyPoints <= 0 || this->hitPoints <= 0)
    {
        std::cout << this->getName() << " can't do anything. Energy points or hitpoint  <= 0\n";
        return ;
    }
    std::cout << "ClapTrap " << this->getName() 
    << " rapair " << amount << " life points!\n";
    this->energyPoints--;
    this->hitPoints += (int)amount;
}