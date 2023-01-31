/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 16:19:53 by hosunglim         #+#    #+#             */
/*   Updated: 2023/01/30 19:52:22 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int main(void)
{
    Zombie *z = zombieHorde(10, "First");

    z->announce();
    delete [] z;
    // for (int i = 0; i < 10; i++)
    //     delete z;
    system("leaks Brainz");
}