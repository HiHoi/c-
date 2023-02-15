/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:20:08 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/15 17:44:03 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AMATERIA_HPP_
#define _AMATERIA_HPP_

#include <iostream>
#include "ICharacter.hpp"

class   AMateria
{
    private:
    protected:
        std::string type;
    public:
        AMateria(void);
        AMateria(std::string const& _type);
        ~AMateria(void);
        AMateria(const AMateria& _amateria);
        AMateria&   operator=(const AMateria& _amateria);

        std::string const& getType(void) const;
        
        virtual AMateria*   clone(void) const = 0;
        virtual void    use(ICharacter& target);
};

#endif