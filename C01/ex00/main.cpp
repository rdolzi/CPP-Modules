/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <rdolzi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:34:43 by rdolzi            #+#    #+#             */
/*   Updated: 2023/12/06 00:07:03 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main()
{
    Zombie zombie_STACK1("Carlos");
    zombie_STACK1.announce();

    Zombie zombie_STACK2;
    zombie_STACK2.setName("Juan");
    zombie_STACK2.announce();
    
    Zombie *zombie_HEAP = new Zombie("Gimenez");
    zombie_HEAP->announce();
    delete zombie_HEAP;

    Zombie *zombie;
    zombie = newZombie("zombie_heap");
    zombie->announce();
    delete zombie;
    
    return (0);
}