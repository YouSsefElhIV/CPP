#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        Bitcoin b;
		struct stat file_info;
	
        std::ifstream file(av[1]);
        if (!file || stat(av[1], &file_info) != 0 || !S_ISREG(file_info.st_mode))
        {
            std::cerr << "Issue with the file you passed as an arg\n";
            return (1);
        }
        b.operation(file);
    }
    else
    {
        std::cerr << "Error: could not open file.\n";
        return (1);
    }
    return (0);
}