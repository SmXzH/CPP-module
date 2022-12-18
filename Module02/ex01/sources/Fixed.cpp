#include "Fixed.hpp"


Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &object){
    this->_FPnumberValue = object.getRawBits();
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(int const &raw){
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(raw);
}

Fixed::Fixed (float const &raw){
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(raw);
}

Fixed Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignation operator called" << std::endl;
    this->_FPnumberValue = obj.getRawBits();
    return (*this);
}

/*=========================================================================================*/

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return(this->_FPnumberValue);
}

void Fixed::setRawBits( int const raw ){
    std::cout << "setRawBits member function called" << std::endl;
    this->_FPnumberValue = raw << this->_numberOfFractional;
}

void Fixed::setRawBits(float const raw){
	std::cout << "setRawBits member function called" << std::endl;
    this->_FPnumberValue = round(raw * (1 << this->_numberOfFractional));
}


/*=========================================================================================*/

float   Fixed::toFloat( void ) const{
    return ((float)(this->_FPnumberValue) / (float)(1 << this->_numberOfFractional));
}

int     Fixed::toInt( void ) const{
    return (this->_FPnumberValue >> this->_numberOfFractional);
}

/*=========================================================================================*/

std::ostream& operator<<(std::ostream& os, const Fixed &src){
    os << src.toFloat();
    return os;
}