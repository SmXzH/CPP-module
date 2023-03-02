#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

//#include "WrongCat.hpp"

class WrongAnimal
{
protected:
	std::string type;
public:

	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(const WrongAnimal &obj);
	WrongAnimal operator=(const WrongAnimal &obj);

	//======= Get and Set =========

	void setType(std::string type);
	std::string getType();

	//========= Misc ==============

	void makeSound();
};

#endif