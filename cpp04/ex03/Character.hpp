/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:08:15 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/16 17:15:11 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CHARACTER_HPP_
#define _CHARACTER_HPP_

#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        const std::string name;
        AMateria*   (inventory[4]);
    public:
        Character(std::string _name);
        ~Character(void);
        Character(const Character& _cha);
        Character&  operator=(const Character& _cha);

        std::string const&  getName(void) const;
        void    equip(AMateria* m);
        void    unequip(int idx);
        void    use(int idx, ICharacter& target);
};

#endif