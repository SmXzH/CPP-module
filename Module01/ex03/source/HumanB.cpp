#include "Weapon.hpp"
#include "HumanB.hpp"

void HumanB::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}
