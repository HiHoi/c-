/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:39:22 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/16 17:07:53 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
}

AMateria::~AMateria(void)
{
}

AMateria::AMateria(const AMateria& _amateria) : type(_amateria.type)
{
}

AMateria::AMateria(std::string const& _type) : type(_type)
{
}

std::string const& AMateria::getType(void) const
{
    return (this->type);
}

void    AMateria::use(ICharacter& target)
{
    std::cout << "AMataira is used to " << target.getName() << std::endl;
}