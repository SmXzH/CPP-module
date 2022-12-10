#include "Zombie.hpp"

int main(){
	Zombie *Bar;

	Bar = zombieHorde(4, "Foo");

	delete [] Bar;
	return 0;
}