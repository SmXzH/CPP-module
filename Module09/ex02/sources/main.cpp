#include "PmergeMe.hpp"

int main(int ac, char const *av[])
{
    if (ac < 2)
        return(1);
    PmergeMe a(av);
    a.VectorSort();
    a.ListSort();
    a.routine();
    return 0;
}
