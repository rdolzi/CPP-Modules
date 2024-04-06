#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {
private:
    int fixedPointValue;
    static const int fractionalBits;

public:
    Fixed();                    
    Fixed(const Fixed& copyConstructor); 
    ~Fixed();                   
    Fixed& operator=(const Fixed& copyAssignmentOperator); 
    int getRawBits() const;
    void setRawBits(int const raw);
};

#endif