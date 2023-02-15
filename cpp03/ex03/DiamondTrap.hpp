/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 21:14:11 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/14 15:45:46 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DIAMONDTRAP_HPP_
#define _DIAMONDTRAP_HPP_

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, ScavTrap
{
private:
    std::string name;
public:
    DiamondTrap(void);
    DiamondTrap(std::string _name);
    ~DiamondTrap(void);
    DiamondTrap(DiamondTrap const& _dia);
    DiamondTrap& operator=(DiamondTrap const& _dia);

    void    whoAmI(void);
    using   ScavTrap::attack;
    using   FragTrap::getHit;
    using   ScavTrap::getEnergy;
    using   FragTrap::getDamage;
};

#endif