#include "Zombie.hpp"

int main(){
	Zombie Bar[N];

	Bar = zombieHorde(N, "Foo");
	for (int i = 0; i < N; i++)
		Bar[i].announce("Bar");

	delete [n] Bar;
	return 0;
}