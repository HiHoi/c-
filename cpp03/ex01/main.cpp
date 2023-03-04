/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:39:15 by hoslim            #+#    #+#             */
/*   Updated: 2023/03/03 12:13:36 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap    a("Clap");
    ScavTrap    s("Scav");

    a.attack("Scav");
    s.takeDamage(0);
    s.guardGate();
    s.attack("Clap");
    a.takeDamage(20);
}
