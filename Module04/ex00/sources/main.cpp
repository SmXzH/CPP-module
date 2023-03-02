#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal* meta = new Animal();
	Animal* j = new Dog();
	Animal* i = new Cat();
	WrongAnimal *s = new WrongAnimal();
	WrongAnimal *t = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << t->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	s->makeSound();
	t->makeSound();

	delete meta;
	delete j;
	delete i;
	delete s;
	delete t;
	return 0;
}