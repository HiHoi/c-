/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:59:17 by hoslim            #+#    #+#             */
/*   Updated: 2023/03/04 17:24:33 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : type("ice")
{
}

Ice::~Ice(void)
{
}

Ice::Ice(const Ice& _ice) : type(_ice.type)
{
}

Ice&    Ice::operator=(const Ice& _ice)
{
    if (this != &_ice)
        type = _ice.type;
    return (*this);
}

Ice*   Ice::clone(void) const
{
    Ice*    ice = new Ice();
    
    return (ice);
}

void    Ice::use(ICharacter& _target)
{
    std::cout << "* shoots an ice bolt at " << _target.getName();
    std::cout << " *" << std::endl;
}

std::string const& Ice::getType(void) const
{
    return (this->type);
}
