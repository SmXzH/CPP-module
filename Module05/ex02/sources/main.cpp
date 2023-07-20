#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main(){
	std::cout << GREEN"<==========================================>"RESET << std::endl;
	{
		Bureaucrat B(CYAN"Sam", 39);
		ShrubberyCreationForm A("SHRUBBERY");
		B.signForm(A);
		B.executeForm(A);
	}
	std::cout << GREEN"<==========================================>"RESET << std::endl;
	{
		Bureaucrat B(BLUE"Yasin", 19);
		RobotomyRequestForm A("ROBOTOMY");
		B.signForm(A);
		B.executeForm(A);
	}
	std::cout << GREEN"<==========================================>"RESET << std::endl;
	{
		Bureaucrat B(YELLOW"Max",26);
		PresidentialPardonForm A("PRESIDENTIAL");
		B.signForm(A);
		B.executeForm(A);
	}
	std::cout << GREEN"<==========================================>"RESET << std::endl;
}