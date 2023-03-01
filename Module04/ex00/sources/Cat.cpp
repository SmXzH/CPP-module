#include "Cat.hpp"

Cat::Cat()
{
	this->setType("Cat");
	std::cout << "[Cat] Constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "[Cat] Distructor called" << std::endl;
}

Cat::Cat(const Cat &obj)
{
	this->type = obj.type;
	std::cout << "[Cat] Copy constructor called" << std::endl;
}

Cat Cat::operator=(const Cat &obj)
{
	this->type = obj.type;
	std::cout << "[Cat] Copy assignation operator called" << std::endl;
	return(*this);
}

void Cat::makeSound()
{
	std::cout << "[Cat] MEOW" << std::endl;
}


