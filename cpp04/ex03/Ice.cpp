/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:59:17 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/16 17:12:42 by hoslim           ###   ########.fr       */
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
    (void)_ice;
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
