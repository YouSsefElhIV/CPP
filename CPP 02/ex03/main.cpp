/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 18:42:28 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/15 11:36:37 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
    Point a(1, 1);
    Point b(5, 1);
    Point c(3, 4);
	Point in_point(2, 2);
	Point out_point(6, 5);
	Point in_point2(1, 1);
	Point out_point2(7, 1);

    std::cout << "\033[34m\tTriangle coor: \tA(1, 1)   B(5, 1)   C(3, 4)\033[0m\n";
	std ::cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
	if (bsp(a, b, c, in_point) == true)
		std::cout << "Point (2, 2) bsp says The point is innnn\n";
	else
		std::cout << "Point (2, 2) bsp says The point is out\n";


	if (bsp(a, b, c, out_point) == true)
		std::cout << "Point (6, 5) bsp says The point is innnn\n";
	else
		std::cout << "Point (6, 5) bsp says The point is out\n";

	if (bsp(a, b, c, in_point2) == true)
		std::cout << "Point (1, 1) bsp says The point is innnn (this is acc on the the point A so its on the boundary so i consider it in\n";
	else
		std::cout << "Point (1, 1) bsp says The point is out (this is acc on the the point A so its on the boundary so i consider it in\n";

	if (bsp(a, b, c, out_point2) == true)
		std::cout << "Point (7, 1) bsp says The point is innnn\n";
	else
		std::cout << "Point (7, 1) bsp says The point is out\n";
	return 0;
}