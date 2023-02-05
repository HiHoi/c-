/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:17:09 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/05 19:09:47 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _POINT_HPP_
#define _POINT_HPP_

# include "Fixed.hpp"

class Point
{
private:
    Fixed const x;
    Fixed const y;
public:
    Point(void);
    Point(const float _x, const float _y);
    ~Point(void);
    Point(const Fixed &point);

    Point&  operator=(const Point &point);

    Fixed   getXPoint(void) const;
    Fixed   getYPoint(void) const;
};

bool    bsp(Point const a, Point const b, Point const c, Point const point);

#endif
