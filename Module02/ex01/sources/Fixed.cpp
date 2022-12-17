/*
class Fixed
{
private:
    Fixed operator>(const Fixed &src);
    Fixed operator<(const Fixed &src);
    Fixed operator>=(const Fixed &src);
    Fixed operator<=(const Fixed &src);
    Fixed operator==(const Fixed &src);
    Fixed operator!=(const Fixed &src);


    Fixed operator+(const Fixed &src);
    Fixed operator+(const Fixed &src);
    Fixed operator-(const Fixed &src);
    Fixed operator*(const Fixed &src);
    Fixed operator/(const Fixed &src);

public:
    Fixed();
    Fixed(float num);
    ~Fixed();
    static float min(float &n1, float &n2);
    static float min(float &n1, float &n2)const;
    static float max(float &n1, float &n2);
    static float max(float &n1, float &n2) const;
};*/

#include "Fixed.hpp"

Fixed::Fixed(){
    //std::cout << "Constructor"
}

Fixed::~Fixed(){

}

Fixed::Fixed(const Fixed &src){
    std::cout << "Copy";
    this->_flp = src._flp;
}

void Fixed::setNum(const float num){
    this->_flp = num;
}

float Fixed::getNum(){
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

// float Fixed::operator+(const Fixed &a, const Fixed &b){
//     float retVal;
//     retVal= a._flp + b._flp;
//     return (retVal);
// }

// float Fixed::operator-(const Fixed &a, const Fixed &b){
//     float retVal;
//     retVal= a._flp - b._flp;
//     return (retVal);
// }

// float Fixed::operator*(const Fixed &a, const Fixed &b){
//     float retVal;
//     retVal= a._flp * b._flp;
//     return (retVal);
// }