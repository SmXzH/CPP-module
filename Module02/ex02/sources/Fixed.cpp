#include "fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src){
    std::cout << "Copy constructor called" << std::endl;
    this->_flp = src.getNum();
}

Fixed Fixed::operator=(const Fixed &src){
    std::cout << "Copy assignation operator called" << std::endl;
    this->_flp = src.getNum();
    return(*this);
}

void Fixed::setNum(const float num){
    std::cout << "setRawBits member function called" << std::endl;
    this->_flp = num;
}

float Fixed::getNum() const{
    std::cout << "getNum member function called" << std::endl;
    return(this->_flp);
}


bool Fixed::operator>(const Fixed &b){

    if(this->_flp > b._flp)
        return (true);
    else
        return(false);
}

bool Fixed::operator<(const Fixed &b){

    if(this->_flp < b._flp)
        return (true);
    else
        return(false);
}

bool Fixed::operator>=(const Fixed &b){

    if(this->_flp >= b._flp)
        return (true);
    else
        return(false);
}

bool Fixed::operator<=(const Fixed &b){

    if(this->_flp <= b._flp)
        return (true);
    else
        return(false);
}

bool Fixed::operator==(const Fixed &b){

    if(this->_flp == b._flp)
        return (true);
    else
        return(false);
}

bool Fixed::operator!=(const Fixed &b){

    if(this->_flp != b._flp)
        return (true);
    else
        return(false);
}

Fixed Fixed::operator+(const Fixed &b){
    Fixed retVal;
    retVal._flp = this->_flp + b._flp;
    return (retVal);
}

Fixed Fixed::operator-(const Fixed &b){
    Fixed retVal;
    retVal._flp = this->_flp - b._flp;
    return (retVal);
}

Fixed Fixed::operator*(const Fixed &b){
    Fixed retVal; 
    retVal._flp = this->_flp * b._flp;
    return (retVal);
}

Fixed Fixed::operator/(const Fixed &b){
    Fixed retVal;
    retVal._flp = this->_flp / b._flp;
    return (retVal);
}