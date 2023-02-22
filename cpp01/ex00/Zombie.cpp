/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 16:19:49 by hosunglim         #+#    #+#             */
/*   Updated: 2023/02/22 14:59:49 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << "Beginning!" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "Bye Bye" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << this->_name << ": ";
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}
