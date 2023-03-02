#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"
//#include "WrongAnimal.hpp"
//#include "WrongCat.hpp"

class Animal
{
protected:
	std::string type;
public:

	Animal();
	virtual ~Animal();
	Animal(const Animal &obj);
	Animal & operator=(const Animal &obj);

	//======= Get and Set =========

	void setType(std::string type);
	std::string getType();

	//========= Misc ==============

	virtual void makeSound() = 0;
	Brain *useBrain();
};

#endif