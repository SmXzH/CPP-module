#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

//===============================================================================

ScavTrap::ScavTrap()
{
	this->_health = 100;
	this->_energy = 50;
	this->_attack =20;
	std::cout << "[ScavTrap]Constructor ScavTrap called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap]Distructor called" << std:: endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
	this->_name = obj._name;
	this->_health = obj._health;
	this->_energy = obj._energy;
	this->_attack = obj._attack;
	std::cout << "[ScavTrap]Copy constructor called" << std::endl;
}

ScavTrap ScavTrap::operator=(const ScavTrap &obj)
{
    this->_name = obj._name;
    this->_health = obj._health;
    this->_energy = obj._energy;
    this->_attack = obj._attack;
    std::cout << "[ScavTrap]Copy assignation operator called" << std::endl;
	return(*this);
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_health = 100;
	this->_energy = 50;
	this->_attack = 20;
	std::cout << "[ScavTrap] Constructor with string created" << std::endl;
}

//===============================================================================

void ScavTrap::guardGate()
{
	std::cout << "[ScavTrap] is now in Gate keeper mode" << std:: endl;
}

