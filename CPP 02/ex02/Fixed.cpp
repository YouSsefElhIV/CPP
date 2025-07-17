/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 11:56:50 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/15 22:01:37 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed ()
{
	this->value = 0;
}

Fixed::~Fixed ()
{
	
}

Fixed::Fixed (const Fixed &copy)
{
	this->value = copy.value;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	if (this != &copy)
	{
		this->value = copy.value;
	}
	return (*this);
}

int Fixed::getRawBits( void ) const
{
    return (this->value);
}

void    Fixed::setRawBits( int const raw )
{
    this->value = raw;
}

Fixed::Fixed (const int value)
{
	this->value = value << nFractionalBits;
}

Fixed::Fixed (const float value)
{
	this->value = roundf(value * (1 << nFractionalBits));
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

bool Fixed::operator>(const Fixed &copy)
{
   return (this->value > copy.value);

}

bool Fixed::operator<(const Fixed &copy)
{
	
   return (this->value < copy.value);
}

bool Fixed::operator>=(const Fixed &copy)
{
   return (this->value >= copy.value);

}

bool Fixed::operator<=(const Fixed &copy)
{
	
   return (this->value <= copy.value);
}

bool Fixed::operator==(const Fixed &copy)
{
   return (this->value == copy.value);

}

bool Fixed::operator!=(const Fixed &copy)
{
	
   return (this->value != copy.value);
}

Fixed Fixed::operator+(const Fixed &copy)
{
	Fixed value = (this->value / 256) + (copy.value / 256);
	
	value.setRawBits((this->getRawBits()) + (copy.getRawBits()));
	return (value);
}

Fixed Fixed::operator-(const Fixed &copy)
{
	Fixed value = (this->value / 256) - (copy.value / 256);
	
	value.setRawBits((this->getRawBits()) - (copy.getRawBits()));
	return (value);
}

Fixed Fixed::operator*(const Fixed &copy)
{
    Fixed value;
	
	value.setRawBits(this->getRawBits() * copy.getRawBits() >> nFractionalBits);
	return (value);
}

Fixed Fixed::operator/(const Fixed &copy)
{
	Fixed value;

    value.setRawBits((this->getRawBits() * (1 << nFractionalBits)) / copy.getRawBits());
	
	return (value);
}

Fixed &Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	
	this->value++;
	return (tmp);
}

Fixed &Fixed::operator--()
{
	this->value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	
	this->value--;
	return (tmp);
}

Fixed Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() <= b.getRawBits())
		return (a);
	return (b);
}

Fixed Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() >= b.getRawBits())
		return (a);
	return (b);
}

Fixed Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() <= b.getRawBits())
		return (a);
	return (b);
}

Fixed Fixed::max(const Fixed &a, const Fixed &b)
{
	if ((a.getRawBits()) >= b.getRawBits())
		return (a);
	return (b);
}
