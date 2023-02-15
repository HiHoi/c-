/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 21:15:10 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/14 15:50:00 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : name(ClapTrap::getName())
{
    this->name = name + "_clap_name";
}

DiamondTrap::DiamondTrap(std::string _name)
{
    this->setName(_name);
}

DiamondTrap::~DiamondTrap(void)
{
}

DiamondTrap::DiamondTrap(DiamondTrap const& _dia)
{
    this->name = _dia.getName();
}

DiamondTrap&    DiamondTrap::operator=(DiamondTrap const& _dia)
{
    if (this != &_dia)
    {
        this->name = _dia.getName();
    }
    return (*this);
}

void    DiamondTrap::whoAmI(void)
{
    std::cout << "My name is " << this->getName() << std::endl;
}
