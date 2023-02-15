/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:23:11 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/15 12:39:00 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAPTRAP_HPP_
#define _CLAPTRAP_HPP_

#include <iostream>

class ClapTrap
{
private:
    std::string name;
    int         hitPoint;
    int         energyPoint;
    int         attackDamage;
public:
    ClapTrap(void);
    ~ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &claptrap);

    ClapTrap&   operator=(const ClapTrap &claptrap);

    std::string    getName(void) const;
    unsigned int     getHit(void) const;
    unsigned int     getEnergy(void) const;
    unsigned int     getDamage(void) const;
    
    void    setName(std::string name);
    void    setHit(unsigned int);
    void    setEnergy(unsigned int);
    void    setDamage(unsigned int);
    
    void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
};

#endif