#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
    try
    {
        Bureaucrat b("bob", 10);
        b.decrement();
        // b.increment();
        std::cout << b << "\n";
        b.increment();
        std::cout << b << "\n";
        b.increment();
        b.increment();
        b.increment();
        b.increment();
        b.increment();
        std::cout << b << "\n";
    }
    catch (std::exception & e)
    {
        std::cout << "Exception caught: " << e.what();
    }
    // too high exception
    std::cout << "\nTest for high Grade\n";
    try
    {
        Bureaucrat b("hight_bob", 1);
        std::cout << b << "\n";
        b.increment();
        std::cout << b << "\n";
    }
    catch (std::exception & e)
    {
        std::cout << "Exception caught: " << e.what();
    }
    std::cout << "\nTest for low Grade\n";
    try
    {
        Bureaucrat b("low_bob", 150);
        std::cout << b << "\n";
        b.decrement();
        std::cout << b << "\n";
    }
    catch (std::exception & e)
    {
        std::cout << "Exception caught: " << e.what();
    }
    return (0);
};