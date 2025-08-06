#include "Span.hpp"

Span::Span()
{
	this->N = 0;
}

Span::Span(unsigned int N)
{
	this->N = N;
}

Span::~Span()
{
	
}

Span::Span(const Span& copy)
{
	this->N = copy.N;
	this->container = copy.container;
}

Span &Span::operator=(const Span& copy)
{
	if (this != &copy)
	{
		this->N = copy.N;
		this->container = copy.container;
	}
	return (*this);
}

void    Span::addNumber(int number)
{
	if (this->container.size() < (size_t)this->N)
		this->container.push_back(number);
	else
		throw AlreadyFullException();
}

int Span::shortestSpan()
{
	if (this->N <= 1 || this->container.size() <= 1)
		throw NoSpanException();
	else
	{
		std::sort(this->container.begin(), this->container.end());
		int distance = this->container[1] - this->container[0];
		int i;
		for (i = 0; i < (int)this->container.size() - 1 ; i++)
		{
			if (this->container[i + 1] - this->container[i] < distance)
				distance = this->container[i + 1] - this->container[i];
		}
		return (distance);
	}
}

int Span::longestSpan()
{
	if (this->N <= 1 || this->container.size() <= 1)
		throw NoSpanException();
	else
	{
		std::sort(this->container.begin(), this->container.end());
		return (this->container.back() - this->container.front());
	}
}

void    Span::addMultiNumbers()
{
	std::srand(time(NULL));
	for (int i = 0; i < (int)this->N; i++)
	{
		this->container.push_back(std::rand() % 1000000);
	}
}