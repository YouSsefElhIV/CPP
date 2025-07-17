/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 20:15:03 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/15 11:33:28 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	calculate_area(Point const a, Point const b, Point const c)
{
	float res;

	res = ((a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()) + b.getX().toFloat() * \
	(c.getY().toFloat() - a.getY().toFloat()) + c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())) / 2);
	if (res < 0)
		return (res * -1);
	else
		return (res);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	// calculate the area of the triangle then the area of the triangles formed from the point it should be equal if in.
	float areaPA = calculate_area(a, b, point);
	float areaPB = calculate_area(a, point, c);
	float areaPC = calculate_area(point, b, c);
	float areaABC = calculate_area(a, b, c);

	if ((areaPA + areaPB + areaPC) == areaABC)
		return (true);
	return (false);
}
