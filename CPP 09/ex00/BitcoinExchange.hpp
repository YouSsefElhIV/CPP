#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <cmath>
#include <map>
#include <algorithm>
#include <sys/stat.h>

class Bitcoin
{
    private:
        std::map<std::string, float> container;
        float value_found;
    public:
        Bitcoin();
        ~Bitcoin();
        Bitcoin(const Bitcoin& copy);
        Bitcoin &operator=(const Bitcoin& copy);
        void    operation(std::ifstream &file);
        void	setValueFound(std::string &date);
};



#endif