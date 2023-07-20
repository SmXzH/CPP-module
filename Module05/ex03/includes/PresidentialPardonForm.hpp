#ifndef PRESIDENTIALPARDONFORM
# define PRESIDENTIALPARDONFORM

# include <iostream>
# include <exception>
# include <fstream>
# include <cstdlib>
# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include <random>

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string const);
		PresidentialPardonForm(PresidentialPardonForm const &);
		PresidentialPardonForm & operator=(PresidentialPardonForm const &);
		~PresidentialPardonForm(void);
		std::string getTarget(void) const;
		void execute(Bureaucrat const & executor) const;

	private:
		std::string const _target;
};
std::ostream & operator<< ( std::ostream & o, AForm const & rhs);
#endif