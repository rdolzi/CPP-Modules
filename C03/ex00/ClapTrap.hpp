#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

// orthodox canonical class form
class ClapTrap{
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &clap);
    ClapTrap &operator=(const ClapTrap &clap);
    ~ClapTrap();
    std::string getName(void) const;
    int getHitPoints(void) const;
    int getEnergyPoints(void) const;
    int getAttackDamage(void) const;
    void setName(const std::string name);
    void setHitPoints(const int hitPoints);
    void setEnergyPoints(const int energyPoints);
    void setAttackDamage(const int attackPoints);

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
private:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;
};



#endif