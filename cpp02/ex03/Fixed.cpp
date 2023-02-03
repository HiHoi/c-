/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 16:38:36 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/03 20:41:51 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    this->num = 0;
}

Fixed::Fixed(const int _num)
{
    this->num = _num << this->fixedPoint;
}

Fixed::Fixed(const float _num)
{
    this->num = roundf(_num * (1 << this->fixedPoint));
}

Fixed::~Fixed(void)
{
}


Fixed::Fixed(const Fixed &fixed)
{
    *this = fixed;
}

int Fixed::getRawBits(void) const
{
    return (this->num);
}

void    Fixed::setRawBits(int const raw)
{
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
    if (this != &fixed)
        this->num = fixed.getRawBits();
    return (*this);
}

std::ostream&  operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}

Fixed  Fixed::operator+(const Fixed &fixed) const
{
    Fixed   ret(this->toFloat() + fixed.toFloat());
    return (ret);
}

Fixed  Fixed::operator-(const Fixed &fixed) const
{
    Fixed   ret(this->toFloat() - fixed.toFloat());
    return (ret);
}

Fixed  Fixed::operator*(const Fixed &fixed) const
{
    Fixed   ret(this->toFloat() * fixed.toFloat());
    return (ret);
}

Fixed  Fixed::operator/(const Fixed &fixed) const
{
    Fixed   ret(this->toFloat() / fixed.toFloat());
    return (ret);
}

Fixed  Fixed::operator++(void)
{
    this->num++;
    return (*this);
}

const Fixed  Fixed::operator++(int)
{
    Fixed   ret(*this);
    ret.num = this->num++;
    return (ret);
}

Fixed  Fixed::operator--(void)
{
    this->num--;
    return (*this);
}

const Fixed  Fixed::operator--(int)
{
    Fixed   ret(*this);
    ret.num = this->num--;
    return (ret);
}

bool  Fixed::operator>(const Fixed &fixed) const
{
    return (this->getRawBits() > fixed.getRawBits());
}

bool  Fixed::operator<(const Fixed &fixed) const
{
    return (this->getRawBits() < fixed.getRawBits());
}

bool  Fixed::operator>=(const Fixed &fixed) const
{
    return (this->getRawBits() >= fixed.getRawBits());
}

bool  Fixed::operator<=(const Fixed &fixed) const
{
    return (this->getRawBits() <= fixed.getRawBits());
}

bool  Fixed::operator==(const Fixed &fixed) const
{
    return (this->getRawBits() == fixed.getRawBits());
}

bool  Fixed::operator!=(const Fixed &fixed) const
{
    return (this->getRawBits() != fixed.getRawBits());
}

Fixed   Fixed::min(Fixed &first, Fixed &second)
{
    if (first <= second)
        return (first);
    else
        return (second);
}

Fixed   Fixed::min(const Fixed &first, const Fixed &second)
{
    if (first.getRawBits() <= second.getRawBits())
        return (first);
    else
        return (second);
}

Fixed   Fixed::max(Fixed &first, Fixed &second)
{
    if (first >= second)
        return (first);
    else
        return (second);
}

Fixed   Fixed::max(const Fixed &first, const Fixed &second)
{
    if (first.getRawBits() >= second.getRawBits())
        return (first);
    else
        return (second);
}
