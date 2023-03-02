#include "Cat.hpp"
#include <string>

Cat::Cat()
{
	this->setType("Cat");
	this->brain = new Brain();
	std::cout << "[Cat] Constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "[Cat] Distructor called" << std::endl;
	delete this->brain;
}

Cat::Cat(const Cat &obj)
{
	this->type = obj.type;
	this->brain = new Brain(*obj.brain);
	std::cout << "[Cat] Copy constructor called" << std::endl;
}

Cat & Cat::operator=(const Cat &obj)
{
	this->type = obj.type;
	this->brain = new Brain(*obj.brain);
	std::cout << "[Cat] Copy assignation operator called" << std::endl;
	return(*this);
}

void Cat::makeSound()
{
	std::cout << "[Cat] MEOW" << std::endl;
}

Brain* Cat::useBrain()
{
	return(this->brain);
}



