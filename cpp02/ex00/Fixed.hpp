/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 16:35:45 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/03 17:35:29 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
#define _FIXED_HPP_

#include <iostream>
#include <string>

class Fixed
{
private:
    int                 num;
    static const int    fixedPoint = 8;
public:
    Fixed(void);
    ~Fixed(void);
    Fixed(const Fixed &fixed);
    Fixed&  operator= (const Fixed &fixed);
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
};

#endif