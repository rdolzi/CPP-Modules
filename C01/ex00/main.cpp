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
// First, implement a Zombie class. It has a string private attribute name.
// Add a member function void announce( void ); to the Zombie class. Zombies announce themselves as follows:
//     <name>: BraiiiiiiinnnzzzZ...
// Don’t print the angle brackets (< and >). For a zombie named Foo, the message would be:
//     Foo: BraiiiiiiinnnzzzZ...

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

    return (0);
}