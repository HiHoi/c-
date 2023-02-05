/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:24:11 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/05 20:20:14 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "Player has summoned" << std::endl;
    this->hitPoint = 10;
    this->energyPoint = 10;
    this->attackDamage = 0;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Player has gone" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Player " << name << " has summoned" << std::endl;
    this->name = name;
    this->hitPoint = 10;
    this->energyPoint = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
    *this = claptrap;
}    

ClapTrap&   ClapTrap::operator=(const ClapTrap &claptrap)
{
    if (this != &claptrap)
        this->name = claptrap.name;
    return (*this);
}

void    ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " << this->name;
    std::cout << " attacks " << target;
    std::cout << ", causing " << this->attackDamage;
    std::cout << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    this->hitPoint -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    this->hitPoint += amount;
}
