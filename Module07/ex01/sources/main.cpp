#include "Iter.hpp"


int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intArraySize = sizeof(intArray) / sizeof(intArray[0]);

    char charArray[] = {'A', 'B', 'C', 'D'};
    size_t charArraySize = sizeof(charArray) / sizeof(charArray[0]);


    std::cout << "Printing int array elements: ";
    iter(intArray, intArraySize, printElement<int>);
    std::cout << std::endl;

    std::cout << "Printing char array elements: ";
    iter(charArray, charArraySize, printElement<char>);
    std::cout << std::endl;

    std::cout << "Squaring int elements: ";
    iter(intArray, intArraySize, squareElement<int>);
    iter(intArray, intArraySize, printElement<int>);
    std::cout << std::endl;

    return 0;
}