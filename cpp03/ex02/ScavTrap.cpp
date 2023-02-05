/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:54:01 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/05 20:58:55 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    this->setHit(100);
    this->setEnergy(50);
    this->setDamage(20);
}

ScavTrap::ScavTrap(std::string name)
{
    this->setName(name);
    this->setHit(100);
    this->setEnergy(50);
    this->setDamage(20);
}

ScavTrap::~ScavTrap(void)
{
}

ScavTrap::ScavTrap(const ScavTrap& scavTrap)
{
    *this = scavTrap;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap& scavTrap)
{
    if (this != &scavTrap)
    {
        this->setName(scavTrap.getName());
        this->setDamage(scavTrap.getDamage());
        this->setEnergy(scavTrap.getEnergy());
        this->setHit(scavTrap.getHit());
    }
    return (*this);
}

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->getName();
    std::cout << " uses GuardGate!" << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    std::cout << "ScavTrap " << this->getName();
    std::cout << " attacks " << target;
    std::cout << ", causing " << this->getDamage();
    std::cout << " points of damage!" << std::endl;
}
