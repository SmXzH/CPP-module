#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
private:
	Brain *brain;
	std::string type;
public:

	Dog();
	~Dog();
	Dog(const Dog &obj);
	Dog & operator=(const Dog &obj);

	//void setType(std::string type);
	//std::string getType();

	void makeSound();
	Brain *useBrain();
};

#endif