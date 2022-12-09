#include "Zombie.hpp"

Zombie :: Zombie()
{

}
Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie :: ~Zombie()
{
	std::cout << name << ": I'm dead..." << std::endl;
}

void Zombie :: announce(std :: string name)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}