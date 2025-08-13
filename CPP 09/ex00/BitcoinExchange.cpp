#include "BitcoinExchange.hpp"

Bitcoin::Bitcoin()
{

}

Bitcoin::~Bitcoin()
{

}

Bitcoin::Bitcoin(const Bitcoin& copy)
{
	this->container = copy.container;
}

Bitcoin &Bitcoin::operator=(const Bitcoin& copy)
{
	if (this != &copy)
		this->container = copy.container;
	return (*this);
}

void	Bitcoin::setValueFound(std::string &date)
{
	if (this->container.count(date) > 0)
		this->value_found = this->container[date];
	else
	{
		std::map<std::string, float>::iterator it = this->container.lower_bound(date);
		if (it != this->container.begin())
			it--;
		this->value_found = this->container[it->first];
	}
}

int	check_date(std::string &date, std::string &line)
{
	int pos;
	pos = line.find('-');
	pos++;
	size_t end_pos = line.find('-', pos);
	int month = std::atoi(line.substr(pos, end_pos - pos).c_str());
	pos = line.rfind('-');
	pos++;
	end_pos = line.find(32, pos);
	int	day = std::atoi(line.substr(pos, end_pos - pos).c_str());
	pos = date.find('-');
	int	year = std::atoi(line.substr(0, pos).c_str());

	for (pos = 0; pos < (int)date.length(); pos++)
	{
		if ((date[pos] < '0' || date[pos] > '9') && date[pos] != '-')
			break ;
	}
	if (pos < (int)date.length())
	{
		std::cout << "Error: bad input => "  << line << "\n";
		return (1);
	}

	if ((day >= 32 ||day == 0 || month == 0 || month >= 13) ||
		((month == 4 || month == 6 || month == 9 || month == 11) 
		&&day > 30))
	{
		std::cout << "Error: bad input => "  << line << "\n";
		return (1);
	}
	if ((year < 2009) || (year == 2009 && month <= 1 && day <= 1))
	{
		std::cout << "Bitcoin Did't Exist Yet\n";
		return (1) ;
	}
	if (month == 2)
	{
		if ((year % 4 == 0 && day > 29))
		{
			std::cout << "Error: bad input => "  << line << "\n";
			return (1);
		}
		else if ((year % 4 != 0 && day > 28))
		{
			std::cout << "Error: bad input => "  << line << "\n";
			return (1);
		}
	}
	return (0);
}

int dash_count(std::string &line)
{
	int count = 0;
	for (int i = 0; i < (int)line.length(); i++)
	{
		if (line[i] == '|')
			break ;
		if (line[i] == '-')
			count++;
	}
	return (count);
}

int value_len(std::string& value)
{
	int i = 0;
	while (i < (int)value.length())
	{
		if(value[i] == '.')
			break ;
		i++;
	}
	return (i);
}

int parse_amount(std::string& n)
{
	int i = 0;
	while (i < (int)n.length())
	{
		if (n[i] == 'f' && i + 1 != (int)n.length())
			return (1);
		else
			i++;
		if (i == (int)n.length())
			break ;
		if (n[i] != '.' && ( n[i] < '0' || n[i] > '9'))
			return (1);
		i++;
	}
	return (0);
}

void    Bitcoin::operation(std::ifstream &file)
{
	std::string line;
	std::ifstream database("data.csv");
	size_t pos;
	std::string date;
	std::string amount;

	if (!database)
	{
		std::cerr << "Issue with the data.csv file\n";
		return ;
	}
	while (std::getline(database, line))
	{
		pos = line.find(',');

		if (pos != std::string::npos && pos + 1 < line.length())
			pos++;
		this->container[line.substr(0, line.find(','))] = atof((line.substr(pos)).c_str());
	}
	std::getline(file, line);
	if (line != "date | value")
	{
		std::cout << "Error: File Must start with date | value\n";
		return ;
	}
	while (std::getline(file, line))
	{
		pos = line.find(32);
		pos--;
		if (pos != 9)
		{
			std::cout << "Error: bad input => "  << line << "\n";
			continue;
		}
		date = line.substr(0, pos + 1);
		if (pos + 4 > line.length() || line[pos + 3] != 32 || dash_count(line) != 2)
		{
			std::cout << "Error: bad input => "  << line << "\n";
			continue;
		}
		else if (line[pos + 4] != '-' && line[pos + 4] != '+' && (line[pos + 4] < '0'  || line[pos + 4] > '9'))
		{
			std::cout << "Error: bad input => "  << line << "\n";
			continue;
		}
		else
			amount = line.substr(pos + 4);
		if (check_date(date, line) == 1)
			continue ;
		if (parse_amount(amount) == 1)
		{
			std::cout << "Error: bad input => "  << line << "\n";
			continue ;
		}
		float	value = atof(amount.c_str());
		if (value_len(amount) > 4 || value > 1000)
		{
			std::cout << "Error: too large a number.\n";
			continue ;
		}
		if (value < 0)
		{
			std::cout << "Error: not a positive number.\n";
			continue ;
		}
		else if (std::atoi((date.substr(0, '-')).c_str()) > 2022)
		{
			std::cout << date << " => " << value << " = " << std::fixed << std::setprecision(3) << 47115.93f * value << "\n";
			continue ;
		}
		setValueFound(date);
		std::cout << date << " => " << value << " = " << std::fixed << std::setprecision(3) << value * this->value_found << "\n";
	}
}
