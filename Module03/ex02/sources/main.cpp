#include "FragTrap.hpp"

int main() {
	FragTrap test1("Sam");

	std::cout << std::endl;
	std::cout << "HP: " << test1.getHP() << std::endl;
	std::cout << "EP: " << test1.getEnergy() << std::endl;
	std::cout << "AD: " << test1.getAttack() << std::endl;
	std::cout << std::endl;
	test1.attack("fish");
	std::cout << std::endl;
	test1.takeDamage(56);
	std::cout << std::endl;
	test1.beRepair(14);
	std::cout << std::endl;
	test1.highFivesGuys();
	std::cout << std::endl;
	return 0;
}
