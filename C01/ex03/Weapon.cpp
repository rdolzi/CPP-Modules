/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <rdolzi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:55:15 by rdolzi            #+#    #+#             */
/*   Updated: 2023/12/10 00:06:01 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type):_type(type){}

const std::string &Weapon::getType(void) {
    return (Weapon::_type);
}
void Weapon::setType(std::string type){
    this->_type = type;
}