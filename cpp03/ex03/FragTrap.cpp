/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 21:02:12 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/05 21:09:32 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    this->setHit(100);
    this->setEnergy(100);
    this->setDamage(30);
}
FragTrap::FragTrap(std::string name)
{
    this->setName(name);
    this->setHit(100);
    this->setEnergy(100);
    this->setDamage(30);
}

FragTrap::~FragTrap(void)
{
}

FragTrap::FragTrap(const FragTrap& fragTrap)
{
    *this = fragTrap;
}

FragTrap&   FragTrap::operator=(const FragTrap& fragTrap)
{
    if (this != &fragTrap)
    {
        this->setName(fragTrap.getName());
        this->setDamage(fragTrap.getDamage());
        this->setEnergy(fragTrap.getEnergy());
        this->setHit(fragTrap.getHit());
    }
    return (*this);
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->getName();
    std::cout << " wants to take high fives!" << std::endl;
}

void    FragTrap::attack(const std::string& target)
{
    std::cout << "FragTrap " << this->getName();
    std::cout << " attacks " << target;
    std::cout << ", causing " << this->getDamage();
    std::cout << " points of damage!" << std::endl;
}