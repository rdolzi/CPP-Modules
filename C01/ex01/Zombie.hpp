/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <rdolzi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:20:18 by rdolzi            #+#    #+#             */
/*   Updated: 2023/12/06 18:52:32 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Zombie
{
    std::string name;

public:
    Zombie(void);
    ~Zombie();
    void setName(std::string name);
    std::string getName(void);
    void announce(void);
};

Zombie *zombieHorde(int N, std::string name);