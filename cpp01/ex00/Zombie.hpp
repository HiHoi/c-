/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 16:19:48 by hosunglim         #+#    #+#             */
/*   Updated: 2023/01/30 19:26:14 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
#define _ZOMBIE_HPP_ 

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string _name;
    public:
        void    announce( void );
        Zombie(std::string name);
        ~Zombie(void);
};

Zombie  *newZombie( std::string name );
void    randomChump( std::string name );

#endif
