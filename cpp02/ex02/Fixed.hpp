/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 16:35:45 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/03 20:35:25 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
#define _FIXED_HPP_

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
    int                 num;
    static const int    fixedPoint = 8;
public:
    Fixed(void);
    Fixed(const int);
    Fixed(const float);
    ~Fixed(void);
    Fixed(const Fixed &fixed);

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;

    Fixed&  operator= (const Fixed &fixed);
    Fixed  operator+ (const Fixed &fixed) const;
    Fixed  operator- (const Fixed &fixed) const;
    Fixed  operator* (const Fixed &fixed) const;
    Fixed  operator/ (const Fixed &fixed) const;
    
    Fixed  operator++ (void);
    const Fixed  operator++ (int);
    Fixed  operator-- (void);
    const Fixed  operator-- (int);

    bool  operator> (const Fixed &fixed) const;
    bool  operator< (const Fixed &fixed) const;
    bool  operator>= (const Fixed &fixed) const;
    bool  operator<= (const Fixed &fixed) const;
    bool  operator== (const Fixed &fixed) const;
    bool  operator!= (const Fixed &fixed) const;

    static Fixed   min(Fixed &first, Fixed &second);
    static Fixed   min(const Fixed &first, const Fixed &second);
    static Fixed   max(Fixed &first, Fixed &second);
    static Fixed   max(const Fixed &first, const Fixed &second);
};

std::ostream&  operator<< (std::ostream &out, const Fixed &fixed);





#endif