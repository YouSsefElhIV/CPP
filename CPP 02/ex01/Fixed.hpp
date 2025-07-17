/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:48:57 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/15 22:06:49 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

// so we have either
//	0     pow 0	     0   pow 255
//  NOT 0 pow 0    NOT 0 pow 255	

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
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);


#endif