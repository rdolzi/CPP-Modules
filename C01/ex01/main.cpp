/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <rdolzi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:37:48 by rdolzi            #+#    #+#             */
/*   Updated: 2023/12/06 18:58:18 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    int nZombie = 4;
    Zombie *horde = zombieHorde(nZombie, "Carlos");

    for (int i = 0; i < nZombie; i++)
        horde[i].announce();

    delete [] horde;
    return (0);
}