/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:18:08 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/05 19:08:14 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void)
{
    const Fixed x(0);
    const Fixed y(0);
}

Point::Point(const float _x, const float _y) : x(_x), y(_y)
{
}

Point::~Point(void)
{
}

Point::Point(const Fixed &point)
{
    *this = point;
}

Point&   Point::operator=(const Point &point)
{
    Point const n(point.getXPoint().toFloat(), point.getYPoint().toFloat());
    if (this != &point)
    {
        *this = n;
    }
    return (*this);
}

Fixed   Point::getXPoint(void) const
{
    return (this->x);
}

Fixed   Point::getYPoint(void) const
{
    return (this->y);
}
