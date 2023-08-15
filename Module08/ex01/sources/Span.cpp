#include "Span.hpp"

Span::Span()
{
    std::cout << "Constructor was called" << std::endl;
}

Span::~Span()
{
    std::cout << "Distrcutor was called" << std::endl;
}

Span::Span(const Span & src)
{
    std::cout << "Copy constructor" << std::endl;
    *this = src;
}

Span & Span::operator=(const Span & src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_arr = src._arr;
    this->_size = src._size;
    return *this;
}

Span::Span(const unsigned int N)
{
    std::cout << "Assigment constrcutor was called" << std::endl;
    this->_size = N;
}

void Span::addNumber(const int num){
    if(_arr.size() < this->_size)
        this->_arr.push_back(num);
    else
        throw std::runtime_error("Span is already full");

}

int Span::shortestSpan() {

    if (_arr.size() <= 1) {
        throw std::runtime_error("Not enough numbers to calculate span");
    }

    std::vector<int> sortedArr = _arr;
    std::sort(sortedArr.begin(), sortedArr.end());

    int minSpan = sortedArr[1] - sortedArr[0];
    for (size_t i = 2; i < sortedArr.size(); ++i) {
        int span = sortedArr[i] - sortedArr[i - 1];
        minSpan = std::min(minSpan, span);
    }
    return minSpan;
}

int Span::longestSpan() {
    if (this->_arr.size() <= 1) {
        throw std::runtime_error("Not enough numbers to calculate span");
    }
    std::vector<int> intArr = this->_arr;
    std::sort(intArr.begin(), intArr.end());
    return intArr[intArr.size() - 1] - intArr[0];
}

void Span::printArr()
{
    for (size_t i = 0; i < this->_arr.size(); i++)
        std::cout << this->_arr[i] << " ";
    std::cout << std::endl;
}

void Span::ImpAddNum(std::vector<int> & vec)
{
    std::vector <int>::iterator it = vec.begin();
    while(it != vec.end())
    {
        addNumber(*it);
        ++it;
    }
}

