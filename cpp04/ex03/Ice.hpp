/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:23:40 by hoslim            #+#    #+#             */
/*   Updated: 2023/02/15 19:00:17 by hoslim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ICE_HPP_
#define _ICE_HPP_

#include <iostream>
#include "AMateria.hpp"

class   Ice : public AMateria
{
    private:
    protected:
    public:
        Ice(void);
        ~Ice(void);
        Ice(const Ice& _ice);
        Ice&    operator=(const Ice& _ice);

        AMateria*   clone(void) const;
};

#endif