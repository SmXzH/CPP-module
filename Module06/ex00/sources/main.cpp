#include "Scalar.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Wrong number of arg" << std::endl;
        return (0);
    }
    std::string str(av[1]);
    Scalar a(str);
    a.convert();




    return (0);
}