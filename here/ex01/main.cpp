#include "RPN.hpp"

int main (int ac, char **av)
{
    if (ac == 2)
    {
        RPN store;

        return (store.operation(av[1]));
    }
    else
        std::cerr << "Usage: ./RPN 'inverted Polish mathematical expression' \n";
    return (0);
}