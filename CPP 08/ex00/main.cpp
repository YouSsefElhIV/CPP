#include "easyfind.hpp"

int main()
{
    {
        std::cout << "\n tests for sequence containers\n";
        int array[5] = {1, 6, -6, 5, 4};
        std::vector<int> Vector(array, array + 5);
        std::deque<int> Deque(array, array + 5);
        std::list<int> List(array, array + 5);

        std::cout << "\nUse easyfind for a vector\n";
        ::easyfind<std::vector<int> >(Vector, -6);
        ::easyfind<std::vector<int> >(Vector, -66);

        std::cout << "\nUse easyfind for a deque\n";
        ::easyfind<std::deque<int> >(Deque, -6);
        ::easyfind<std::deque<int> >(Deque, -66);

        std::cout << "\nUse easyfind for a list\n";
        ::easyfind<std::list<int> >(List, 6);
        ::easyfind<std::list<int> >(List, -66);
    }
    return (0);
}