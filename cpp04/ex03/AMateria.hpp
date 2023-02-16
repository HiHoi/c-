/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:20:08 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/16 17:32:32 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AMATERIA_HPP_
#define _AMATERIA_HPP_

#include <iostream>
#include "ICharacter.hpp"

class   ICharacter;

class   AMateria
{
    private:
    protected:
        const std::string type;
    public:
        AMateria(void);
        AMateria(std::string const& _type);
        virtual ~AMateria(void);
        AMateria(const AMateria& _amateria);
        AMateria&   operator=(const AMateria& _amateria);

        virtual std::string const& getType(void) const;
        
        virtual AMateria*   clone(void) const = 0;
        virtual void    use(ICharacter& target);
};

#endif