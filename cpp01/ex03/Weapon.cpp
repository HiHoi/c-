/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 20:22:49 by hoslim            #+#    #+#             */
/*   Updated: 2023/01/31 19:29:23 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string str)
{
    _type = str;
}

Weapon::~Weapon(void)
{
}

const std::string &Weapon::getType(void) const
{
    return (this->_type);
}

void    Weapon::setType(const std::string type)
{
    _type = type;
}
