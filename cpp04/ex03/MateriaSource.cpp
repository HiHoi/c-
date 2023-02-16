/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:23:40 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/16 17:48:31 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
    {
        (this->inventory)[i] = 0;
    }
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i])
            delete this->inventory[i];
    }
}

MateriaSource::MateriaSource(const MateriaSource& _materia)
{
    for (int i = 0; i < 4; i++)
    {
        if (_materia.inventory[i])
            this->inventory[i] = (_materia.inventory[i])->clone();
    }
}

MateriaSource&  MateriaSource::operator=(const MateriaSource& _materia)
{
    if (this != &_materia)
    {
        for (int i = 0; i < 4; i++)
        {
            if ((this->inventory)[i])
                delete this->inventory[i];
            if ((_materia.inventory)[i])
                (this->inventory)[i] = (_materia.inventory)[i]->clone();
        }
    }
    return (*this);
}

void    MateriaSource::learnMateria(AMateria* _amateria)
{
    int i = 0;
    
    while (this->inventory[i] && i < 4)
        i++;
    (this->inventory)[i] = _amateria;
}

AMateria*   MateriaSource::createMateria(std::string const& type)
{
    int i = 0;
    
    (void)type;
    while ((this->inventory)[i] && i < 4)
    {
        if (this->inventory[i]->getType() == type)
            break ;
        i++;
    }
    if (i >= 4 || this->inventory[i] == 0)
        return (NULL);
    return (((this->inventory)[i])->clone());
}
