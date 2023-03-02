#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "[WrongAnimal] Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal] Distructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	this->type = obj.type;
	std::cout << "[WrongAnimal] Copy constructor called" << std::endl;
}

WrongAnimal WrongAnimal::operator=(const WrongAnimal &obj)
{
	this->type = obj.type;
	std::cout << "[WrongAnimal] Copy assignation operator called" << std::endl;
	return(*this);
}

void WrongAnimal::setType(std::string type)
{
	this->type = type;
}

std::string WrongAnimal::getType()
{
	return(this->type);
}

void WrongAnimal::makeSound()
{
	std::cout << "[WrongAnimal] making sound" << std::endl;
}


