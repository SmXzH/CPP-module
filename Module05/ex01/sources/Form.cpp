#include "Form.hpp"

Form::Form():_name("default"), _rsign(1), _rexec(1) {
    std::cout << "[Form] Default constructor was called" << std::endl;
    this->_signed = false;
}

Form::~Form() {
    std::cout << "[Form] Default distructor was called" << std::endl;
}

Form::Form(std::string name, int grade2sign, int grade2exec):_name(name), _rsign(grade2sign), _rexec(grade2exec){
    std::cout << "[Form] Name constructor called" << std::endl;
    this->_signed = false;
    if (grade2sign < 1 || grade2exec < 1)
        throw Form::GradeTooHighException();
    else if (grade2exec > 150 || grade2sign > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form & src): _signed(src._signed), _rsign(src._rsign), _rexec(src._rexec) {
    std::cout << "[Form] Copy constructor was called" << std::endl;
    *this = src;
    return ;
}

Form & Form::operator=(Form & src) {
    std::cout << "[Form] Copy assigment operator called" << std::endl;
    if (this != &src)
    {
		const_cast<std::string&>(this->_name) = src.getName();
        const_cast<int &>(this->_rsign) = src.getRSign();
        const_cast<int &>(this->_rexec) = src.getRExec();
        this->_signed = src.getRSign();
    }
    return *this;
}

std::string Form::getName(){return(this->_name);}

bool    Form::getSigned(){return(this->_signed);}

int     Form::getRExec(){return(this->_rexec);}

int     Form::getRSign(){return(this->_rsign);}

const char* Form::GradeTooHighException::what() const throw() {return ("Grade too high");}

const char* Form::GradeTooLowException::what() const throw(){return ("Grade too low");}

void Form::beSigned(Bureaucrat& B){
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


std::ostream & operator<<(std::ostream & o, Form & i )
{
	o << "Form requirement inorder to get signed by a bureaucrat and sign status given below:" << std::endl;
	o << i.getName() << " Form have a grade required to execute = " << i.getRExec() << std::endl;
	o << i.getName() << " Form have a grade required to sign = " << i.getRSign() << std::endl;
	o << i.getName() << " Form sign status = " << i.getSigned() << std::endl;
	return o;
}