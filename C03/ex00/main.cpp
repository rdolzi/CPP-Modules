/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <rdolzi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:36:17 by rdolzi            #+#    #+#             */
/*   Updated: 2024/01/08 16:49:32 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

int main(){

    std::string mario = "Mario";
    ClapTrap c1;
    ClapTrap c2("Gianni");
    
    c1.attack(mario);
    c2.beRepaired(5);
    c1.takeDamage(6);
    // c1.takeDamage(16);
    c1.beRepaired(3);
}