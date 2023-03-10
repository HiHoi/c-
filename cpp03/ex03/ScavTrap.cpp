/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:54:01 by hoslim            #+#    #+#             */
/*   Updated: 2023/03/03 12:31:12 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    std::cout << "ScavTrap has summoned" << std::endl;
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string _name)
{
    std::cout << "ScavTrap " << _name << " has summoned" << std::endl;
    this->name = _name;
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 20;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap has gone" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scavTrap)
{
    *this = scavTrap;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap& scavTrap)
{
    if (this != &scavTrap)
    {
        this->name = scavTrap.name;
        this->attackDamage = scavTrap.attackDamage;
        this->hitPoint = scavTrap.hitPoint;
        this->energyPoint = scavTrap.energyPoint;
    }
    return (*this);
}

void    ScavTrap::guardGate(void)
{
    if (this->hitPoint <= 0)
    {
        std::cout << "* This scavtrap looks like broken... *" << std::endl;
        return ;
    }
    if (this->energyPoint > 0)
    {
        std::cout << "ScavTrap " << this->name;
        std::cout << " uses GuardGate!" << std::endl;
        this->energyPoint--;
    }
    else
        std::cout << "ScavTrap needs more energy" << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    if (this->hitPoint <= 0)
    {
        std::cout << "* This scavtrap looks like broken... *" << std::endl;
        return ;
    }
    if (this->energyPoint > 0)
    {
        std::cout << "ScavTrap " << this->name;
        std::cout << " attacks " << target;
        std::cout << ", causing " << this->attackDamage;
        std::cout << " points of damage!" << std::endl;
        this->energyPoint--;
    }
    else
        std::cout << "ScavTrap needs more energy" << std::endl;
}
