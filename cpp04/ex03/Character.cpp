/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:09:14 by hoslim            #+#    #+#             */
/*   Updated: 2023/03/04 17:19:17 by hoslim           ###   ########.fr       */
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
{
    for (int i = 0; i < 4; i++)
    {
        if (_cha.inventory[i])
            inventory[i] = (_cha.inventory[i])->clone();
        else
            inventory[i] = 0;
    }
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
            else
                inventory[i] = 0;
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
    if (i >= 4)
    {
        std::cout << "You got too much...!" << std::endl;
        return ;
    }
    if (inventory[i])
        delete inventory[i];
    (this->inventory)[i] = m->clone();
}

void    Character::unequip(int idx)
{
    delete this->inventory[idx];
    (this->inventory)[idx] = 0;
}

void    Character::use(int idx, ICharacter& target)
{
    if ((this->inventory)[idx] == 0)
        return ;
    ((this->inventory)[idx])->use(target);
}
