#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::~ScalarConverter()
{
	
}

ScalarConverter::ScalarConverter(const ScalarConverter& copy)
{
	(void)copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter& copy)
{
	(void)copy;
	return (*this);
}

int	type_is_char(std::string &name)
{
	if (name.length() == 1 && name[0] >= 33 && name[0] <= 126)
		return (1);
	return (0);
}

int	type_is_int(std::string &name)
{
	int sign_exist;

	sign_exist = 0;
	if (name[0] == '+' || name[0] == '-')
		sign_exist = 1;
	if (name[sign_exist] >= '0' && name[sign_exist] <= '9')
	{
		if (name.find('.') != std::string::npos)
			return (0);
		else
			return (1);
	}
	return (0);
}

int	type_is_float(std::string &name)
{
	int sign_exist;

	sign_exist = 0;
	if (name[0] == '+' || name[0] == '-')
		sign_exist = 1;
	if (name[sign_exist] >= '0' && name[sign_exist] <= '9')
	{
		if (name.find('.') != std::string::npos && name.find('f') != std::string::npos)
			return (1);
	}
	return (0);
}

int	type_is_double(std::string &name)
{
	int sign_exist;

	sign_exist = 0;
	if (name[0] == '+' || name[0] == '-')
		sign_exist = 1;
	if (name[sign_exist] >= '0' && name[sign_exist] <= '9')
	{
		if (name.find('.') != std::string::npos)
		{
			if (name.find('f') == std::string::npos)
				return (1);
		}
	}
	return (0);
}

int	type_is_special_case(std::string &name)
{
	if (name == "nan" || name == "nanf" || name == "+inf" || name == "+inff"
	|| name == "-inf" || name == "-inff")
		return (1);
	return (0);
}

void	convert_from_char(std::string &name)
{
	char	c;

	c = name[0];
	std::cout << "Char: '" << name << "'\n";

	std::cout << "int: " << static_cast <int> (c) << "\n";
	std::cout << "float: " << static_cast <float> (c) << ".0f\n";
	std::cout << "double: " << static_cast <double> (c) << ".0\n";
}

void	convert_from_number(std::string &name)
{
	int value;
	float fvalue;
	double dvalue;
	int sign_type;
	int sign_exist = 0;

	fvalue = std::atof(name.c_str());
	dvalue = std::stod(name.c_str());
	if (name[0] == '+' || name[0] == '-')
		sign_exist = 1;
	if (name[0] == '-')
		sign_type = -1;
	else if (name[0] == '+')
		sign_type = 1;
	else
		sign_type = 0;
	value = std::atoi(name.c_str());
	if (std::count(name.begin(), name.end(), '.') > 1 || name.find('.') == name.length() - 1
    {
		std::cout << "Invalid Input!\n";
		return ;
	}
	if (value >= 0 && value <= 127)
    {
        if ((value >= 0 && value <= 31) || value == 127)
            std::cout << "char: Non Displayable\n";
        else
            std::cout << "char: '" << static_cast <char> (value) << "'\n";
    }
    else
        std::cout << "char: impossible\n";
	if (name.length() - sign_exist >= 11 || ((value > 0 && sign_type < 0) || (value < 0 && sign_type >= 0)))
		std::cout << "int: impossible\n";
	else
		std::cout << "int: " << value << "\n";
    if (fvalue == std::floor(fvalue))
	    std::cout << "float: " << fvalue << ".0f\n";
    else
	    std::cout << "float: " << fvalue << "f\n";
    if (dvalue == std::floor(dvalue))
	    std::cout << "double: " << dvalue << ".0\n";
    else
	    std::cout << "double: " << dvalue << "\n";
}

void	convert_from_special_case(std::string &name)
{
	std::cout << "char: impossible\n";
	std::cout << "int: impossible\n";
	if (name == "+inf" || name == "+inff")
	{
		std::cout << "float: +inff\n";
		std::cout << "double: +inf\n";
	}
	else if (name == "-inf" || name == "-inff")
	{
		std::cout << "float: -inff\n";
		std::cout << "double: -inf\n";
	}
	else if (name == "nan" || name == "nanf")
	{
		std::cout << "float: nanf\n";
		std::cout << "double: nan\n";
	}
}

void    ScalarConverter::convert(std::string &name)
{
	if (type_is_char(name))
		convert_from_char(name);
	else if (type_is_int(name))
		convert_from_number(name);
	else if (type_is_float(name))
		convert_from_number(name);
	else if (type_is_double(name))
		convert_from_number(name);
	else if (type_is_special_case(name))
		convert_from_special_case(name);
	else
		std::cout << "Invalid Input!\n";
}
