#include "PmergeMe.hpp"

char    **parse_input(int ac, char **av, int *size)
{
    int i = 1;
    std::istringstream in;
    std::string tmp;
    char    **arg;

    while (i < ac)
    {
        in.clear();
        in.str(av[i]);
        while (in >> tmp)
            (*size)++;
        i++;
    }
    if ((*size) > 0)
    {
        arg = new char*[(*size) + 1];
        i = 1;
        int j = 0;
        while (i < ac)
        {
            in.clear();
            in.str(av[i]);
            while (in >> tmp)
            {
                arg[j] = new char[tmp.size() + 1];
                std::strcpy(arg[j], tmp.c_str());
                j++;
            }
            i++;
        }
        arg[(*size)] = NULL;
    }
    else
        return (NULL);
    return (arg);
}

int main(int ac, char **av)
{
    if (ac > 1)
    {
        PmergeMe m;
        char    **arg;
        int     size = 0;

        arg = parse_input(ac, av, &size);
        if (arg != NULL)
        {
            m.operation(arg);
            for (int i = 0; i < size; i++)
                delete[] arg[i];
            delete[] arg;
        }
    }
    else
    {
        std::cerr << "Usage: ./PmergeMe 'sequence to sort'.\n";
        return (1);
    }
    return (0);
}