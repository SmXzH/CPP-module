#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <fstream>

#define ASCII_TREE	\
"     ccee88oo\n\
  C8O8O8Q8PoOb o8oo\n\
 dOB69QO8PdUOpugoO9bD\n\
CgggbU8OU qOp qOdoUOdcb\n\
    6OuU  pf u gcoUodpP\n\
      dfserw  /douUP\n\
        dfsf///\n\
         |||||\n\
         |||||\n\
         |||||\n\
   ......|||||...."

class AForm;
class Bureaucrat;

class ShrubberyCreationForm: public AForm
{
private:
    std::string _target;
    void writeTree() const ;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string const);
    ShrubberyCreationForm(const ShrubberyCreationForm &);
    ShrubberyCreationForm & operator=( const ShrubberyCreationForm &);
    ~ShrubberyCreationForm();

    std::string getTarget() const;
    void execute(Bureaucrat const &executor) const;
};

#endif
