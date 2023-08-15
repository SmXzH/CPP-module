#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <string>
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T& container, int value) {
    typename T::iterator it = find(container.begin(), container.end(), value);
    if (it != container.end())
        return it;
    throw std::runtime_error("Value not found in container");
}


#endif