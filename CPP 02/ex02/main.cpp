/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 18:42:28 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/15 22:07:47 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << "----------------subject main-------------------\n";
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << "-------------------my other tests---------------\n";

	Fixed x(10);
	Fixed y(2);

	std::cout << x << std::endl;
	std::cout << --x << std::endl;
	std::cout << x << std::endl;
	std::cout << x-- << std::endl;
	std::cout << x << std::endl;
	
	x++;
	x++;
	std::cout << "x     =   " << x << std::endl;
	std::cout << "y     =   " << y << std::endl;
	std::cout << "x + y =   " << x + y << std::endl;
	std::cout << "x - y =   " << x - y << std::endl;
	std::cout << "x * y =   " << x * y << std::endl;
	std::cout <<"x / y =    " <<  x / y << std::endl;
	return 0;
}