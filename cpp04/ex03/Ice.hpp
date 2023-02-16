/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:23:40 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/16 17:12:09 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ICE_HPP_
#define _ICE_HPP_

#include <iostream>
#include "AMateria.hpp"

class   Ice : public AMateria
{
    private:
        std::string type;
    protected:
    public:
        Ice(void);
        ~Ice(void);
        Ice(const Ice& _ice);
        Ice&    operator=(const Ice& _ice);

        std::string const&  getType(void) const;
        Ice*   clone(void) const;
        void    use(ICharacter& _target);
};

#endif