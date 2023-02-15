/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:39:22 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/15 17:44:23 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
}

AMateria::~AMateria(void)
{
}

AMateria::AMateria(const AMateria& _amateria)
{
    this->type = _amateria.getType();
}

AMateria&   AMateria::operator=(const AMateria& _amateria)
{
    if (this != &_amateria)
        this->type = _amateria.getType();
    return (*this);
}

AMateria::AMateria(std::string const& _type)
{
    this->type = _type;
}

std::string const& AMateria::getType(void) const
{
    return (this->type);
}

void    AMateria::use(ICharacter& target)
{
    int i;
    std::string magic[2] = {"ice, cure"};

    for (i = 0; i < 2; i++)
        if (this->getType() == magic[i])
            break;
    
    switch (i)
    {
        case 0:
        {
            std::cout << "* shoots an ice bolt at ";
            std::cout << target.getName();
            std::cout << "*" << std::endl;
            break ;
        }
        case 1:
        {
            std::cout << "* heals ";
            std::cout << target.getName();
            std::cout << "'s wounds *" << std::endl;
            break ;
        }
        default:
            std::cout << "Nothing happened..." << std::endl;
            break ;
    }
}