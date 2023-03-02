#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->setType("WrongCat");
	std::cout << "[WrongCat] Constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat] Distructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj)
{
	this->type = obj.type;
	std::cout << "[WrongCat] Copy constructor called" << std::endl;
}

WrongCat WrongCat::operator=(const WrongCat &obj)
{
	this->type = obj.type;
	std::cout << "[WrongCat] Copy assignation operator called" << std::endl;
	return(*this);
}

void WrongCat::makeSound()
{
	std::cout << "[WrongCat] MEOW" << std::endl;
}


