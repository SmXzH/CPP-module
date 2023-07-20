#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137) ,_target("Default"){
    std::cout << "[ShrubberyCreationForm] Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target){
    std::cout << "[ShrubberyCreationForm] Name constructor was called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src), _target(src._target){
    std::cout << "[ShrubberyCreationForm] Copy constructor was called" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs){
    std::cout << "[ShrubberyCreationForm] Copy assigment was called" << std::endl;
    if (this != &rhs)
        const_cast<std::string &>(this->_target) = rhs._target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "[ShrubberyCreationForm] Distructor was called" << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const {return(this->_target);}

void ShrubberyCreationForm::writeTree(void) const
{
	std::string real_target = this->_target + "_shrubbery";
	std::ofstream write_tree(real_target.c_str());
	if (!write_tree)
	{
		throw std::invalid_argument("Failed to create target file");  
	}
	write_tree << ASCII_TREE << std::endl;
	write_tree.close();
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (executor.getGrade() <= this->getRExec() && this->getSigned())
		{
			writeTree();
			std::cout << this->_target << "_shrubbery tree has been created"RESET << std::endl;
		}
		else
		{
			throw std::out_of_range("Bureaucrat is Not allowed to execute the Form"RESET);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}