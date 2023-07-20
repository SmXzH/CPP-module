#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;


class AForm {
private:
    const std::string _name;
    bool _signed;
    const int _rsign;
    const int _rexec;

    class GradeTooHighException : public std::exception{
		public:
			const char* what() const throw();
	};
	class GradeTooLowException : public std::exception{
		public:
		    const char* what() const throw();
	};

public:
    AForm();
    AForm(std::string, int, int);
    AForm(const AForm &);
    AForm &operator=(const AForm &);
    virtual ~AForm();

    std::string getName() const;
    bool getSigned() const;
    int getRSign() const;
    int getRExec() const;

    void beSigned(Bureaucrat &);
    virtual void execute(Bureaucrat const &) const = 0;
};

std::ostream &operator<<(std::ostream &o, AForm &rhs);

#endif
