#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T> void swap(T &x, T &y)
{
    T   tmp = x;

    x = y;
    y = tmp;
}

template <typename T> T max(T x, T y)
{
    if (x == y)
        return (y);
    if (x < y)
        return (y);
    else
        return (x);
}

template <typename T> T min(T x, T y)
{
    if (x == y)
        return (y);
    if (x < y)
        return (x);
    else
        return (y);
}

#endif