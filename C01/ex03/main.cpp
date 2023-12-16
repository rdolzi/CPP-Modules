/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <rdolzi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 20:53:21 by rdolzi            #+#    #+#             */
/*   Updated: 2023/12/16 18:19:12 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
    Weapon rocks = Weapon("rocks");
    HumanA bob("Bob", rocks);
    bob.attack();
    rocks.setType("some other type of club");
    bob.attack();
    }
    {
    Weapon bones = Weapon("bones");
    HumanB jim("Jim");
    jim.attack();
    bones.setType("punches");
    jim.setWeapon(bones);
    jim.attack();
    }
    return 0;
}