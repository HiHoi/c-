/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 20:23:10 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/15 12:38:11 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_HPP_
#define _HUMANA_HPP_

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string _name;
    Weapon      &_weapon;
public:
    HumanA(void);
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void    attack(void);
};

#endif