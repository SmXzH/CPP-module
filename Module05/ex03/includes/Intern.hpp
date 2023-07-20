#ifndef INTERN_HPP
#define INTERN_HPP

/*--------------------------------- LIBRARY ---------------------------------*/
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

/*---------------------------------- CLASS ----------------------------------*/
class Intern {
	public:
		Intern();
		Intern(Intern const &);
		Intern &operator=(Intern const &);
		~Intern();
		
		AForm *makeForm(std::string, std::string);
	private:
		AForm *(Intern::*funcPtr[3])(std::string);
		AForm *ShrubberyCreation(std::string);
		AForm *RobotomyRequest(std::string);
		AForm *PresidentialPardon(std::string);
};

#endif