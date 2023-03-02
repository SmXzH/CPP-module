#include "Dog.hpp"

Dog::Dog()
{
	this->setType("Dog");
	this->brain = new Brain();
	std::cout << "[Dog] Constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "[Dog] Distructor called" << std::endl;
	delete this->brain;
}

Dog::Dog(const Dog &obj)
{
	this->type = obj.type;
	this->brain = new Brain(*obj.brain);
	std::cout << "[Dog] Copy constructor called" << std::endl;
}

Dog & Dog::operator=(const Dog &obj)
{
	this->type = obj.type;
	this->brain = new Brain(*obj.brain);
	std::cout << "[Dog] Copy assignation operator called" << std::endl;
	return(*this);
}

void Dog::makeSound()
{
	std::cout << "[Dog] WOAF" << std::endl;
}

Brain* Dog::useBrain()
{
	return(this->brain);
}




