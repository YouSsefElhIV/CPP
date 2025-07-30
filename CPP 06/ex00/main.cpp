#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        std::string arg(av[1]);
        ScalarConverter::convert(arg);
    }
    else
        std::cout << "Usage: ./convert arg\n";
}
