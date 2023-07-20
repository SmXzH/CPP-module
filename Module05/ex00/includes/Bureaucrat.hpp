#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat{
    
private:
    const std::string   _name;
    int                 _grade;
    class GradeTooHighException : public std::exception{
		public:
			const char* what() const throw();
	};
	class GradeTooLowException : public std::exception{
		public:
		    const char* what() const throw();
	};
public:
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(std::string name, int);
    Bureaucrat(Bureaucrat &);
    Bureaucrat & operator=(Bureaucrat &);

    int getGrade() const;
    std::string getName() const;
    void grade_increment( void );
	void grade_decrement( void );
};

std::ostream & operator<<( std::ostream & o, Bureaucrat & rhs);

#endif