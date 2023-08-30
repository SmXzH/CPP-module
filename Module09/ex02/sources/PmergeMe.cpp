#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
    std::cout << "Constructor was called" << std::endl;
}

PmergeMe::~PmergeMe()
{
    std::cout << "Destructor was called" << std::endl;
}

PmergeMe::PmergeMe(const char **av)
{
    std::cout << "Constructor with argument was called" << std::endl;
    for (size_t i = 1; av[i]; i++)
    {
        int num;
        if(std::istringstream(av[i]) >> num && num >= 0)
        {
            this->_listUnsorted.push_back(num);
            this->_vecUnsorted.push_back(num);
        }
        else
            throw "Wrong arguments, all the arguments must be positive intergers";
    }
}

PmergeMe & PmergeMe::operator=(const PmergeMe &src)
{
    this->_listSorted = src._listSorted;
    this->_listPair = src._listPair;
    this->_listUnsorted = src._listUnsorted;

    this->_vecSort = src._vecSort;
    this->_vecPair = src._vecPair;
    this->_vecUnsorted = src._vecUnsorted;

    this->timeForList = src.timeForList;
    this->timeForVect = src.timeForVect;

    std::cout << "Overloaded copy constrcutor was called" << std::endl;
    return *this;
}

PmergeMe::PmergeMe(const PmergeMe &src)
{
    this->operator=(src);
}

void PmergeMe::VectorSort()
{
    clock_t start = clock();

    //*Making pairs*
    for (size_t i = 0; i < this->_listUnsorted.size(); i++)
    {
        if (i == 0 && this->_vecUnsorted.size() % 2)
        {
            this->_vecPair.push_back(std::make_pair(-1, this->_vecUnsorted[i]));
        }
        else
        {
            this->_vecPair.push_back(std::make_pair(this->_vecUnsorted[i], this->_vecUnsorted[i + 1]));
            i++;
        }
    }
    //*Swaping num in pair if first > secont*
    for (std::vector<std::pair<int, int> >::iterator it = _vecPair.begin(); it != _vecPair.end(); it++)
    {
        if((*it).first > (*it).second)
            std::swap((*it).first, (*it).second);
    }
    //*Swaping pairs by looking first number*
    for (std::vector<std::pair<int, int> >::iterator it = _vecPair.begin() + 1; it != _vecPair.end(); it++)
    {
        std::vector<std::pair<int, int> >::iterator now = it;
        std::vector<std::pair<int, int> >::iterator prev = it - 1;
        while ((*now).first < (*prev).first)
        {
            std::swap((*now), (*prev));
            if(prev != _vecPair.begin())
            {
                now = prev;
                prev = now - 1;
            }
        }
        
    }

    //*Adding to sorted vector first numbers in the pairs* 

    for (std::vector<std::pair<int, int> >::iterator it = _vecPair.begin(); it != _vecPair.end(); it++)
    {
        if (it->first != -1)
            this->_vecSort.push_back(it->first);
    }

    for (std::vector<std::pair<int, int> >::iterator it = _vecPair.begin(); it != _vecPair.end(); it++)
    {
        std::vector<int>::iterator itSort;
        itSort = std::lower_bound(_vecSort.begin(), _vecSort.end(), it->second);
        this->_vecSort.insert(itSort, it->second);
    }
    this->timeForVect = static_cast<double>((clock() - start) * 100.0 / CLOCKS_PER_SEC);
}

void PmergeMe::ListSort()
{
    clock_t start = clock();
    for (std::list<int>::iterator it = this->_listUnsorted.begin(); it != this->_listUnsorted.end(); it++)
    {
        if(this->_listUnsorted.size() % 2 && it == this->_listUnsorted.begin())
            this->_listPair.push_back(std::make_pair(-1, *it));
        else
        {
            std::list<int>::iterator next = it;
            next++;
            this->_listPair.push_back(std::make_pair(*it, *next));
            it++;
        }
    }
    for(std::list<std::pair<int, int> >::iterator it = this->_listPair.begin(); it != this->_listPair.end(); it++)
        if(it->first > it->second)
            std::swap(it->first, it->second);
    for(std::list<std::pair<int, int> >::iterator it = std::next(this->_listPair.begin()); it != this->_listPair.end(); it++)
    {
        std::list<std::pair<int, int> >::iterator now = it;
        std::list<std::pair<int, int> >::iterator prev = std::prev(it);
        while(now->first < prev->first)
        {
            std::swap(*now, *prev);
            if(prev != this->_listPair.begin())
            {
                now = prev;
                prev = std::prev(now);
            }
        }
    }
    for(std::list<std::pair<int, int> >::iterator it = this->_listPair.begin(); it != this->_listPair.end(); it++)
        if(it->first != -1)
            this->_listSorted.push_back(it->first);
    for (std::list<std::pair<int, int> >:: iterator it = this->_listPair.begin(); it != this->_listPair.end(); it++)
    {
        std::list<int>::iterator itSort= std::lower_bound(this->_listSorted.begin(), this->_listSorted.end(), it->second);
        this->_listSorted.insert(itSort, it->second);
    }

    clock_t end = clock();

    this->timeForList = static_cast<double>((end - start) * 100.0 / CLOCKS_PER_SEC);
}

void PmergeMe::routine()
{
    std::cout << "Before : ";
    for(std::vector<int>::iterator it = this->_vecUnsorted.begin(); it !=_vecUnsorted.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
    std::cout << "After : ";
    for(std::vector<int>::iterator it = this->_vecSort.begin(); it !=_vecSort.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
    std::cout << "Time to process a range o f" << this->_vecUnsorted.size() << "elements with std::vector : " << this->timeForVect << " us" << std::endl;
    std::cout << "Time to process a range of " << this->_listUnsorted.size() << "elements with std::list : " << this->timeForList << " us" << std::endl;
    
    
}