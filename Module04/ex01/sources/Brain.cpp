#include "Brain.hpp"
#include <algorithm>    // std::copy

Brain::Brain()
{
	std::cout << "[Brain] Constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "[Brain] Distructor called" << std::endl;
}

Brain::Brain(const Brain &obj)
{
	*this = obj;
	std::cout << "[Brain] Copy constructor called" << std::endl;
}

Brain & Brain::operator=(const Brain &obj)
{
	std::cout << "[Brain] Copy assignation operator called" << std::endl;
	if (&obj == this){
		return(*this);
	}
	std::copy(obj.ideas, obj.ideas + 100, this->ideas);
	return(*this);
}

void Brain::setIdea(std::string idea, int i)
{
	if (i < 0 || i > 100)
	{
		std::cout<< "Wrong number " << std::endl;
		return;
	}
	this->ideas[i] = idea;
}

std::string Brain::getIdea(int i)
{
	if (i < 0 || i > 100)
	{
		std::cout<< "Wrong number " << std::endl;
		return NULL;
	}
	return(this->ideas[i]);
}