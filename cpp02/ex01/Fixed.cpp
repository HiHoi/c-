/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 16:38:36 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/03 19:14:33 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->num = 0;
}

Fixed::Fixed(const int _num)
{
    std::cout << "Int constructor called" << std::endl;
    this->num = _num << this->fixedPoint;
}

Fixed::Fixed(const float _num)
{
    std::cout << "Float constructor called" << std::endl;
    this->num = roundf(_num * (1 << this->fixedPoint));
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}


Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->num);
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->num = raw;
}

float   Fixed::toFloat(void) const
{
    return ((float)this->num / (1 << this->fixedPoint));
}

int Fixed::toInt(void) const
{
    return (this->num >> this->fixedPoint);
}

Fixed&  Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixed)
        this->num = fixed.getRawBits();
    return (*this);
}

std::ostream&  operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}
