#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main(){
	{
		std::string formName = "presidential pardon"; 
		std::string formTarget = "Tae";
		if (formName.empty() || formTarget.empty()) 
		{
				throw std::invalid_argument("Invalid parameters");
		}
		Intern intern;
		Bureaucrat bureaucrat("Adam", 1);
		AForm *f = intern.makeForm(formName, formTarget);
		std::cout << *f;
		bureaucrat.signForm(*f);
		std::cout << (*f).getSigned() << std::endl;
		bureaucrat.executeForm(*f);
		delete f;
	}
	{
		std::string formName = "robotomy request"; 
		std::string formTarget = "Bender";
		if (formName.empty() || formTarget.empty()) 
		{
				throw std::invalid_argument("Invalid parameters");
		}
		Intern intern;
		Bureaucrat bureaucrat("Hope", 1);
		AForm *f = intern.makeForm(formName, formTarget);
		std::cout << *f;
		bureaucrat.signForm(*f);
		std::cout << (*f).getSigned() << std::endl;
		bureaucrat.executeForm(*f);
		delete f;
	}
	{
		std::string formName = "shrubbery creation"; 
		std::string formTarget = "Gorms";
		if (formName.empty() || formTarget.empty()) 
		{
				throw std::invalid_argument("Invalid parameters");
		}
		Intern intern;
		Bureaucrat bureaucrat("John", 1);
		AForm *f = intern.makeForm(formName, formTarget);
		std::cout << *f;
		bureaucrat.signForm(*f);
		std::cout << (*f).getSigned() << std::endl;
		bureaucrat.executeForm(*f);
		delete f;
	}
}