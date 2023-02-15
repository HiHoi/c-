/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:59:17 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/15 19:00:46 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
}

Ice::~Ice(void)
{
}

Ice::Ice(const Ice& _ice)
{
    this->type = _ice.getType();
}

Ice&    Ice::operator=(const Ice& _ice)
{
    if (this != &_ice)
    {
        this->type = _ice.getType();
    }
    return (*this);
}

AMateria*   Ice::clone(void) const
{
    AMateria* a = new AMateria(ice);
    
    return (a);
}
