#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <exception>
# include <fstream>
# include <cstdlib>
# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include <random>

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string const);
		RobotomyRequestForm(RobotomyRequestForm const &);
		RobotomyRequestForm & operator=(RobotomyRequestForm const &);
		~RobotomyRequestForm(void);
		std::string getTarget(void) const;

		void execute(Bureaucrat const & executor) const;
	private:
		std::string const _target;
};
std::ostream & operator<< ( std::ostream & o, AForm const & rhs);
#endif