/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <rdolzi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 18:08:14 by rdolzi            #+#    #+#             */
/*   Updated: 2023/12/10 00:06:34 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

std::string Human::getName()
{
    return this->name;
}
void Human::setName(std::string name){
    this->name = name;
}
