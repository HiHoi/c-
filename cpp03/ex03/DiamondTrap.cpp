/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 21:15:10 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/27 16:11:27 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : name(ClapTrap::name)
{
    std::cout << "DiamondTrap has summoned" << std::endl;
    ClapTrap::name = name + "_clap_name";
}

DiamondTrap::DiamondTrap(std::string _name) : ClapTrap(), FragTrap(), ScavTrap()
{
    this->attackDamage = 30;
    this->name = _name;
    ClapTrap::name = _name + "_clap_name";
    std::cout << "DiamondTrap " << this->name << " has summoned" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap has gone" << std::enld;
}

DiamondTrap::DiamondTrap(DiamondTrap const& _dia) : ClapTrap(_dia), FragTrap(_dia), ScavTrap(_dia), name(_dia.name)
{
    std::cout << "DiamondTrap " << this->name << " summoned" << std::endl;
}

DiamondTrap&    DiamondTrap::operator=(DiamondTrap const& _dia)
{
    if (this != &_dia)
    {
        this->name = _dia.name;
        this->attackDamage = _dia.attackDamage;
        this->energyPoint = _dia.energyPoint;
        this->hitPoint = _dia.hitPoint;
    }
    return (*this);
}

void    DiamondTrap::whoAmI(void)
{
    std::cout << "My name is " << this->name << std::endl;
}
