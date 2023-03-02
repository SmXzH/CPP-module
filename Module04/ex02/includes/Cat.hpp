#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
private:
	Brain *brain;
	std::string type;
public:

	Cat();
	~Cat();
	Cat(const Cat &obj);
	Cat & operator=(const Cat &obj);

	//void setType(std::string type);
	//std::string Cat::getType();

	virtual void makeSound();
	Brain* useBrain();
};
#endif
