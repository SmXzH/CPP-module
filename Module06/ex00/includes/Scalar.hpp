# ifndef SCALAR_HPP
# define SCALAR_HPP

#include <iostream>
#include <iomanip>
#include <string>

# define WHITE   "\033[37m"      /* White */
# define RED  "\x1B[31m"
# define GRN  "\x1B[32m"
# define YEL  "\x1B[33m"
# define RESET   "\033[0m"
# define BLUE    "\033[34m"      /* Blue */
# define CYAN    "\033[36m"      /* Cyan */
# define MAGENTA "\033[35m"      /* Magenta */

class Scalar
{
private:
    int _dot;
    int _count;
    int _fl;
    std::string _arg;
    Scalar();
    int isAlNum(std::string);

public:

/*================CONSTRUCTORS=====================*/

    ~Scalar();
    Scalar(const Scalar &);
    Scalar & operator=(const Scalar &);
    Scalar(std::string);

/*===================GETTERS=======================*/

    int     get_int();
    char    get_char();
    float   get_float();
    double  get_double();

/*===================SETTERS=======================*/

    void    set_int(int);
    void    set_char(char);
    void    set_float(float);
    void    set_double(double);

/*===================MAIN===========================*/
    void convert();
};


#endif