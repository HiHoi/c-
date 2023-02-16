/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:23:38 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/16 17:12:16 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CURE_HPP_
#define _CURE_HPP_

#include <iostream>
#include "AMateria.hpp"

class   Cure : public AMateria
{
    private:
        std::string type;
    protected:
    public:
        Cure(void);
        ~Cure(void);
        Cure(const Cure& _ice);
        Cure&    operator=(const Cure& _ice);

        std::string const&  getType(void) const;
        Cure*   clone(void) const;
        void    use(ICharacter& _target);
        
};

#endif