/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <rdolzi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:48:08 by rdolzi            #+#    #+#             */
/*   Updated: 2023/12/10 02:55:29 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Human.hpp"

class HumanB : public Human
{
    Weapon *weapon;

    public:
        HumanB(std::string name);
        void attack(void);
        void setWeapon(Weapon &weapon);
};

#endif