#ifndef FIXED_HPP
#define FIXED_HPP


#include <string>
#include <iostream>

class Fixed
{
private:

    float _flp;

public:
    Fixed();
    Fixed(const Fixed &src);
    Fixed operator=(const Fixed &src);
    ~Fixed();

    float   getNum()const ;
    void    setNum(const float num);

    bool operator>(const Fixed &b);
    bool operator<(const Fixed &b);
    bool operator>=(const Fixed &b);
    bool operator<=(const Fixed &b);
    bool operator!=(const Fixed &b);
    bool operator==(const Fixed &b);

    Fixed operator+(const Fixed &b);
    Fixed operator-(const Fixed &b);
    Fixed operator*(const Fixed &b);
    Fixed operator/(const Fixed &b);

    // float min(float &n1, float &n2);
    // float min(float &n1, float &n2)const;
    // float max(float &n1, float &n2);
    // float max(float &n1, float &n2) const;
};


#endif