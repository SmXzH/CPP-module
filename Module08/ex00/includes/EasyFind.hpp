#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <string>
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T& container, int value) {
    typename T::iterator it = container.begin();
    while (it != container.end()) {
        if (*it == value) {
            return it;
        }
        ++it;
    }
    throw std::runtime_error("Value not found in container");
}


#endif