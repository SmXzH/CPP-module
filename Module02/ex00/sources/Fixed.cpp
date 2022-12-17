#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &object){
    this->_FPnumberValue = object.getRawBits();
    //*this = object;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignation operator called" << std::endl;
    this->_FPnumberValue = obj.getRawBits();
    return (*this);
}



/*---------------------------------------------------------------
◦ A member function int getRawBits( void ) const;
that returns the raw value of the fixed-point value.
---------------------------------------------------------------*/

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return(this->_FPnumberValue);
}

 /*---------------------------------------------------------------
 ◦ A member function void setRawBits( int const raw );
that sets the raw value of the fixed-point number.
-----------------------------------------------------------------*/

void Fixed::setRawBits( int const raw ){
    std::cout << "setRawBits member function called" << std::endl;
    this->_FPnumberValue = raw;
}

