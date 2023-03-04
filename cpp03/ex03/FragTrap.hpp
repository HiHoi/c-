/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 21:00:48 by hoslim            #+#    #+#             */
/*   Updated: 2023/03/03 13:17:58 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FRAGTRAP_HPP_
#define _FRAGTRAP_HPP_

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
public:
    FragTrap(void);
    FragTrap(std::string name);
    ~FragTrap(void);
    FragTrap(const FragTrap &fragTrap);
    FragTrap&   operator=(const FragTrap &fragTrap);

    void    highFivesGuys(void);
    void    attack(const std::string &target);
};

#endif