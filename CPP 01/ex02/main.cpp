#include <iostream>

int main ()
{
	std::string str;
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	str = "HI THIS IS BRAIN";

	std::cout << "The memory address of the string variable : " << &str << "\n";
	std::cout << "The memory address held by stringPTR : " << stringPTR << "\n";
	std::cout << "The memory address held by stringREF : " << &stringREF << "\n";
	std::cout << "------------------------------------------------------------\n";
	std::cout << "The value of the string variable : " << str << "\n";
	std::cout << "The value pointed to by stringPTR : " << *stringPTR << "\n";
	std::cout << "The value pointed to by stringREF : " << stringREF << "\n";

	return (0);
}
