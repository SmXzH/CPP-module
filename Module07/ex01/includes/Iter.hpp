#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>
#include <vector>


template <typename T, typename Func>
void iter(T* array, size_t length, Func func) {
    for (size_t i = 0; i < length; i++) {
        func(array[i]);
    }
}

// Example function to print the elements of an array
template <typename T>
void printElement(const T& element) {
    std::cout << element << " ";
}

// Example function to square the elements of an array
template <typename T>
void squareElement(T& element) {
    element *= element;
}

#endif