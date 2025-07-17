/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:52:54 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/15 22:02:19 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed ()
{
    std::cout << "Default constructor called\n";
    this->value = 0;
}

Fixed::~Fixed ()
{
    std::cout << "Destructor called\n";
}

Fixed::Fixed (const int value)
{
    std::cout << "Int constructor called\n";
    this->value = value << nFractionalBits;                 // diffrence betwwen these two <<nF and 1 << nF
}

Fixed::Fixed (const float value)
{
    std::cout << "Float constructor called\n";
    this->value = roundf(value * (1 << nFractionalBits));   // diffrence betwwen these two <<nF and 1 << nF
}

Fixed::Fixed (const Fixed &copy)
{
    std::cout << "Copy constructor called\n";
    this->value = copy.value;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
    std::cout << "Copy assignment operator called\n";
    if (this != &copy)
    {
        this->value = copy.value;
    }
    return (*this);
}

float Fixed::toFloat() const
{
    return ((float)value / (1 << nFractionalBits));
}

int Fixed::toInt() const
{
    return (value >> nFractionalBits);
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
    out << (fixed).toFloat();
    return (out);
}
