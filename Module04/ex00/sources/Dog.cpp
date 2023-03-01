#include "Dog.hpp"

Dog::Dog()
{
	this->setType("Dog");
	std::cout << "[Dog] Constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "[Dog] Distructor called" << std::endl;
}

Dog::Dog(const Dog &obj)
{
	this->type = obj.type;
	std::cout << "[Dog] Copy constructor called" << std::endl;
}

Dog Dog::operator=(const Dog &obj)
{
	this->type = obj.type;
	std::cout << "[Dog] Copy assignation operator called" << std::endl;
	return(*this);
}

//void Dog::setType(std::string type)
//{
//	this->type = type;
//}

//std::string Dog::getType()
//{
//	return(this->type);
//}

void Dog::makeSound()
{
	std::cout << "[Dog] WOAF" << std::endl;
}






