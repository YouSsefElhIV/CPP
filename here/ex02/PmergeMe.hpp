#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <sys/time.h>
#include <sstream>
#include <cstring>



class PmergeMe
{
    private:
        std::vector<int> V;
        std::deque<int> D;
        size_t size;
        double vec_time;
        double deq_time;
    public:
        PmergeMe();
        ~PmergeMe();
        PmergeMe(const PmergeMe& copy);
        PmergeMe &operator=(const PmergeMe& copy);
        void    operation(char **av);
        size_t  getSize();
};

#endif