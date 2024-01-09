#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap(); // Alt + 5
    void guardGate(void);
    ScavTrap &operator=(const ScavTrap &scav);
};

#endif