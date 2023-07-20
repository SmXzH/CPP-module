#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>
#include "AForm.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */


class AForm;

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
    void signForm( AForm &);


    void executeForm(AForm const &form);
};

std::ostream & operator<<( std::ostream & o, Bureaucrat & rhs);

#endif