#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "Check for deep copies===============" << std::endl;
	std::cout << "create cat using copy constructor, new cat should have data brain of old cat" << std::endl;
	Cat kitty;
	kitty.useBrain()->setIdea("I am cat", 0);
	kitty.useBrain()->setIdea("food", 1);
	std::cout << std::endl;

	std::cout << "check ideas of old cat" << std::endl;
	std::cout <<  kitty.useBrain()->getIdea(0) << std::endl;
	std::cout << kitty.useBrain()->getIdea(1) << std::endl;
	std::cout << std::endl;

	std::cout << "Do copy of cat using assigment" << std::endl;
	Cat kitten = kitty;
	std::cout << "check ideas of new cat" << std::endl;
	std::cout << kitten.useBrain()->getIdea(0) << std::endl;
	std::cout << kitten.useBrain()->getIdea(1) << std::endl;
	std::cout << std::endl;

	std::cout << "Do copy of cat using copy constructor" << std::endl;
	Cat kitten2 = kitty;
	std::cout << "check ideas of new cat" << std::endl;
	std::cout << kitten2.useBrain()->getIdea(0) << std::endl;
	std::cout << kitten2.useBrain()->getIdea(1) << std::endl;

	std::cout << std::endl;
	std::cout << "DELETING===============================" << std::endl;
	return 0;
}