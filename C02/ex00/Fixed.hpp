#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
class Fixed
{
private:
    int value;
    static const int fractionalBits;

public:
    Fixed();
    Fixed(const int  i_num );
    Fixed(const float f_num ); 
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &other);
    ~Fixed();
    int     getRawBits() const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;
};

#endif