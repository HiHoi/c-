/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 21:15:10 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/22 21:14:06 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    std::cout << "DiamondTrap has summoned" << std::endl;
    this->name = "default" + "_clap_name";
}

DiamondTrap::DiamondTrap(std::string _name)
{
    std::cout << "DiamondTrap " << _name << " has summoned" << std::endl;
    this->name = _name + "_clap_name";
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap has gone" << std::enld;
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
    std::cout << "My name is " << this->name << std::endl;
}
