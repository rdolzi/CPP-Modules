/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolzi <rdolzi@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 01:58:44 by rdolzi            #+#    #+#             */
/*   Updated: 2024/04/07 02:31:04 by rdolzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"
#include <cmath>

const int Fixed::fractionalBits = 8;

Fixed::Fixed() : fixedPointValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copyConstructor) : fixedPointValue(copyConstructor.fixedPointValue) {
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int intValue) : fixedPointValue(intValue << fractionalBits) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatValue) : fixedPointValue(roundf(floatValue * (1 << fractionalBits))) {
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->fixedPointValue = other.fixedPointValue;
    }
    return *this;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
    this->fixedPointValue = raw;
}

float Fixed::toFloat() const {
    return (float)(this->fixedPointValue) / (1 << fractionalBits);
}

int Fixed::toInt() const {
    return this->fixedPointValue >> fractionalBits;
}

 // Output the float representation of the fixed-point number
std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat();
    return out;
}
