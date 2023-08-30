#ifndef PMERGEME_HPP
#define PMERGEME_HPP


#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <string>
#include <sstream>


class PmergeMe
{
private:
    std::vector<int> _vecUnsorted;
    std::vector<std::pair<int, int> > _vecPair;
    std::vector<int> _vecSort;

    std::list<int> _listUnsorted;
    std::list<std::pair<int, int> > _listPair;
    std::list<int> _listSorted;

    double timeForList;
    double timeForVect;

    PmergeMe();

public:
    ~PmergeMe();
    PmergeMe(const char **av);
    PmergeMe(const PmergeMe &);
    PmergeMe & operator=(const PmergeMe &);
    
    void VectorSort();
    void ListSort();
    void routine();
};


#endif