#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:

    const std::string   _name;
    bool                _signed;
    const int           _rsign;
    const int           _rexec;
    class GradeTooHighException : public std::exception {
		public:
			const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
		public:
		    const char* what() const throw();
	};

public:

    Form();
    Form(std::string, int, int);
    Form(Form &);
    Form & operator=(Form &);
    ~Form();

    std::string     getName();
    bool            getSigned();
    int             getRSign();
    int             getRExec();

    void            beSigned(Bureaucrat & );

};

std::ostream & operator<<( std::ostream & o, Form & rhs);

#endif