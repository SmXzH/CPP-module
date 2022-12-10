#include "Zombie.hpp"

void Zombie::setZombie(std::string name)
{
	_name = name;
}

Zombie::~Zombie()
{
	std::cout << _name << ": I'm dead..." << std::endl;
}

void Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
