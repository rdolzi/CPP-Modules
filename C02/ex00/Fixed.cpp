
#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed::Fixed(const int i)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = i;
    // Left-shifting by 8 positions
    this->value <<= this->fractionalBits;
    // equivalent to: this->_value = this->_value << 8;

    // The << operator performs a bitwise left shift, effectively multiplying the value by 2 to the power of 8 (which is 256). This operation could be used to scale the integer value by a factor of 256, which is a common practice in fixed-point arithmetic.
}

Fixed::Fixed(const float f)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = std::roundf(f * (1 << this->fractionalBits));
}

Fixed::Fixed() : value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

// Copy constructor
Fixed::Fixed(const Fixed &other) : value(other.value)
{
    std::cout << "Copy constructor called" << std::endl;
}

// Copy assignment operator
Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        value = other.value;
    }
    return *this;
}

// Destructor
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return value;
}

void Fixed::setRawBits(int const raw)
{
    value = raw;
}

int Fixed::toInt(void) const
{
    return ((int)(this->value >> this->fractionalBits));
}

float Fixed::toFloat(void) const
{
    return ((float)(this->value / (1 << this->fractionalBits)));
}
