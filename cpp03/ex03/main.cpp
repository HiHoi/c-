/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:39:15 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/05 21:09:40 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap    a("Clap");
    ScavTrap    s("Scav");
    FragTrap    f("Frag");

    a.attack("Scav");
    s.guardGate();
    s.attack("Clap");
    f.highFivesGuys();
    f.attack("Scav");
}
