#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "string.h"
#include "iostream"

class Brain
{
public:
	Brain();
	~Brain();
	Brain(const Brain &obj);
	Brain & operator=(const Brain &obj);

	std::string ideas[100];

	void setIdea(std::string idea, int i);
	std::string getIdea(int i);
};


#endif