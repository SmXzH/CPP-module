#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <math.h>

class Fixed
{
private:

    int         		_FPnumberValue;
    static const int  	_numberOfFractional = 8;

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

};

std::ostream& operator<<(std::ostream &out, const Fixed &obj);

#endif