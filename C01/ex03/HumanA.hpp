/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <rdolzi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:03:03 by rdolzi            #+#    #+#             */
/*   Updated: 2023/12/09 23:40:38 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Human.hpp"
#include "Weapon.hpp"

class HumanA: public Human{
    Weapon &weapon;

    public:
        HumanA(std::string name, Weapon &weapon);
        void attack(void);
    
};

#endif