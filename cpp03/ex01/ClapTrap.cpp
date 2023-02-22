/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:24:11 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/22 20:58:36 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "ClapTrap default has summoned" << std::endl;
    this->hitPoint = 10;
    this->energyPoint = 10;
    this->attackDamage = 0;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap has gone" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap " << name << " has summoned" << std::endl;
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
    this->hitPoint -= amount;
    if (this->hitPoint <= 0)
    {
        std::cout << "ClapTrap " << this->name;
        std::cout << " is killed" << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energyPoint > 0)
    {
        this->hitPoint += amount;
        std::cout << "ClapTrap " << this->name;
        std::cout << " heals himself " << amount << std::endl;
        this->energyPoint--;
    }
    else
        std::cout << "ClapTrep needs more energy" << std::endl;
}
