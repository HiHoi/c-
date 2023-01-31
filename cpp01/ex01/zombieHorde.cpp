/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 19:35:24 by hoslim            #+#    #+#             */
/*   Updated: 2023/01/30 19:57:21 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int n, std::string name)
{
    Zombie  *z = new Zombie[n];

    if (n <= 0)
    {
        std::cout << "Silent night..." << std::endl;
        return (0);
    }
    for (int i = 0; i < n; i++)
    {
        z[i] = Zombie(name + std::to_string(i));
        z[i].announce();
    }
    return (z);
}
