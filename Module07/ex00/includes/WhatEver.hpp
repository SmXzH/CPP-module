#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"

template <typename T>
void swap(T &x, T &y)
{
    T z = x;
    x = y;
    y = z;
}

template <typename T>
const T &min(const T &x, const T &y)
{
    if (x < y)
        return (x);
    else
        return (y);
}

template <typename T>
const T &max(const T &x, const T &y)
{
    if (x > y)
        return (x);
    else
        return (y);
}

#endif