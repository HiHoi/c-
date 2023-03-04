/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:59:04 by hoslim            #+#    #+#             */
/*   Updated: 2023/03/04 17:25:07 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : type("cure")
{
}

Cure::~Cure(void)
{
}

Cure::Cure(const Cure& _cure) : type(_cure.type)
{
}

Cure&    Cure::operator=(const Cure& _cure)
{
    if (this != &_cure)
        type = _cure.type;
    return (*this);
}

Cure*   Cure::clone(void) const
{
    Cure* a = new Cure();
    
    return (a);
}

void    Cure::use(ICharacter& _target)
{
    std::cout << "* heals " << _target.getName();
    std::cout << "’s wounds *" << std::endl;
}

std::string const&  Cure::getType(void) const
{
    return (this->type);
}
