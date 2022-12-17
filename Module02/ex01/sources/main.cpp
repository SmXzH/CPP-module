#include "Fixed.hpp"

int main()
{
    Fixed a;
    Fixed b;

    a.setNum(0.4f);
    b.setNum(0.4f);
    std::cout << a.getNum() << std::endl;
    std::cout << b.getNum() << std::endl;
    if(a <= b)
        std::cout << "Lets goooooo!"<< std::endl;
    else
        std::cout << "Dolbaeb"<< std::endl;

    return (0);


}