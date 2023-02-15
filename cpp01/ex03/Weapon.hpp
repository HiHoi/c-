/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 20:22:40 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/15 12:38:14 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_HPP_
#define _WEAPON_HPP_

#include <iostream>

class Weapon
{
    private:
        std::string _type;
    public:
        Weapon(std::string str);
        ~Weapon(void);
        const std::string &getType(void) const;
        void    setType(const std::string type);
};

#endif