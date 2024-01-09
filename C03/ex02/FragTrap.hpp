#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap{
public:
    FragTrap();
    FragTrap(std::string name);
    ~FragTrap(); // Alt + 5
    void highFivesGuys(void);
    FragTrap &operator=(const FragTrap &scav);
};

#endif