#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename A, typename F> void iter (A *tab, int length, F func)
{
	if (!tab || !func || length <= 0)
	{
		std::cout << "Invalid parameters (either function or/and array issue)\n";
		return ;
	}
	
	for (int i = 0; i < length; i++)
		func((tab[i]));
}

template <typename A> void    AddOne(A &x)
{
    x++;
}

template <typename A> void    RemoveOne(A &x)
{
    x--;
}

template <typename A> void    MultipleByTwo(A &x)
{
    x *= 2;
}

template <typename A> void    ToUpper(A &x)
{
    x -= 32;
}

template <typename A> void    ToLower(A &x)
{
    x += 32;
}

#endif