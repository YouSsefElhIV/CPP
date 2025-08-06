#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <deque>

class Span
{
	private:
		std::deque <int> container;
		unsigned int N;
	public:
		class AlreadyFullException: public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("The container is already full\n");
				}
		};
		class NoSpanException: public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("No Span(Either n <= 1 OR container size <= 1\n");
				}
		};
		Span();
		Span(unsigned int N);
		~Span();
		Span(const Span& copy);
		Span &operator=(const Span& copy);
		void    addNumber(int number);
		void	addMultiNumbers();
		int	shortestSpan();
		int	longestSpan();
};

#endif