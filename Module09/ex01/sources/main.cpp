#include "RPN.hpp"
// #include <iomanip>

int main(int ac, char *av[])
{
    if (ac != 2)
    {
        std::cerr << "Error\n";
        exit(0);
    }
    else
    {
        try
        {
            RPN obj;
            obj.ReadInput(av[1]);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what();
        }
        
    }
}
