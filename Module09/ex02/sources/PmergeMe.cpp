#include "PmergeMe.hpp"

std::vector<int> parseArguments(int argc, char *argv[]) {
    std::vector<int> numbers;

    for (int i = 1; i < argc; ++i) {
        int num;
        std::istringstream iss(argv[i]);
        if (!(iss >> num)) {
            throw std::runtime_error("Invalid input: " + std::string(argv[i]));
        }

        if (num > 0) {
            numbers.push_back(num);
        } else {
            throw std::invalid_argument("Negative or zero integer.");
        }
    }

    return numbers;
}