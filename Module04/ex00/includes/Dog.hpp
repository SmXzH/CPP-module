#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
private:

	std::string type;
public:

	Dog();
	~Dog();
	Dog(const Dog &obj);
	Dog operator=(const Dog &obj);

	//void setType(std::string type);
	//std::string getType();

	virtual void makeSound();
};

#endif