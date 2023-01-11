#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
private:
    std::string _name;
    int _health;
    int _energy;
    int _attack;
public:
/*-------------Class Constructors----------------*/
    ClapTrap();
    ~ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &obj);
    ClapTrap operator=(const ClapTrap &obj);

/*-------------Setters and geters----------------*/
    std::string getName();
    int getHP();
    int getEnergy();
    int getAttack();

    void    setName(std::string name);
    void    setHP(int HP);
    void    setEnergy(int ngr);
    void    setAttack(int atk);

/*-------------------Func-------------------------*/
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepair(unsigned int amount);
    
};

// void attack(const std::string &target);
// void takeDamage(unsigned int amount);
// void beRepair(unsigned int amount);

#endif