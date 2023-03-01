#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	~ScavTrap();
	ScavTrap(const ScavTrap &obj);
	ScavTrap operator=(const ScavTrap &obj);
	ScavTrap(std::string name);

	//---Misc---
	void guardGate();
};