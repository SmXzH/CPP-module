#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <iterator>

template <typename T>
class MutantStack: public std::stack<T>
{
    public:
        using std::stack<T>::c;
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;

        iterator begin();
        iterator end();
        const_iterator begin() const ;
        const_iterator end() const ;

        MutantStack();
        ~MutantStack();
        MutantStack(const MutantStack &);
        MutantStack & operator=(const MutantStack &);

};

template <typename T>
MutantStack<T>::MutantStack() {std::cout << "Constructor" << std::endl;}

template <typename T>
MutantStack<T>::~MutantStack() {std::cout << "Distructor" << std::endl;}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack & src){
    *this = src;
    std::cout<< "Copy constrcutor" << std::endl;
}

template <typename T>
MutantStack<T> & MutantStack<T>::operator=(const MutantStack & src){
    std::cout<< "Assigment overloaded copy constrcutor" << std::endl;
    if (this != src)
        this->c = src.c;
    return *this;
}

template <typename T>
MutantStack<T>::iterator MutantStack<T>::begin(){
    return c.begin();
}

template <typename T>
MutantStack<T>::iterator MutantStack<T>::end(){
    return c.end();
}

template <typename T>
MutantStack<T>::const_iterator MutantStack<T>::begin() const{
    return c.begin();
}

template <typename T>
MutantStack<T>::const_iterator MutantStack<T>::end() const{
    return c.end();
}


#endif