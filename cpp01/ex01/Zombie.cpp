/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 16:19:49 by hosunglim         #+#    #+#             */
/*   Updated: 2023/01/30 19:59:12 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    _name = '\0';
}

Zombie::Zombie(std::string name)
{
    _name = name;
    std::cout << "Beginning!" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "Bye Bye" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << _name << ": ";
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}
