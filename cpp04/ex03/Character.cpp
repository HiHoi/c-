/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:09:14 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/16 17:44:50 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string _name) : name(_name)
{
    for (int i = 0; i < 4; i++)
    {
        this->inventory[i] = 0;
    }
}

Character::~Character(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i])
            delete this->inventory[i];
    }
}

Character::Character(const Character& _cha) : name(_cha.name)
{;
}

Character&  Character::operator=(const Character& _cha)
{
    if (this != &_cha)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->inventory[i])
                delete this->inventory[i];
            if (_cha.inventory[i])
                this->inventory[i] = (_cha.inventory[i])->clone();
        }
    }
    return (*this);
}

std::string const&  Character::getName(void) const
{
    return (this->name);
}

void    Character::equip(AMateria* m)
{
    int i = 0;

    while ((this->inventory)[i] && i < 4)
        i++;
    (this->inventory)[i] = m;
}

void    Character::unequip(int idx)
{
    (this->inventory)[idx] = 0;
}

void    Character::use(int idx, ICharacter& target)
{
    if ((this->inventory)[idx] == 0)
        return ;
    ((this->inventory)[idx])->use(target);
}
