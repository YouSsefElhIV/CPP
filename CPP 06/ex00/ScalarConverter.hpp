#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cmath>

class ScalarConverter
{
	private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& copy);
        ScalarConverter &operator=(const ScalarConverter& copy);
	public:
        ~ScalarConverter();
		static void convert(std::string &name);
};

#endif
