#include <iostream>

typedef struct
{
    int x;
    float y;
    char z;
} Data;

class Serializer
{
private:
public:
    Serializer();
    ~Serializer();
    Serializer(const Serializer &);
    Serializer &operator=(const Serializer &);
    uintptr_t serealize(Data * ptr);
    Data * deserealize(uintptr_t raw);
};


