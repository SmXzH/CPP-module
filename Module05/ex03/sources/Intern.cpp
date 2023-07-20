#include "Intern.hpp"

Intern::Intern(){
    std::cout << "[Intern] Constructor was called " << std::endl;
	this->funcPtr[0] = &Intern::ShrubberyCreation;
	this->funcPtr[1] = &Intern::RobotomyRequest;
	this->funcPtr[2] = &Intern::PresidentialPardon;
}

Intern::~Intern(){
    std::cout << "[Intern] Distructor was called " << std::endl;
}

Intern::Intern(Intern const & src){
    std::cout << "[Inter] Copy constructor was called" << std::endl;
    *this = src;
    return ;
}

Intern & Intern::operator=(Intern const & rhs) {
    std::cout << "[Intern] Copy assignment operator called." << std::endl;
    (void)rhs;
    return *this;
}

AForm *Intern::ShrubberyCreation(std::string target) {return (new ShrubberyCreationForm(target));}

AForm *Intern::PresidentialPardon(std::string target) {return (new PresidentialPardonForm(target));}

AForm *Intern::RobotomyRequest(std::string target) {return (new RobotomyRequestForm(target));}

AForm *Intern::makeForm(std::string  formName, std::string target){
    std::string formTypes[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

    for (int i = 0; i < 3; i++){
        if (!formName.compare(formTypes[i])){
            std::cout <<  "Intern complete " << formTypes[i] << " Form" << std::endl;
			return (this->*funcPtr[i])(target);
        }
    }
    throw std::out_of_range("Provided form name does not exist within the selection of forms");
}