#ifndef FIXED_HPP
#define FIXED_HPP


#include <string>
#include <iostream>

class Fixed
{
private:

<<<<<<< HEAD
    int         		_FPnumberValue;
    static const int  	_numberOfFractional = 8;
=======
    float _flp;
>>>>>>> aea9e884f4c334ab627a93024f113972ab093414

public:

    Fixed();
    ~Fixed();
    Fixed(const Fixed &object);
    Fixed operator=(const Fixed &object);
    Fixed (const int num);
    Fixed(const float num);

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    float   toFloat( void ) const;
    int     toInt( void ) const;

    Fixed       operator+(Fixed const &fixed);
    Fixed       operator-(Fixed const &fixed);
    Fixed       operator*(Fixed const &fixed);
    Fixed       operator/(Fixed const &fixed);

    Fixed       operator++( int );
    Fixed       operator--( int );
    Fixed       operator++();
    Fixed       operator--();
    bool        operator<(Fixed const &fixed)const;
    bool        operator>(Fixed const &fixed)const;
    bool        operator<=(Fixed const &fixed)const;
    bool        operator>=(Fixed const &fixed)const;
    bool        operator==(Fixed const &fixed)const;
    bool        operator!=(Fixed const &fixed)const;

    static Fixed& min(Fixed& obj_a, Fixed& obj_b);
    static Fixed& max(Fixed& obj_a, Fixed& obj_b);
    static const Fixed& min(const Fixed& obj_a, const Fixed& obj_b) ;
    static const Fixed& max(const Fixed& obj_a, const Fixed& obj_b);


};

std::ostream& operator<<(std::ostream &out, const Fixed &obj);

#endif