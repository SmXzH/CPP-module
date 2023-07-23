#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include "Serializer.hpp"

Serializer::Serializer(const Serializer & src)
{
    std::cout << "[Serializer] Copy constructor was called" << std::endl;
    *this = src;
}

Serializer & Serializer::operator=(const Serializer & src)
{
    std::cout << "[Serializer] Assigmen copy constructor was called" << std::endl;
    (void)src;
    return (*this);
}

Serializer::Serializer()
{
    std::cout << "[Serializer] Contructor was called" << std::endl;
}

Serializer::~Serializer()
{
    std::cout << "[Serializer] Distrcutor was called" << std::endl;
}

uintptr_t Serializer::serealize(Data * ptr)
{
   return (reinterpret_cast<uintptr_t>(ptr));
}
Data * Serializer::deserealize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

#endif