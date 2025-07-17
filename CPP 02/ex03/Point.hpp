/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 19:46:48 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/15 11:25:11 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <cmath>
#include "Fixed.hpp"


class Point
{
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point();
		~Point();
		Fixed getX() const ;
		Fixed getY() const ;
		Point(float x, float y);
		Point(const Point &copy);
		Point &operator=(const Point&);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif