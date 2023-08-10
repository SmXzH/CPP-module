#include "EasyFind.hpp"

int main(int argc, char const *argv[])
{
    (void)argc;
    (void)argv;
    try
    {
        std::vector<int> intArray;
        intArray.push_back(42);
        intArray.push_back(24);
        intArray.push_back(123);
        int a = 42;
        std::vector<int>::iterator result = easyfind(intArray, a);
        std::cout << "Value found at index: " << *result << std::endl;
    }
    catch(const std::runtime_error &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    try
    {
        std::list<int> intListArray;
        for (size_t i = 0; i < 100; i++)
        {
            intListArray.push_back(rand());
        }
        int a = rand();
        std::list<int>::iterator result = easyfind(intListArray, a);
        std::cout << "Value found at index: " << *result << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << '\n';
    }
    return 0;
}
