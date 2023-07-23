#include <iostream>
#include <cstdlib>
#include <ctime>

class Base {
public:
    virtual ~Base() {}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base* generate() {
    int randomValue = rand() % 3;
    switch (randomValue) {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
        default:
            return nullptr;
    }
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p) != nullptr) {
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B*>(p) != nullptr) {
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C*>(p) != nullptr) {
        std::cout << "C" << std::endl;
    } else {
        std::cout << "Unknown" << std::endl;
    }
}

void identify(Base& p) {
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    } catch (std::bad_cast&) {}

    try {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    } catch (std::bad_cast&) {}

    try {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    } catch (std::bad_cast&) {}
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    Base* objPtr = generate();
    identify(objPtr);

    if (objPtr) {
        delete objPtr;
    }
    
    return 0;
}