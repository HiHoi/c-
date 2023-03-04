/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:39:15 by hoslim            #+#    #+#             */
/*   Updated: 2023/03/03 12:55:43 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    ClapTrap    a("Clap");
    ScavTrap    s("Scav");
    FragTrap    f("Frag");
    DiamondTrap d("Diamond");

    a.attack("Scav");
    s.takeDamage(0);
    s.guardGate();
    s.attack("Clap");
    a.takeDamage(20);
    f.attack("Scav");
    s.takeDamage(30);
    f.highFivesGuys();
    d.attack("Frag");
    f.takeDamage(30);
    d.whoAmI();
    d.takeDamage(14);
    d.beRepaired(15);
    d.highFivesGuys();
}
