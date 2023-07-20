#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("Robotomy Request Form", 72, 45), _target("target"){
	std::cout << "[RobotomyRequestForm] Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : AForm("RobotomyRequestForm", 72, 45), _target(target){
	std::cout << "[RobotomyRequestForm] target constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm(src), _target(src._target){
	std::cout << "[RobotomyRequestForm] copy Constructor called" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs){
	std::cout << "[RobotomyRequestForm] Copy assignment operator called." << std::endl;
	if (this != &rhs)
		const_cast<std::string &>(this->_target) = rhs.getTarget();
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(void){
	std::cout << "[RobotomyRequestForm] Destructor called" << std::endl;
}

std::string RobotomyRequestForm::getTarget(void) const {return (this->_target);}

void RobotomyRequestForm::execute (Bureaucrat const & executor) const {
    try{
        std::random_device rd;
        std::mt19937 gen(rd());
        int random_int = gen();
        bool random_boolean = (random_int % 2 == 0);
        if (executor.getGrade() <= this->getRExec() && this->getSigned()){
            if (random_boolean){
				std::cout << MAGENTA "Drr....... Drr......." << std::endl;
				std::cout << this->_target << " has been robotomized successfully"RESET << std::endl;
            }
            else
                std::cout << RED" Robotomy faied !" RESET << std::endl;
        }
        else
            throw std::out_of_range("Bureaucrat is not qualified to execute the orders of this form"RESET);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}