#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>

class Fixed
{
private:
    int         _FPnumberValue;
    static int  _numberOfFractional;
public:
    int getRawBits( void ) const;
    void setRawBits( int const raw );

    Fixed();
    ~Fixed();
    Fixed(const Fixed &object);
    Fixed operator=(const Fixed &object);
    //Fixed(float);
};

#endif


