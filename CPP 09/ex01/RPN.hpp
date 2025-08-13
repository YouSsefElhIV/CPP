#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <iostream>
#include <algorithm>
#include <limits>

class RPN
{
	private:
		std::stack<double> container;
		int				tmp;
	public:
		RPN();
		~RPN();
		RPN(const RPN& copy);
		RPN &operator=(const RPN& copy);
		int operation(std::string expression);
};

#endif