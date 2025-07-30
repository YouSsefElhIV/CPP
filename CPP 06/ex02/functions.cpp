#include "functions.hpp"

Base * generate(void)
{
    int random;
    Base *base_ptr;

    std::srand(std::time(0));
    random = std::rand() % 3;
    if (random == 0)
        base_ptr = new A;
    else if (random == 1)
        base_ptr = new B;
    else
        base_ptr = new C;
    return (base_ptr);
}

void identify(Base* p)
{
    A *identify_a;
    B *identify_b;
    C *identify_c;

    identify_a = dynamic_cast <A*> (p);
    identify_b = dynamic_cast <B*> (p);
    identify_c = dynamic_cast <C*> (p);
    if (identify_a != NULL)
        std::cout << "A\n";
    else if (identify_b != NULL)
        std::cout << "B\n";
    else if (identify_c != NULL)
        std::cout << "C\n";
    else
        std::cout << "none\n";
}

void identify(Base& p)
{
    try
    {
        A &identify_a = dynamic_cast <A&> (p);
        std::cout << "A\n";
		(void)identify_a;
    }
    catch(const std::exception& e)
    {
        try
        {
            B &identify_b = dynamic_cast <B&> (p);
            std::cout << "B\n";
			(void)identify_b;
        }
        catch(const std::exception& e)
        {
            try
            {
                C &identify_c = dynamic_cast <C&> (p);
                std::cout << "C\n";
				(void)identify_c;
            }
            catch(const std::exception& e)
            {
                std::cout << "none\n";
            }
        }
    }
}
