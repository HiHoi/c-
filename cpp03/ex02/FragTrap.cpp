/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 21:02:12 by hoslim            #+#    #+#             */
/*   Updated: 2023/03/03 12:31:29 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "FragTrap has summoned" << std::endl;
    this->hitPoint = 100;
    this->energyPoint = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(std::string _name)
{
    std::cout << "FragTrap " << _name << " has summoned" << std::endl;
    this->name = _name;
    this->hitPoint = 100;
    this->energyPoint = 100;
    this->attackDamage = 30;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap has gone" << std::endl;
}

FragTrap::FragTrap(const FragTrap& fragTrap)
{
    *this = fragTrap;
}

FragTrap&   FragTrap::operator=(const FragTrap& fragTrap)
{
    if (this != &fragTrap)
        this->name = fragTrap.name;
    return (*this);
}

void    FragTrap::highFivesGuys(void)
{
    if (this->hitPoint <= 0)
    {
        std::cout << "* This fragtrap looks like broken... *" << std::endl;
        return ;
    }
    if (this->energyPoint > 0)
    {
        std::cout << "FragTrap " << this->name;
        std::cout << " wants to HIGHFIVE" << std::endl;
        this->energyPoint--;
    }
    else
        std::cout << "FragTrap needs more energy" << std::endl;
}

void    FragTrap::attack(const std::string& target)
{
    if (this->hitPoint <= 0)
    {
        std::cout << "* This fragtrap looks like broken... *" << std::endl;
        return ;
    }
    if (this->energyPoint > 0)
    {
        std::cout << "FragTrap " << this->name;
        std::cout << " attacks " << target;
        std::cout << ", causing " << this->attackDamage;
        std::cout << " points of damage!" << std::endl;
        this->energyPoint--;
    }
    else
        std::cout << "FragTrap needs more energy" << std::endl;
}