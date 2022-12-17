#ifndef FIXED_HPP
#define FIXED_HPP


#include <string>
#include <iostream>
/*
• The 6 comparison operators: >, <, >=, <=, == and !=.
• The 4 arithmetic operators: +, -, *, and /.
• The 4 increment/decrement (pre-increment and post-increment, pre-decrement and
post-decrement) operators, that will increase or decrease the fixed-point value from
the smallest representable ϵ such as 1 + ϵ > 1.
Add these four public overloaded member functions to your class:
• A static member function min that takes as parameters two references on fixed-point
numbers, and returns a reference to the smallest one.
• A static member function min that takes as parameters two references to constant
fixed-point numbers, and returns a reference to the smallest one.
• A static member function max that takes as parameters two references on fixed-point
numbers, and returns a reference to the greatest one.
• A static member function max that takes as parameters two references to constant
fixed-point numbers, and returns a reference to the greatest one.*/

class Fixed
{
private:

    float _flp;



    // Fixed operator+(const Fixed &src);
    // Fixed operator-(const Fixed &src);
    // Fixed operator*(const Fixed &src);
    //Fixed operator/(const Fixed &src);

public:
    Fixed();
    Fixed(const Fixed &src);
    Fixed operator=(const Fixed &src);
    ~Fixed();

    bool operator>(const Fixed &b);
    bool operator<(const Fixed &b);
    bool operator>=(const Fixed &b);
    bool operator<=(const Fixed &b);
    bool operator!=(const Fixed &b);
    bool operator==(const Fixed &b);
    float   getNum();
    void    setNum(const float num);
    // float min(float &n1, float &n2);
    // float min(float &n1, float &n2)const;
    // float max(float &n1, float &n2);
    // float max(float &n1, float &n2) const;
};


#endif