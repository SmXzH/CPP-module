#include "fixed.hpp"

Fixed::Fixed(){
    //std::cout << "Constructor"
}

Fixed::~Fixed(){

}

Fixed::Fixed(const Fixed &src){
    std::cout << "Copy"; << std::endl;
    this->_flp = src._flp;
}

Fixed Fixed::operator=(const Fixed &src){
    Fixed tmp;
    tmp->_flp = src.getNum();
    std::cout << "OPERATOR = "; << std::endl;
    return (Fixed);
}

void Fixed::setNum(const float num){
    this->_flp = num;
}

float Fixed::getNum() const{
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
    retVal = this->_flp + b._flp;
    return (retVal);
}

Fixed Fixed::operator-(const Fixed &b){
    Fixed retVal;
    retVal = this->_flp - b._flp;
    return (retVal);
}

Fixed Fixed::operator*(const Fixed &b){
    Fixed retVal;
    retVal = this->_flp * b._flp;
    return (retVal);
}

Fixed Fixed::operator/(const Fixed &b){
    Fixed retVal;
    retVal = this->_flp / b._flp;
    return (retVal);
}