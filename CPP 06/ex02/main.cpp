#include "functions.hpp"

int main()
{
    Base *unknown = generate();

    std::cout << "Test for the ptr function\n";
    identify(unknown);
    std::cout << "Test for the reference function\n";
    identify(*unknown);

    delete unknown;
}
