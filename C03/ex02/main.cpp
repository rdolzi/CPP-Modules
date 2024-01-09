/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <rdolzi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:36:17 by rdolzi            #+#    #+#             */
/*   Updated: 2024/01/09 16:49:13 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    // Create a ClapTrap
    std::string mario = "Mario";
    ClapTrap claptrap;
    ClapTrap gianni("Gianni");

    claptrap.attack(mario);
    gianni.beRepaired(5);
    claptrap.takeDamage(6);
    // claptrap.takeDamage(16);
    claptrap.beRepaired(9);
    
    std::cout << "ClapTrap Name: " << claptrap.getName() << std::endl;
    std::cout << "ClapTrap HitPoints: " << claptrap.getHitPoints() << std::endl;
    std::cout << "ClapTrap EnergyPoints: " << claptrap.getEnergyPoints() << std::endl;
    std::cout << "ClapTrap AttackDamage: " << claptrap.getAttackDamage() << std::endl;

    std::cout << "-------------------------" << std::endl;

    // Create a ScavTrap
    ScavTrap scavtrap("scav");
    
    scavtrap.attack(mario);
    scavtrap.takeDamage(15);
    scavtrap.beRepaired(7);
    scavtrap.guardGate(); // ScavTrap-specific function

    std::cout << "ScavTrap Name: " << scavtrap.getName() << std::endl;
    std::cout << "ScavTrap HitPoints: " << scavtrap.getHitPoints() << std::endl;
    std::cout << "ScavTrap EnergyPoints: " << scavtrap.getEnergyPoints() << std::endl;
    std::cout << "ScavTrap AttackDamage: " << scavtrap.getAttackDamage() << std::endl;

    std::cout << "-------------------------" << std::endl;

    // Create a FragTrap
    FragTrap fragTrap("frag");

    fragTrap.attack(mario);
    fragTrap.takeDamage(15);
    fragTrap.beRepaired(7);
    fragTrap.highFivesGuys(); // ScavTrap-specific function

    std::cout << "FragTrap Name: " << fragTrap.getName() << std::endl;
    std::cout << "FragTrap HitPoints: " << fragTrap.getHitPoints() << std::endl;
    std::cout << "FragTrap EnergyPoints: " << fragTrap.getEnergyPoints() << std::endl;
    std::cout << "FragTrap AttackDamage: " << fragTrap.getAttackDamage() << std::endl;
    return 0;
}
