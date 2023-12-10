/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <rdolzi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 18:02:45 by rdolzi            #+#    #+#             */
/*   Updated: 2023/12/10 00:10:39 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

#include <string>
#include "Weapon.hpp"

class Human{
    std::string name;

    public:
        std::string getName();
        void setName(std::string type);
        virtual void attack() = 0;
    protected:
        Human(std::string _name) : name(_name) {}
};

#endif