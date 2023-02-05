/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:16:42 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/05 19:09:43 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool    checkDirection(Point const first, Point const second, Point const point)
{
    float   aX;
    float   bX;
    float   aY;
    float   bY;
    float   direction1;
    float   direction2;

    aX = second.getXPoint().toFloat() - first.getYPoint().toFloat();
    aY = second.getYPoint().toFloat() - first.getXPoint().toFloat();
    bX = point.getXPoint().toFloat() - first.getYPoint().toFloat();
    bY = point.getYPoint().toFloat() - first.getXPoint().toFloat();
    direction1 = aX * bY;
    direction2 = aY * bX;
    if (direction1 - direction2 <= 0.00000000)
        return (false);
    return (true);
}

Point   getTop(Point const a, Point const b, Point const c)
{
    if (a.getYPoint().toFloat() > b.getYPoint().toFloat() && a.getYPoint().toFloat() > c.getYPoint().toFloat())
        return (a);
    else if (b.getYPoint().toFloat() > a.getYPoint().toFloat() && b.getYPoint().toFloat() > c.getYPoint().toFloat())
        return (b);
    else
        return (c);
}

Point   getLeft(Point const a, Point const b, Point const c, Point const top)
{
    if (a.getXPoint().toFloat() < b.getXPoint().toFloat() && a.getXPoint().toFloat() < c.getXPoint().toFloat() && a.getXPoint() != top.getXPoint())
        return (a);
    else if (b.getXPoint().toFloat() < a.getXPoint().toFloat() && b.getXPoint().toFloat() < c.getXPoint().toFloat() && b.getXPoint() != top.getXPoint())
        return (b);
    else
        return (c);
}

Point   getRight(Point const a, Point const b, Point const c, Point const top, Point const left)
{
    if ((b.getXPoint() == top.getXPoint() && c.getXPoint() == left.getXPoint() && b.getYPoint() == top.getYPoint() && c.getYPoint() == left.getYPoint()) 
    || (b.getXPoint() == left.getXPoint() && c.getXPoint() == top.getXPoint() && b.getYPoint() == top.getYPoint() && c.getYPoint() == left.getYPoint()))
        return (a);
    else if ((a.getXPoint() == top.getXPoint() && c.getXPoint() == left.getXPoint() && a.getYPoint() == top.getYPoint() && c.getYPoint() == left.getYPoint()) 
    || (a.getXPoint() == left.getXPoint() && c.getXPoint() == top.getXPoint() && a.getYPoint() == top.getYPoint() && c.getYPoint() == left.getYPoint()))
        return (b);
    else
        return (c);
}

bool    bsp(Point const a, Point const b, Point const c, Point const point)
{
    //argu check
    // if (checkArgs(a, b, c, point) == false)
    // {
    //     std::cout << "Wrong args" << std::endl;
    //     return (false);
    // }
    const Point top = getTop(a, b, c);
    const Point left = getLeft(a, b, c, top);
    const Point right = getRight(a, b, c, top, left);

    if (checkDirection(top, left, point) == false)
        return (false);
    if (checkDirection(left, right, point) == false)
        return (false);
    if (checkDirection(left, top, point) == false)
        return (false);
    return (true);
}
