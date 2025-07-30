#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat b("bob", 10);
        Form f("formBob", 30, 10);
        std::cout << f << "\n";
        std::cout << b << "\n";
        b.signForm(f);
        b.decrement();
        std::cout << b << "\n";
        b.signForm(f);
    }
    catch (std::exception & e)
    {
        std::cout << "Exception caught: " << e.what();
    }
    std::cout << "\ngrade too low to sign\n";
    try
    {
        Bureaucrat b("bob", 10);
        Form f("formBob", 30, 10);
        std::cout << f << "\n";
        std::cout << b << "\n";
        b.decrement();
        std::cout << b << "\n";
        b.signForm(f);
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
        Form f("form", 30, 10);
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
        Form f("form", 30, 10);
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