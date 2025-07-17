/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 11:58:52 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/14 13:12:06 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed
{
	private:
		int value;
		static const int nFractionalBits = 8;
	public:
		Fixed();	
		~Fixed();
		Fixed (const Fixed &copy);
		Fixed (const int value);
		Fixed (const float value);
		Fixed &operator=(const Fixed &copy);
		float toFloat( void ) const;
		int toInt( void ) const;
		bool operator>(const Fixed &copy);
		bool operator<(const Fixed &copy);
		bool operator>=(const Fixed &copy);
		bool operator<=(const Fixed &copy);
		bool operator==(const Fixed &copy);
		bool operator!=(const Fixed &copy);

		Fixed operator*(const Fixed &copy);
		Fixed operator+(const Fixed &copy);
		Fixed operator-(const Fixed &copy);
		Fixed operator/(const Fixed &copy);

		Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--();
		Fixed operator--(int);

		int getRawBits( void ) const;
		void setRawBits( int const raw );
		static Fixed min( Fixed &a, Fixed &b);
		static Fixed min( const Fixed &a, const Fixed &b);
		static Fixed max( Fixed &a, Fixed &b);
		static Fixed max( const Fixed &a, const Fixed &b);


};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif