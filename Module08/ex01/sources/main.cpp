#include "Span.hpp"

int main(int argc, char const *argv[])
{
    (void)argc;
    (void)argv;
    try
    {
        Span sp = Span(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);


        sp.printArr();
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << '\n';
    }
    try
    {
        Span sp = Span(5);
        std::vector <int> vec;
        vec.push_back(5);
        vec.push_back(53);
        vec.push_back(54);
        vec.push_back(55);
        vec.push_back(56);
        // vec.push_back(58);


        sp.ImpAddNum(vec);
        sp.printArr();
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << '\n';
    }
    try
    {
        Span sp2 = Span(1000);
        for (size_t i = 0; i < 1000; i++)
        {
            sp2.addNumber(rand());
        }
        sp2.printArr();
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}
