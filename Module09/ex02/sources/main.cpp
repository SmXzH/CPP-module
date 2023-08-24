#include "PmergeMe.hpp"

// Function to parse command line arguments into a vector of integers
// std::vector<int> parseArguments(int argc, char *argv[]) {
//     std::vector<int> numbers;

//     for (int i = 1; i < argc; ++i) {
//         int num;
//         std::istringstream iss(argv[i]);
//         if (!(iss >> num)) {
//             throw std::runtime_error("Invalid input: " + std::string(argv[i]));
//         }

//         if (num > 0) {
//             numbers.push_back(num);
//         } else {
//             throw std::invalid_argument("Negative or zero integer.");
//         }
//     }

//     return numbers;
// }

// Function to sort a range of elements using merge-insert sort
template <typename Container>
void mergeInsertSort(Container &container) {
    Container temp;
    typename Container::iterator it;

    for (it = container.begin(); it != container.end(); ++it) {
        typename Container::iterator insertionPoint = std::lower_bound(temp.begin(), temp.end(), *it);
        temp.insert(insertionPoint, *it);
    }

    container = temp;
}

int main(int argc, char *argv[]) {
    try {
        // Parse command line arguments into a vector of integers
        std::vector<int> numbers = parseArguments(argc, argv);

        // Display unsorted sequence
        std::cout << "Before:";
        for (std::vector<int>::size_type i = 0; i < numbers.size(); ++i) {
            std::cout << " " << numbers[i];
        }
        std::cout << std::endl;

        // Sort using std::vector
        std::vector<int> numbersVec = numbers;
        std::chrono::high_resolution_clock::time_point startVec = std::chrono::high_resolution_clock::now();
        mergeInsertSort(numbersVec);
        std::chrono::high_resolution_clock::time_point endVec = std::chrono::high_resolution_clock::now();
        double timeVec = std::chrono::duration_cast<std::chrono::microseconds>(endVec - startVec).count() / 1000000.0;

        // Sort using std::list
        std::list<int> numbersList(numbers.begin(), numbers.end());
        std::chrono::high_resolution_clock::time_point startList = std::chrono::high_resolution_clock::now();
        mergeInsertSort(numbersList);
        std::chrono::high_resolution_clock::time_point endList = std::chrono::high_resolution_clock::now();
        double timeList = std::chrono::duration_cast<std::chrono::microseconds>(endList - startList).count() / 1000000.0;

        // Display sorted sequence
        std::cout << "After:";
        for (std::vector<int>::size_type i = 0; i < numbersVec.size(); ++i) {
            std::cout << " " << numbersVec[i];
        }
        std::cout << std::endl;

        // Display processing time in seconds with 6 decimal places
        std::cout << std::fixed << std::setprecision(6);
        std::cout << "Time to process a range of " << numbers.size() << " elements with std::vector: "
                  << timeVec << " us" << std::endl;
        std::cout << "Time to process a range of " << numbers.size() << " elements with std::list: "
                  << timeList << " us" << std::endl;

    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
