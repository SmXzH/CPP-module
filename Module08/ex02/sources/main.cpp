#include "MutantStack.hpp"

int main() {

    {   
    MutantStack<int> mutantStack;

    for (int i = 1; i <= 10; ++i) {
        mutantStack.push(i);
    }

    // Using explicit iterators to iterate through the MutantStack
    for (MutantStack<int>::const_iterator it = mutantStack.begin(); it != mutantStack.end(); ++it) {
        const int& num = *it;
        std::cout << num << " ";
    }
    std::cout << std::endl;
    }

    {
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);

        // *17 5

        std::cout << mstack.top() << std::endl;
        mstack.pop();

        // *5
        std::cout << mstack.size() << std::endl;

        // 1
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
        //  *9 737 5 3 5
        MutantStack<int>::iterator it = mstack.begin(); //*9
        MutantStack<int>::iterator ite = mstack.end(); // *5
        ++it;
        --it;
        // same place of poiter
        
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
        return 0;
    }

    return 0;
}