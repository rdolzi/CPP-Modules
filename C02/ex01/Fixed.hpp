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
    Fixed(const int intValue);                  
    Fixed(const float floatValue);              
    ~Fixed();                                  
    Fixed& operator=(const Fixed& copyAssignmentOperator); 

    int     getRawBits() const;
    void    setRawBits(int const raw);
    float   toFloat() const;
    int     toInt() const;
};

// Insertion operator overload
std::ostream& operator<<(std::ostream& out, const Fixed& fixed); 

#endif
