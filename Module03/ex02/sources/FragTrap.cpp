#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std:: cout << "[FragTrap] constructor called" << std::endl;
	this->_health = 100;
	this->_energy = 100;
	this->_attack = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "[FragTrap] Disctructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj)
{
	std::cout << "[FragTrap] Copy consttuctor called" << std ::endl;
	this->_name = obj._name;
	this->_attack = obj._attack;
	this->_health = obj._health;
	this->_energy = obj._energy;
}

FragTrap FragTrap::operator=(const FragTrap &obj)
{
	std::cout << "[FragTrap] Copy operator called" << std::endl;
	this->_name = obj._name;
	this->_health = obj._health;
	this->_energy = obj._energy;
	this->_attack = obj._attack;
	return (*this);
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "[FragTrap] Constructor with name was called" << std::endl;
	this->_name = name;
	this->_health = 100;
	this->_energy = 100;
	this->_attack = 30;
}

void FragTrap::highFivesGuys()
{
	if (this->getHP() <= 0)
		return ;
	std::cout << "FragTrap [" << this->getName() << "]: Give me 5 pls :3" << std::endl;
}