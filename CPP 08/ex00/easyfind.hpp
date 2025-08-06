#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <deque>
#include <vector>
#include <list>

template <typename T> void  easyfind(T &x, const int &y)
{
    typename T::iterator occ = std::find(x.begin(), x.end(), y);
    if (occ == x.end())
        std::cout << "Dint find " << y << " in the container\n";
    else
        std::cout << "Found " << y << " in the container at " <<  std::distance(x.begin(), occ) << "\n";
}

#endif