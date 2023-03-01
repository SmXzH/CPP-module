#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "[Animal] Constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "[Animal] Distructor called" << std::endl;
}

Animal::Animal(const Animal &obj)
{
	this->type = obj.type;
	std::cout << "[Animal] Copy constructor called" << std::endl;
}

Animal Animal::operator=(const Animal &obj)
{
	this->type = obj.type;
	std::cout << "[Animal] Copy assignation operator called" << std::endl;
	return(*this);
}

void Animal::setType(std::string type)
{
	this->type = type;
}

std::string Animal::getType()
{
	return(this->type);
}

void Animal::makeSound()
{
	std::cout << "[Animal] making sound" << std::endl;
}


