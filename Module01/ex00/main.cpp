#include "Zombie.hpp"

int main(){
	Zombie *Bar;

	randomChump("Foo");
	Bar = newZombie("Bar");
	Bar->announce("Bar");

	delete Bar;

	return 0;
}