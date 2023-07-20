#include "AForm.hpp"

AForm::AForm():_name("default"), _rsign(1), _rexec(1) {
    std::cout << "[AForm] Default constructor was called" << std::endl;
    this->_signed = false;
}

AForm::~AForm() {
    std::cout << "[AForm] Default distructor was called" << std::endl;
}

AForm::AForm(std::string name, int grade2sign, int grade2exec):_name(name), _rsign(grade2sign), _rexec(grade2exec){
    std::cout << "[AForm] Name constructor called" << std::endl;
    this->_signed = false;
    if (grade2sign < 1 || grade2exec < 1)
        throw AForm::GradeTooHighException();
    else if (grade2exec > 150 || grade2sign > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm & src): _signed(src._signed), _rsign(src._rsign), _rexec(src._rexec) {
    std::cout << "[AForm] Copy constructor was called" << std::endl;
    *this = src;
    return ;
}

AForm & AForm::operator=(const AForm & src) {
    std::cout << "[AForm] Copy assigment operator called" << std::endl;
    if (this != &src)
    {
		const_cast<std::string&>(this->_name) = src.getName();
        const_cast<int &>(this->_rsign) = src.getRSign();
        const_cast<int &>(this->_rexec) = src.getRExec();
        this->_signed = src.getRSign();
    }
    return *this;
}

std::string AForm::getName()const{return(this->_name);}

bool    AForm::getSigned ()const{return(this->_signed);}

int     AForm::getRExec()const{return(this->_rexec);}

int     AForm::getRSign()const{return(this->_rsign);}

const char* AForm::GradeTooHighException::what() const throw() {return ("Grade too high");}

const char* AForm::GradeTooLowException::what() const throw(){return ("Grade too low");}

void AForm::beSigned(Bureaucrat& B){
	try
	{
		if (B.getGrade() <= this->getRSign())
			this->_signed = true;
		else
			throw std::out_of_range("Bureaucrat grade is less than grade to sign.");
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}	
}


std::ostream & operator<<(std::ostream & o, AForm & i )
{
	o << "AForm requirement inorder to get signed by a bureaucrat and sign status given below:" << std::endl;
	o << i.getName() << " AForm have a grade required to execute = " << i.getRExec() << std::endl;
	o << i.getName() << " AForm have a grade required to sign = " << i.getRSign() << std::endl;
	o << i.getName() << " AForm sign status = " << i.getSigned() << std::endl;
	return o;
}