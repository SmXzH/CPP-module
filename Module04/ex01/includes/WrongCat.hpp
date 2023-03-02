#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
private:

	std::string type;
public:

	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat &obj);
	WrongCat operator=(const WrongCat &obj);

	//void setType(std::string type);
	//std::string Cat::getType();

	void makeSound();
};
#endif
