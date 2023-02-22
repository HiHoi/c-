/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:23:11 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/22 20:59:11 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAPTRAP_HPP_
#define _CLAPTRAP_HPP_

#include <iostream>

class ClapTrap
{
    protected:
        std::string name;
        int         hitPoint;
        int         energyPoint;
        int         attackDamage;
    public:
        ClapTrap(void);
        virtual ~ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &claptrap);

        ClapTrap&   operator=(const ClapTrap &claptrap);
                
    virtual void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
};

#endif