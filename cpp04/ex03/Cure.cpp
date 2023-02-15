/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:59:04 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/15 18:58:49 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
}

Cure::~Cure(void)
{
}

Cure::Cure(const Cure& _ice)
{
    this->type = _ice.getType();
}

Cure&    Cure::operator=(const Cure& _ice)
{
    if (this != &_ice)
    {
        this->type = _ice.getType();
    }
    return (*this);
}

AMateria*   Cure::clone(void) const
{
    AMateria* a = new AMateria(ice);
    
    return (a);
}