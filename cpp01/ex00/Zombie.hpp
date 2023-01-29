/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosunglim <hosunglim@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 16:19:48 by hosunglim         #+#    #+#             */
/*   Updated: 2023/01/29 18:13:22 by hosunglim        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
#define _ZOMBIE_HPP_ 

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string name;
    public:
        void    announce( void );
};

Zombie  *newZombie( std::string name );
void    randomChump( std::string name );

#endif
