#include "fixed.hpp"

int main()
{
    Fixed a;
    Fixed b;
    Fixed c;

    a.setNum(1.4f);
    b.setNum(2.4f);
    c = a / b;
    std::cout << a.getNum() << std::endl;
    std::cout << b.getNum() << std::endl;
    std::cout << c.getNum() << std::endl;
    if(a <= b)
        std::cout << "Lets goooooo!"<< std::endl;
    else
        std::cout << "Dolbaeb"<< std::endl;

    return (0);
}