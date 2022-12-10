#include <string>
#include <iostream>

class Zombie
{
private:
	std::string _name;
public:
	Zombie(){};
	~Zombie();
	void announce();
	void setZombie(std::string name);
};

Zombie* zombieHorde( int number, std::string name );
