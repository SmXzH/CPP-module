#include <string>
#include <iostream>

#define N 4

class Zombie
{
private:
	std::string name;
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void announce(std :: string name);
};

Zombie* zombieHorde( int N, std::string name );