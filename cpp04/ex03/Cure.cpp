/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:59:04 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/16 17:13:25 by hoslim           ###   ########.fr       */
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
    (void)_cure;
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
