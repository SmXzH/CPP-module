#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
private:
    std::string _name;
    int _health;
    int _energy;
    int _attack;
public:

    ScavTrap();
    ~ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &obj);
    ScavTrap operator=(const ScavTrap &obj);

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepair(unsigned int amount);
    void guardGate();
};


#endif