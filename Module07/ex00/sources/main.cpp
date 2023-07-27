#include "WhatEver.hpp"

int main() {
    int num1 = 10, num2 = 5;
    double d1 = 3.14, d2 = 1.618;

    std::cout << GREEN << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << std::endl;
    swap(num1, num2);
    std::cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    std::cout << "Min of " << num1 << " and " << num2 << " is: " << min(num1, num2) << std::endl;
    std::cout << "Max of " << num1 << " and " << num2 << " is: " << max(num1, num2) << std::endl;

    std::cout << "Min of " << d1 << " and " << d2 << " is: " << min(d1, d2) << std::endl;
    std::cout << "Max of " << d1 << " and " << d2 << " is: " << max(d1, d2) << std::endl;
    {
    int a = 2;
    int b = 3;
    
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << RESET << std::endl;
    return 0;
    }
    return 0;
}
