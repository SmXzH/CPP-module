#ifndef SPAN_HPP
# define SPAN_HPP

#include <list>
#include <vector>
#include <iostream>
#include <string>

class Span
{
    private:
        unsigned int _size;
        std::vector<int> _arr;
    public:
        Span();
        ~Span();
        Span(const Span &);
        Span(const unsigned int);
        Span & operator=(const Span &);
        void addNumber(const int);
        int shortestSpan();
        int longestSpan();
        // std::vector<int> getArr();
        void printArr();
        void ImpAddNum(std::vector<int> & vec);
};

#endif