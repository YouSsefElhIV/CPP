/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-haya <yel-haya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 19:44:43 by yel-haya          #+#    #+#             */
/*   Updated: 2025/06/14 20:37:26 by yel-haya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0)
{

}

Point::~Point()
{
    
}

Point::Point(float valueX, float valueY):  x(valueX), y(valueY)
{
    
}

Fixed Point::getX() const
{
    return (this->x);
}

Fixed Point::getY() const
{
    return (this->y);
}

Point::Point(const Point &copy):  x(copy.x), y(copy.y)
{

}

Point &Point::operator=(const Point &copy)
{
    if (this != &copy)
    {
        //nothing to be done since x and y are const so all we can do is return this...
    }
    return (*this);
}
