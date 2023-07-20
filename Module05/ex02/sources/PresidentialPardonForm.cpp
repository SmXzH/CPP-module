#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("Robotomy Request Form", 25, 5), _target("target"){
	std::cout << "[PresidentialPardonForm] Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) : AForm("PresidentialPardonForm", 25, 5), _target(target){
	std::cout << "[PresidentialPardonForm] target constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm(src), _target(src._target){
	std::cout << "[PresidentialPardonForm] copy Constructor called" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs){
	std::cout << "[PresidentialPardonForm] Copy assignment operator called." << std::endl;
	if (this != &rhs)
		const_cast<std::string &>(this->_target) = rhs.getTarget();
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(void){
	std::cout << "[PresidentialPardonForm] Destructor called" << std::endl;
}

std::string PresidentialPardonForm::getTarget(void) const {return (this->_target);}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    try
    {
        if (executor.getGrade() <= this->getRExec() && this->getSigned())
            std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox"RESET << std::endl;
        else
            throw std::out_of_range(" Bureaucrat Zaphod Beeblebrox lacks grade to execute the form!"RESET);

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
