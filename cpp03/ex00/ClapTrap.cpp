/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:24:11 by hoslim            #+#    #+#             */
/*   Updated: 2023/03/03 12:38:14 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : hitPoint(10), energyPoint(10), attackDamage(0)
{
    std::cout << "ClapTrap has summoned" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap has gone" << std::endl;
}

ClapTrap::ClapTrap(std::string _name) : name(_name), hitPoint(10), energyPoint(10), attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " has summoned" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
    *this = claptrap;
}    

ClapTrap&   ClapTrap::operator=(const ClapTrap &claptrap)
{
    if (this != &claptrap)
    {
        this->name = claptrap.name;
        this->attackDamage = claptrap.attackDamage;
        this->hitPoint = claptrap.hitPoint;
        this->energyPoint = claptrap.energyPoint;
    }
    return (*this);
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->hitPoint <= 0)
    {
        std::cout << "* This claptrap looks like broken... *" << std::endl;
        return ;
    }
    if (this->energyPoint > 0)
    {
        std::cout << "ClapTrap " << this->name;
        std::cout << " attacks " << target;
        std::cout << ", causing " << this->attackDamage;
        std::cout << " points of damage!" << std::endl;
        this->energyPoint--;
    }
    else
        std::cout << "ClapTrep needs more energy" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoint <= 0)
    {
        std::cout << "ClapTrap " << this->name;
        std::cout << " is already broken" << std::endl;
        return ;
    }
    this->hitPoint -= amount;
    if (this->hitPoint <= 0)
    {
        std::cout << "ClapTrap " << this->name;
        std::cout << " is broken by this SMASH!" << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitPoint <= 0)
    {
        std::cout << "* This claptrap looks like broken... *" << std::endl;
        return ;
    }
    if (this->energyPoint > 0)
    {
        this->hitPoint += amount;
        std::cout << "ClapTrap " << this->name;
        std::cout << " heals himself " << amount << std::endl;
        this->energyPoint--;
    }
    else
        std::cout << "ClapTrap needs more energy" << std::endl;
}
